#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
void *print_message(void *arg);
pthread_mutex_t mutex1 = PTHREAD_MUTEX_INITIALIZER;
int G_n=0;
//char *message="argv[1]";
char *message="Iam thread1";
char *message1="Iam thread2";
main(int argc, char** argv)
{
    int res;
    pthread_t a_thread, b_thread;
    void *thread_result;

    /*if(argc <= 1){
        printf("few parameters\n");
        exit(EXIT_FAILURE);
    }*/
    res = pthread_create(&a_thread, NULL, print_message, (void *) message);
    if(res != 0){
        perror("thread creation A failed");
        exit(EXIT_FAILURE);
    }
    res = pthread_create(&b_thread, NULL, print_message, (void *) message1);
    if(res != 0){
        perror("thread creation B failed");
        exit(EXIT_FAILURE);
    }
    //print_message(message);
    printf("Waiting for the thread 1 to finish\n");
    res = pthread_join(a_thread, &thread_result);
    if ( res != 0){
        perror("thread join failed");
        exit(EXIT_FAILURE);
    }
    printf("the thread %s joined\n", (char *)thread_result);
    printf("Waiting for the thread 1 to finish\n");
    res = pthread_join(b_thread, &thread_result);
    if ( res != 0){
        perror("thread B join failed");
        exit(EXIT_FAILURE);
    }
    printf("the thread %s joined\n", (char *)thread_result);
    printf("the new message: %s \n", message);
}

void *print_message(void *arg)
{
    int i;
    printf("In the thread \n");
    for (i=0;i<10;i++) {

    sleep(1);
    printf("%s \n",(char *)arg);
    pthread_mutex_lock( &mutex1 );
    printf("%d\n",G_n++);
    pthread_mutex_unlock(&mutex1);
    }
    message="NEw message";
    pthread_exit("thread exit cpu");
}

