#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main(int argc, char **argv)
{
    /*  int pid = (int)getpid();
    int ppid = (int) getppid(); */
    // printf("le pid du processus courant %d et celui de son pere est %d\n", pid, ppid);
    // creation du tube
    int desc[2], desc2[2];
    char salutation[] = "Bonjour mon fils\n";
    char lireSalutation[100], lireReponseFils[100];
    if (pipe(desc) != 0 || pipe(desc2) != 0)
    {
        fprintf(stderr, "Erreur de création du tube\n");
        exit(EXIT_FAILURE);
    }

    pid_t pidfils = fork();
    switch (pidfils)
    {
    case -1:
        printf("erreur de création de fils\n");
        exit(EXIT_SUCCESS);
        break;
    case 0:
        read(desc[0], lireSalutation, 100);
        close(desc[0]);
        printf("message du pere: %s\n", lireSalutation);
        write(desc2[1], "Bien reçu papa \n", 100);
        close(desc2[1]);
        // printf("dans le processus fils, le pid du pere est %d, le pid du fils %d\n", (int)getppid(), (int)getpid());
        break;
    default:
        write(desc[1], salutation, 100);
        close(desc[1]);
        read(desc2[0], lireReponseFils, 100);
        close(desc2[0]);
        printf("reponse de mon fils :%s", lireReponseFils);
        // printf("dans le processus pere, le pid du pere est %d, le pid du fils %d\n", (int)getpid(), pidfils);
        wait(NULL);
        break;
    }
}