// 3-23 10진수 12586을 16진수로 출력하세요. 16진수 표기는 0~9,A,B,C,D,E,F를 사용하며, 출력 함수의
// %x, %X 형식을 사용하지 말고 직접 변환하여 출력하세요.
// 힌트 : 16 나누기와 나머지를 활용하여 16진수 표기로 바꿉니다. 한 자리에서 9를 넘어간 16진수는 A~F 문자를 이용하여 표기합니다
// (A = 10. B=11.C=12.D=13.E=14.F=15)

#include<stdio.h>
#define NUMBER 12586
int main(){
	int n=NUMBER;
	char x[]="0123456789ABCDEF";
	int i,tmp,cnt=0;
	char num[5]={0,}, num2[5]={0,};

	while(n>0){
		tmp = n %16;
		n /= 16;
		num[cnt] = x[tmp];
		cnt++;
	}
	for(i=0; i<cnt; i++){
		num2[i] = num[cnt-i-1];
	}

	printf("10진수 %d ==> 16진수 %s\n",NUMBER,num2);


	return 0;
}