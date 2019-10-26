// 3-21 서로 다른 수를 세개 입력받고, 크기가 중간인 수를 출력하세요. 만약 같은 수를 입력받으면 다시 입력받으세요.
// swap 함수를 사용할때는 전달인수에 주소연산자 &를 이용하여 변수의 주소를 넘겨야합니다.
/*
void swap(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
*/

#include<stdio.h>
void swap(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int main(){
	int a=0,b=0,c=0;

	while(a == b | b == c | c == a){
		printf("서로 다른 세 정수를 입력하세요(예; 30 50 20 <엔터>)");
		scanf("%d %d %d", &a,&b,&c);
	}
	if(a > b)
		swap(&a,&b);
	if(a > c)
		swap(&a,&c);
	if(b > c)
		swap(&b,&c);

	printf("%d %d %d갑의 중간 값 = %d\n", a,b,c,b);
	return 0;
}