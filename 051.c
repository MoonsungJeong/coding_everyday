// 3-42 1���� n���� ���� ���� 10,000�� ���� �ʴ� ���� ū ���� n�� ����ϼ���
#include<stdio.h>
int main(){
	int i=1,sum=0;
	
	while(1){
		sum += i;
		if(sum > 10000){
			--i;
			break;
		}
		i++;
	}
	printf("1~n ���� 10,000�� ���� �ʴ� ���� ū ���� n = %d\n",i);
	return 0;
}