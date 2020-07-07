#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

/* int somme(int a, int b)
{
    return a + b;
}
int mutl(int a, int b)
{
    return a * b;
} */

int compteur = 0, compteurfnt1 = 0, compteurfnt2 = 0;
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t condition = PTHREAD_COND_INITIALIZER;

void *function1(void *args)
{
    printf("Hello fonction 1\n");
    int j;

    while (compteurfnt1 < 100000)
    {
        pthread_mutex_lock(&mutex);
        // pthread_cond_wait(&condition, &mutex);
        compteurfnt1++;
        compteur++;
        if (compteurfnt1 % 1000 == 0)
        {
            pthread_cond_wait(&condition, &mutex); // endormir le thread        
        }
        pthread_cond_signal(&condition);// reveiller les threads en attente
        pthread_mutex_unlock(&mutex);// liberation thread
    }

    pthread_mutex_destroy(&mutex);
    pthread_exit(NULL);
}

void *function2(void *args)
{
    printf("Hello fonction 2\n");
    int j;

    while (compteurfnt2 < 100000)
    {
        pthread_mutex_lock(&mutex);
        compteurfnt2++;
        compteur++;
        if (compteurfnt2 % 1000 == 0)
        {
            pthread_cond_wait(&condition, &mutex); // endormir le thread        
        }
        pthread_cond_signal(&condition);// reveiller les threads en attente
        pthread_mutex_unlock(&mutex);// liberation thread
    }
    pthread_mutex_destroy(&mutex);
    pthread_exit(NULL);
}

int main(int argc, char **argv)
{
    /*  int(*pt_fonc[2])(int, int);
    pt_fonc[0] =&somme;
    pt_fonc[1] =&mutl;
    int i;
    for( i= 0; i<2; i++)
        printf("%d  %d = %d\n", 3, 5, pt_fonc[i](3, 5)); */
    /*  int pid = (int)getpid();
    int ppid = (int) getppid(); */
    // printf("le pid du processus courant %d et celui de son pere est %d\n", pid, ppid);
    // creation du tube
    /*  int desc[2], desc2[2];
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
    } */
    pthread_t thread1, thread2;
    if (pthread_create(&thread1, NULL, function1, NULL) != 0 || pthread_create(&thread2, NULL, function2, NULL) != 0)
    {
        fprintf(stderr, "Erreur de création de thread\n");
    }

    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    printf("%d", compteur);
}