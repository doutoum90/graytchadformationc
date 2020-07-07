#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main(int argc, char **argv)
{
    /*  int pid = (int)getpid();
    int ppid = (int) getppid(); */

    pid_t pidfils = fork();
    switch (pidfils)
    {
    case -1:
        printf("erreur de création de fils\n");
        exit(EXIT_SUCCESS);
        break;
    case 0:
        printf("dans le processus fils, le pid du pere est %d, le pid du fils %d\n", (int)getppid(), (int)getpid());
        break;
    default:
        printf("dans le processus pere, le pid du pere est %d, le pid du fils %d\n", (int)getpid(), pidfils);
        wait(NULL);
        break;
    }
    // printf("le pid du processus courant %d et celui de son pere est %d\n", pid, ppid);
}