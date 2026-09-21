-- TP1_Administration_des_bases_de_données
-- @ZouariOmar (zouariomar20@gmail.com)
-- 2026-09-14

-- 1
SELECT count(pname) FROM v$process;

-- 2
SELECT
  u.username, 
  (select count(*) FROM dba_users o WHERE o.username = u.username) "obj_number"
FROM dba_users u;

-- 3
CREATE OR REPLACE FUNCTION fn_users
   RETURN NUMBER
   IS user_number NUMBER;
BEGIN
  SELECT count(*)
  INTO user_number
  FROM dba_users
  WHERE trunc(created, 'MM') = trunc(SYSDATE, 'MM');

  RETURN user_number;
END;
/

-- 4
CREATE OR REPLACE PROCEDURE PROC_TABLES (
  p_user IN VARCHAR2
)
AS
BEGIN
    FOR r IN (
        SELECT owner, table_name
        FROM dba_tables
        WHERE owner = UPPER(p_user)
        ORDER BY table_name
    )
    LOOP
        DBMS_OUTPUT.PUT_LINE(r.owner || ' : ' || r.table_name);
    END LOOP;
END;
/

-- 5
CREATE OR REPLACE FUNCTION FN_CONNEXION
RETURN NUMBER
IS
    v_nombre NUMBER;
BEGIN
    SELECT COUNT(*)
    INTO v_nombre
    FROM v$session
    WHERE username IS NOT NULL;

    RETURN v_nombre;
END;
/

-- 6
CREATE OR REPLACE FUNCTION FN_TOTAL
RETURN NUMBER
IS
    v_total NUMBER;
BEGIN
    SELECT SUM(value)
    INTO v_total
    FROM v$sga;

    RETURN v_total;
END;
/

-- 7
CREATE OR REPLACE FUNCTION FN_SESSION (p_username IN VARCHAR2)
RETURN TIMESTAMP
IS
    v_last_login TIMESTAMP;
BEGIN
    SELECT last_login
    INTO v_last_login
    FROM dba_users
    WHERE username = UPPER(p_username);

    RETURN v_last_login;

EXCEPTION
    WHEN NO_DATA_FOUND THEN
        RETURN NULL;
END;
/

-- 8
CREATE OR REPLACE FUNCTION FN_EXPIRED
RETURN NUMBER
IS
    v_nombre NUMBER;
BEGIN
    SELECT COUNT(*)
    INTO v_nombre
    FROM DBA_USERS
    WHERE ACCOUNT_STATUS LIKE '%EXPIRED%';

    RETURN v_nombre;
END;
/

-- 9
CREATE OR REPLACE PROCEDURE PROC_MEMORY (
  Nowner IN VARCHAR2,
  Ntable IN VARCHAR2
)
IS
    v_blocks NUMBER;
BEGIN
    SELECT blocks
    INTO v_blocks
    FROM dba_segments
    WHERE owner = UPPER(Nowner)
      AND segment_name = UPPER(Ntable)
      AND segment_type = 'TABLE';

    DBMS_OUTPUT.PUT_LINE(
        'Nombre de blocs de la table ' ||
        UPPER(Nowner) || '.' || UPPER(Ntable) ||
        ' : ' || v_blocks
    );

EXCEPTION
    WHEN NO_DATA_FOUND THEN
        DBMS_OUTPUT.PUT_LINE('Table inexistante ou segment introuvable.');
END;
/

-- 10
CREATE OR REPLACE FUNCTION FN_EXP_DATE (
    Nuser IN VARCHAR2
)
RETURN DATE
IS
    v_expiry_date DATE;
BEGIN
    SELECT expiry_date
    INTO v_expiry_date
    FROM dba_users
    WHERE username = UPPER(Nuser);

    RETURN v_expiry_date;

EXCEPTION
    WHEN NO_DATA_FOUND THEN
        RETURN NULL;
END;
/

-- 11
SELECT COUNT(DISTINCT TABLE_NAME)
FROM USER_TAB_PRIVS;

-- 12
DECLARE
BEGIN
    FOR obj IN (
        SELECT object_type,
               object_name,
               created,
               last_ddl_time
        FROM user_objects
        ORDER BY object_type, object_name
    )
    LOOP
        DBMS_OUTPUT.PUT_LINE(
            'Type : ' || obj.object_type ||
            ' | Objet : ' || obj.object_name ||
            ' | Created : ' || TO_CHAR(obj.created, 'DD/MM/YYYY HH24:MI:SS') ||
            ' | Last modification : ' ||
            TO_CHAR(obj.last_ddl_time, 'DD/MM/YYYY HH24:MI:SS')
        );
    END LOOP;
END;
/

-- 13
SELECT constraint_name, constraint_type
FROM user_constraints
WHERE table_name = 'DEPARTMENTS' AND owner = 'HR';

-- 14
CREATE OR REPLACE FUNCTION FN_LAST_OBJ
RETURN VARCHAR2
IS
    v_objet VARCHAR2(100);
BEGIN
    SELECT object_name
    INTO v_objet
    FROM user_objects
    WHERE created = (SELECT MAX(CREATED) FROM USER_OBJECTS);
EXCEPTION
    WHERE NO_DATA_FOUND THEN
        RETURN 'No object :('
    RETURN v_objet;
END;
/
