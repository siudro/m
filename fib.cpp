#include <iostream>
using namespace std;
int main(){
	int n;
	int fib[3];
	fib[0] =0;
	fib[1] =1;
	for(n=2; n<3; n++){

		fib[n]= fib[n-1]+fib[n-2];
		cout<<fib[n];
	}



return(0);
}
