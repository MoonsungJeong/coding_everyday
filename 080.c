// 3-71 A^2 + B^2 = C^2 �� �����ϴ� A,B,C�� ���Ͽ� ����ϼ���. ��, A�� B�� ������ 1~20���� �����մϴ�.
// ��Ʈ: ���� for���� �̿��Ͽ� ���� �����ϴ� a,b,c�� ���մϴ�.
#include<stdio.h>
#include<math.h>
int main(){
	double a,b,c;
	for(a=1; a<=20; a++){
		for(b=1; b<=20; b++){
			c = sqrt(pow(a,2)+pow(b,2));
			if(c - (int)c == 0)
				printf("a= %d, b= %d, c= %d\n",(int)a,(int)b,(int)c);
		}
	}
	return 0;
}

