// 3-73 10���� 258�� 8������ ����ϼ���. ��, printf�Լ� ��� �����ϴ� 8���� ��� ������ ������� �ʽ��ϴ�.
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
	printf("10���� 248�� 8���� = %s\n", octa);


	return 0;
}

