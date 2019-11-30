// 3-56 10~100000 범위에서 같은 단위 숫자로만 이루어진 수를 한 줄에 9개씩 출력하세요.
// 예 11,22,33,44,55,66,77,88,99
//    111,222,333,444,555,666,777,888,999
#include<stdio.h>
int check(int num){
	int i, one=1, nine=9;
	for(i=1;i<num;i++){
		one = one*10+1;
		nine = nine*10+9;
	}
	if(one>10 && nine<100000)
		return 1;
	else
		return 0;
}
int main(){
	int i,n,j;
	for(i=2; ;i++){
		if(check(i)){
			for(n=1; n<=9; n++){
				for(j=0; j<i; j++){
					printf("%d",n);
				}
				if(n==9){
					printf("\n");
					break;
				}
				printf(", ");
			}
		}else{
			break;
		}
	}
	return 0;
}

