// 3-51 �������� ���� �Է¹ް� �� ���� "2x3 = 6" �������� ��� ����ϼ���. ��, �Է� ���� 0�̸�,
// �����ϰ�, �׷��� ������ ���� �ݺ��ϼ���.
#include<stdio.h>


int main(){
	int n,i;
	
	while(1){
		printf("�������� ��(2~9)�� �Է��ϼ���(0 = ����): ");
		scanf("%d",&n);
		if(n == 0)
			break;
		printf("[%d��]\n",n);
		for(i=1; i<=9; i++){
			printf("%d x %d = %d\n",n,i,n*i);
		}
	}
	return 0;
}
