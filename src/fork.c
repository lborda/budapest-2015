#include  <stdio.h>
#include  <sys/types.h>

int main(void)
{
     pid_t  pid;
     pid_t  ppid;
     int var;
     var = 100;

     pid = fork();
     if (pid == 0){
          var=var+68;
          printf("\nI am the Child process\n");
          printf("Child var = %d\n", var);
	  //execl("/bin/ls", "ls", "-l");
	  sleep(10000000000000);
     }
     else { 
          printf("\nI am the Parent PPID: %ld", (long)getpid());
	  printf("\nChild process pid = %d\n", pid);
          printf("Parent var = %d\n", var);
	  sleep(100000);
	  //int status;
          //(void)waitpid(pid, &status, 0);
	  //sleep(1000);
     }	
}
