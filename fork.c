#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<sys/wait.h>

void main()
{
	pid_t pid;
	int i,n,exit_code;
	char *message;
	printf("fork() program starting\n");
	pid = fork();
	switch(pid) {
	case -1:
	printf("fork failed \n");
	break;
	case 0:
	message = "This is child";
	n = 6;
	exit_code = 37;
	break;
	default:
	message = "This is parent";
	n = 3;
	exit_code = 0;
	break;
	}
	for(i=0;i<n;i++)
	{
		printf("%s\n",message);
		//puts(message);
		sleep(2);
	}
	if ( pid != 0 ) {
	int stat_val;
	pid_t child_pid;
	
	child_pid = wait(&stat_val);

	printf("Child has finished PID=%d\n",child_pid);
	
	if ( WIFEXITED(stat_val)) 
		printf("child exited normally with code %d\n", WEXITSTATUS(stat_val));
	else
		printf("child exited abnormally");
	}
	exit(exit_code);
}
