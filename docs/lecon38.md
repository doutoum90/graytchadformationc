# Leçon C 38

## Les threads (processus léger)

bibliothèque des threads

``` c
#include <pthread.h>
```

création d'un thread

``` c
/*
retourne 

* 0 si la création est reussi
* autre valeur si la création a echoué
* */

int pthread_create(pthread_t *thread, pthread_attr_t *attr, void *(*start_routine) (void *), void *arg);
```

terminaison du thread

``` c
void pthread_exit(void *ret);
```

attente de la fin du thread

``` c
int pthread_join(pthread_t th, void **thread_return);
```

**exclusion mutuelle et section critique**
Entre les threads les ressources sont partagés donc pour protéger les sections critiques, nous utilisons des verrous appelés **mutex** pour assurer qu'une ressource est accéder par un seul thread à la fois.

* la section critique est l'instruction (ou ensemble d'instruction) qui permet d'accéder et/ ou modifier une ressource partagée.
* Les mutex sont des variables de type `pthread_mutex_t` qui ont deux états : libre, disponible.

``` c
/*
initialisation d'un thread
*/
pthread_mutex_t mutex =PTHREAD_MUTEX_INITIALIZER;
/*
pour verrouer le mutex
*/
int pthread_mutex_lock(pthread_mutex_t *mutex);
/*
pour deverrouer le mutex
*/
int pthread_mutex_unlock(pthread_mutex_t *mutex);
/*
destruction du mutex
*/
int pthread_mutex_destroy(pthread_mutex_t *mutex);
/*
création de la condition
*/
pthread_cond_t condition = PTHREAD_COND_INITIALIZER;
/*
endormir le thread
*/
int pthread_cond_wait(pthread_cond_t *nomCondition, pthread_mutex_t *mutex);
/*
reveillez le thread
*/
int pthread_cond_signal(pthread_cond_t *nomCondition);
```
