// 3-41 1���� n���� ���� ���� 1,000�� �Ѿ�� ���� ���� ����n�� ����ϼ���.

#include<stdio.h>
int main(){
	int i=1,sum=0;
	
	while(1){
		sum += i;
		if(sum > 1000)
			break;
		i++;
	}
	printf("1~n ���� 1,000�� �Ѿ�� ���� ���� ���� n = %d\n",i);
	return 0;
}