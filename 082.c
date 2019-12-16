// 3-73 10진수 258을 8진수로 출력하세요. 단, printf함수 등에서 제공하는 8진수 출력 형식을 사용하지 않습니다.
#include<stdio.h>
#include<string.h>
int main(){
	int i,j,tmp,n = 258;
	char octa[100]={0,};

	for(i=0;;i++){
		octa[i] = n%8 + '0';
		n /= 8;

		if(n < 8){
			i++;
			octa[i]=n + '0';
			break;
		}
	}

	printf("%d\n", strlen(octa));
	for(i=0; i< strlen(octa); i++){
		j = strlen(octa) -1 -i;
		tmp = octa[i];
		octa[i] = octa[j];
		octa[j] = tmp;
	}
	printf("10진수 248의 8진수 = %s\n", octa);


	return 0;
}

