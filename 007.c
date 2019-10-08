// 7번 이름을 name변수에 입력받고, "당신의 이름은 xxx입니다."를 출력하세요
// 입력받은 문자열을 printf 함수를 이용하여 출력하는 기본 예제

#include<stdio.h>
int main(){
	char str[20]="";
	
	printf("당신의 이름은?: ");
	scanf("%s", str);

	printf("당신의 이름은 %s입니다. \n", str);
	
	return 0;
}