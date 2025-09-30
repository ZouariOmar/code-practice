<?php
class config
{
  private static $pdo = null;

  /**
   * ### Connect to zouari_test DB using the PDO framework
   * @return mixed
   */
  public static function getConnection()
  {
    if (!isset(self::$pdo)) {
      try {
        self::$pdo = new PDO(
          'mysql:host=localhost;
          dbname=zouari_test',
          'root',
          '',
          [
            PDO::ATTR_ERRMODE => PDO::ERRMODE_EXCEPTION,
            PDO::ATTR_DEFAULT_FETCH_MODE => PDO::FETCH_ASSOC
          ]
        );
        // echo "DB connected with success!";
      } catch (Exception $e) {
        die('Error: ' . $e->getMessage());
      }
    }
    return self::$pdo;
  }
}

// Exec the getConnection function
// config::getConnection();