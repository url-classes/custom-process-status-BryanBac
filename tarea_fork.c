#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <sys/wait.h>
// Programa hecho por Bryan Bac

int main(){
	printf("Process Type	PID	PPID	Time\n");
	fork();
	fork();
	wait(NULL);
	fork();
	wait(NULL);
	time_t tiempo=time(0);
	struct tm *tlocal=localtime(&tiempo);
	char output[128];
	strftime(output,128,"%d/%m/%y %H:%M:%S",tlocal);
	printf("System Process	%d	%d	%s\n",getpid(),getppid(),output);
	exit(EXIT_SUCCESS);
	exit(EXIT_SUCCESS);
	return 0;
}
