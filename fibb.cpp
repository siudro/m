#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include "pthread.h"
using namespace std;
void*doit(void* arg);
int n;
int k;
int main(){
    pthread_t tid;
    pid_t pid, cpid;
    cout>>"Please enter fibonacci sequence number";
    cin>>n;
    int status;



    pid = fork();

    if (pid == 0){
      pthread_create(&tid, NULL, doit,(void*)&n);

   }  

    else{

    cpid = wait(&status);
    pthread_join(tid, NULL);

   }
   return 0;
   
   }
   
   
void*doit(void* arg){
	int c, fib0 = 0, fib1 = 1, fibN;
	for ( c = 0 ; c <n; c++ ){
		if ( c <= 1 )
		fibN = c;
		else{
			fibN = fib0 + fib1;
			fib0 = fib1;
			fib1 = fibN;
		}
		cout << fibN<<endl;
}

		
		cout<<fibN<<endl;
		return(NULL);
}
