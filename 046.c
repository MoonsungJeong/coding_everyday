// 3-37 ���� X,Y�� �Է¹ް� X�� Y�� ���� �� ���� �� �ڸ������� ����ϼ���. X�� 1~9, Y�� 2~10����
// ����ϵ� double ������ ����ϰ�, X�� Y���� ���� �Լ�(pow())�� ������� ���� ���� �����ϼ���.
#include<stdio.h>

int main(){
	int x=0,y=0,result=1;
	int i,cnt=0;

	while((x<1 || x >9) && (y < 2 || y > 10)){
		printf("���� X�� �Է��ϼ���(1~9): ");
		scanf("%d",&x);
		printf("���� Y�� �Է��ϼ���(2~10): ");
		scanf("%d",&y);
	}
	for(i=0; i<y; i++){
		result *= x;
	}
	printf("%d\n",result);
	while(result){
		result /= 10;
		cnt++;
	}
	printf("��� ���� �ڸ��� = %d\n",cnt);
	return 0;
}