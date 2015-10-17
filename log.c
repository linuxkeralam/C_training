#include <stdio.h>
#include <unistd.h>
#include <syslog.h>

int main(void) {
	int i;


	for(i=0; i<1000; i++) {
		openlog("AuditLog", LOG_PID|LOG_CONS, LOG_LOCAL1);
 		syslog(LOG_INFO, "A different kind of Hello world ... %d",i);
		closelog();
	}
	
 

 return 0;
}

