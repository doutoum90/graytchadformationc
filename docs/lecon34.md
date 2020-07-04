# Leçon C 34
## Connexion à un BDD Postgresql

```console
gem install pg
```

[documentation](https://www.postgresql.org/docs/9.5/libpq-example.html)
### Connexion à la base de données
```c
#include  <libpq-fe.h>
// Faire une connection à la base de donnée
PGconn *PQconnectdb( "dbname = postgres");
```
### Teste de la connexion
``` c
int PQstatus(PGconn *conn);
/**
retourne  
- CONNECTION_OK si connexion établie avec succés
- et diffèrent si pas de connexion établit
**/
char *PQerrorMessage(PGconn *conn); 
/*
recuperer la cause de l'erreur
*/
```

### Execution de query
``` c
PGresult *PQexec(PGconn *conn, char * requette);
/*
execution de la query requette avec la connexion conn
*/
int PQresultStatus(res);
/*
retourne 
- PGRES_TUPLES_OK si la requette s'execute avec succés
- et différent si la requette ne se passe pas bien.
*/
char * PQerrorMessage(PGconn *conn);
/*
retourne la cause de l'erreur si la requette s'est mal executée.
*/
void PQclear(PGresult *res);
/*
nettoyer le contexte
*/

int PQnfields(PGresult *res);
/*
retourne le nombre de colones retourne.
*/
int PQntuples(PGresult *res);
/*
retourne le nombre d'enregistrement de res.
*/

char * PQgetvalue(PGresult *res, int ligne, int colonne);
/*
retourne l'element positionné à la ligne ligne et à la colonne colonne
*/
```
    
### Fermer la connexion

```c
void PQfinish(PGconn *conn);
/*
ferme la connexion
*/
```