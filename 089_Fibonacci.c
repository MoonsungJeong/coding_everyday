#include<stdio.h>
#include<time.h>

int Fib(int n){
	if(n == 1)
		return 0;
	else if(n == 2)
		return 1;
	else
		return Fib(n-1) + Fib(n-2);
}
int Fib2(int n){
	int First = 0, Second = 1;
	int i,temp;
	if(n == 1)
		return First;
	else if(n == 2)
		return Second;
	else{
		for(i=0; i < n-2; i++){
			temp = First + Second;
			First = Second;
			Second = temp;
		}
		return Second;
	}
}
int main(){
	int i;
	clock_t start, end;
	float res;
	
	start = clock();
	for(i=1; i <= 40; i++)
		printf("Fib(%d) = %d\n",i,Fib(i));
	end = clock();
	res = (float)(end - start)/ CLOCKS_PER_SEC;
	printf("시간: %.3f\n\n",res);
	
	start = clock();
	for(i=1; i <= 40; i++)
		printf("Fib(%d) = %d\n",i,Fib2(i));
	end = clock();
	res = (float)(end - start)/ CLOCKS_PER_SEC;
	printf("시간: %.3f\n\n",res);


	return 0;
}