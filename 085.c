// 3-76 1mm �β��� ���̸� �� �� ���� �� ������ �ޱ����� �Ÿ����� ������ �� �ִ��� ���Ͽ� ����ϼ���.
// ��, ������ �� ������ �Ÿ��� 38��km��� �����մϴ�.
#include<stdio.h>
#include<math.h>

#define DISTANCE 380000000000

int main(){
	int n=0;
	double sum=1;

	while(sum < DISTANCE){
		sum *= 2;
		n++;
	}
	printf("1mm �β� ���̸� ��� �������� �ޱ��� �����Ϸ���,\n");
	printf("%d�� ������մϴ�. ���� ������ �β��� �� %.0lfkm�Դϴ�.\n",n,sum/10000000000.0);
	return 0;
}

