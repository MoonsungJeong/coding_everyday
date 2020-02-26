// 3-76 1mm 두께의 종이를 몇 번 접을 때 지구와 달까지의 거리까지 도달할 수 있는지 구하여 출력하세요.
// 단, 지구와 달 사이의 거리는 38만km라고 가정합니다.
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
	printf("1mm 두께 종이를 접어서 지구에서 달까지 도달하려면,\n");
	printf("%d번 접어야합니다. 접은 종이의 두께는 약 %.0lfkm입니다.\n",n,sum/10000000000.0);
	return 0;
}

