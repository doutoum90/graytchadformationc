# Leçon C 33

## PostgreSQL

### Installation de postgresql

``` console
brew search postgres
brew install postgres
```

### Démarrer /arrêter postgres

``` console
pg_ctl -D  /usr/local/var/postgres start
pg_ctl -D  /usr/local/var/postgres stop
```

### Connexion à une BDD

``` console
psql postgres # connexion avec le role postgres
psql postgres -U graytchad # connexion avec le role de graytchad
```

### Manipulation SQL

```sql 
CREATE ROLE graytchad WITH LOGIN PASSWORD 'graytchad'; # creation d'un role graytchad
ALTER ROlE graytchad CREATEDB; # accordé le role de création de bdd
CREATE DATABASE scolarite; # création de la bdd scolarité
DROP DATABASE scolarite; # suppression de la bdd scolarité

``` 

### Quelques commandes

```console
\du # voir la liste des roles et leurs details
\q # quitter la session
\l # voir la liste des tables
```

### Connexion à une Bdd 

``` console
\connect scolarite;
```

### Création et suppression de table 

``` sql
CREATE TABLE STUDENT(name varchar(100), lastname varchar(100));
```

### Ajout des enregistrements dans la table

```sql 
INSERT INTO STUDENT(name, lastname) VALUES ("GRAYTCHAD", "GRAYTCHAD"); 
INSERT INTO STUDENT(name, lastname) VALUES ("GRAYTCHAD1", "GRAYTCHAD1"); 
INSERT INTO STUDENT(name, lastname) VALUES ("GRAYTCHAD2", "GRAYTCHAD2"); 

``` 

### Récupération des enregistrements

```sql 
SELECT * FROM STUDENT;
```

### Résultat du select

|||
|-----|-------|
|name|lastname|
|GRAYTCHAD|GRAYTCHAD|
|GRAYTCHAD1|GRAYTCHAD1|
|GRAYTCHAD2|GRAYTCHAD2|

### Utiliser un outils graphique

[pgadmin](https://www.pgadmin.org/download/pgadmin-4-macos/)
[postico](https://eggerapps.at/postico/)
