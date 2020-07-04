#include <stdio.h>
#include <stdlib.h>
#include <libpq-fe.h>

int main(int argc, char **argv)
{
    // connexion à la BDD
    PGconn *connexion = PQconnectdb("dbname = scolarite");
    if (PQstatus(connexion) != CONNECTION_OK)
    {
        fprintf(stderr, "Impossible d'etablir la connexion : %s", PQerrorMessage(connexion));
        exit(EXIT_FAILURE);
    }
    fprintf(stdout, "BRAVO: Connexion à la BDD établie\n");

    //execution d'une requette
    char requette[] = "SELECT * FROM STUDENT";
    PGresult *resultat = PQexec(connexion, requette);

    if (PQresultStatus(resultat) != PGRES_TUPLES_OK)
    {
        fprintf(stderr, "Impossible d'executer la requette : %s", PQerrorMessage(connexion));
        PQclear(resultat);
        exit(EXIT_FAILURE);
    }
    fprintf(stdout, "BRAVO: requette executée avec succés\n");

    // affichage des resultats
    printf("%d ----------%d ------------%s\n", PQnfields(resultat), PQntuples(resultat), PQgetvalue(resultat, 3, 1));
    unsigned i, j;
    for (i = 0; i < PQntuples(resultat); i++)
    {
        for (j = 0; j < PQnfields(resultat); j++)
        {
            printf("%-15s", PQgetvalue(resultat, i, j));
        }
        printf("\n");
    }

    // libération des réssources
    PQclear(resultat);
    PQfinish(connexion);
    return 0;
}