# TD4

[TD4](Td_4_constructeur-destructeur.pdf)

## Ex2: Ordre d’appel

```bash
# 1. void main() {Truc x;}
+++++
-----
# 2. void main() {Truc *x=new Truc();}
+++++
# 3. void main() {Truc * x=new Truc(); delete x;}
+++++
-----
```
