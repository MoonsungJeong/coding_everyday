// 3-64 ���� ����ó�� �����ð�ǥ�� �ۼ��Ͽ� ȭ�鿡 ����ϼ���. ��, �� ���ϰ� ������ �迭 ������ ��Ƽ� ����ϼ���.
/*
				<���� �ð�ǥ>
--------------------------------------------
		��		ȭ		��		��		��
--------------------------------------------
	1	����	��ǻ��	����	����	�ٻ�
	2	����	����	����	â��	����
	3	����	����	���	����	���
	4	���	����	���	���	���
	5	����	�ٻ�	����	����	����
	6			����			ü��
*/
#include<stdio.h>

int main(){
	char *day[5]={"��","ȭ","��","��","��"};
	char *subject[]={"����", "����", "����", "��ǻ��", "����", "ü��", "����", "���", "�ٻ�", "����", "â��"};

	printf("		<���� �ð�ǥ>            \n");
	printf("---------------------------------------------\n");
	printf("      %s      %s      %s      %s      %s       \n",day[0],day[1],day[2],day[3],day[4]);
	printf("---------------------------------------------\n");
	printf("  1   %s      %s      %s      %s      %s       \n",subject[0],subject[3],subject[0],subject[0],subject[8]);
	printf("  2   %s      %s      %s      %s      %s       \n",subject[0],subject[4],subject[0],subject[10],subject[1]);
	printf("  3   %s      %s      %s      %s      %s       \n",subject[1],subject[4],subject[9],subject[1],subject[9]);
	printf("  4   %s      %s      %s      %s      %s       \n",subject[9],subject[8],subject[9],subject[9],subject[9]);
	printf("  5   %s      %s      %s      %s      %s       \n",subject[2],subject[7],subject[2],subject[2],subject[6]);
	printf("  6	        %s              %s               \n",subject[2],subject[5]);
	return 0;
}

