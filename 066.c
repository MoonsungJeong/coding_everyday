// 3-57 ���簢�� �� ���� ���̸� �Է��ϸ� ���������� �߽ɱ����� �Ÿ��� ���Ͽ� ����ϼ���.
// �밢�� ������ 1/2�� �߽� �Ÿ��Դϴ�.
#include<stdio.h>
#include<math.h>
int main(){
	double result,x=-1;
	while(x<0){
		printf("���簢�� �� ���� ���̸� �Է��ϼ���: ");
		scanf("%lf",&x);
	}
	result = sqrt(pow(x,2)+pow(x,2))/2;
	printf("���������� �߽ɱ����� �Ÿ� = %f\n",result);
	
	return 0;
}

