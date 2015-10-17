#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <sys/types.h>

void thread_fn(void *arg);
char *message = "welcome";

void main()
{
	int i;
	pthread_t thread1;
	void *thread_result;


