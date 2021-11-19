#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include "pthread.h"
using namespace std;
void*doit(void*);
int i=0,j=0;
int sum = 1;
int n;
int k;
int main(){
    pthread_t tid;
    pid_t pid, cpid;

    int status;
    pthread_create(&tid, NULL, doit,NULL);

    cout>>"Please enter a number to fibonacci sequence";
    cin>>n;

    pid = fork();

    if (pid == 0){
  //    while(i<n) {
  //			    cout << " ";
  //			    i++;
  //			 }


   }  

    else{

    cpid = wait(&status);
    pthread_join(tid, NULL);

   }
   return 0;
   
   }
   
   
void*doit(void*vptr){
	for(k=1;k<n;k++)
        {
                i = j;

                j= sum;

                sum = i + j;

                printf("Fibonacci seqence is: %d\n",sum);

        }
	
	return(NULL);
}
