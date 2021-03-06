/*
 * The fork() function
 */
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h> 
#include <unistd.h> 

int main()
{
  int i, pid;
  
  printf("My process ID is %d\n", getpid());
  pid = fork();
  for ( i = 0; i < 3; i++ ) {
    if (pid == -1) {
      printf("fork failure ... getting out\n");
      exit (-1);
    }
    
    if ( pid != 0 ) {
      printf("I am the parent => PID = %d, child ID = %d\n", getpid(), pid);
      //exit(0);
      //while(1);
    }
    else {
      printf("I am the child  => PID = %d\n", getpid());
      //while(1);
    }
  }
  while(1);

  return(0);
}
