#include<stdio.h>

void Recursive(int n){
	if(n <= 0)
		return;
	printf("This is %d \n",n);
	Recursive(n-1);
}
int Factorial(int n){
	if(n == 0)
		return 1;
	else
		return n*Factorial(n-1);
}
int main(){
	int n;
	n = Factorial(5);
	printf("ÆÑÅä¸®¾ó : %d \n",n);

	return 0;
}