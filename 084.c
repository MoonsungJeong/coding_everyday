// 3-75 세 점의 좌표를 지나는 원의 중심과 지름을 구하세요.
// 예)	(-10,0) (0,10) (0,-10) -> 중심 (0,0)
//		(2,-1) (0,1) (2,3) -> 중심 (2,1)
//		(0,-5) (5,-10) (10,-5) -> 중심 (2,1)
#include<stdio.h>
#include<math.h>
#define MAX_X 500
#define MAX_Y 500
#define MIN_X -500
#define MIN_Y -500
#define POINTS p3

int p1[]={-10,0,0,10,0,-10};
int p2[]={2,-1,0,1,2,3};
int p3[]={0,-5,5,-10,10,-5};

int check_points(int x1, int y1, int x2, int y2, int x3, int y3)
{
	return ((x2-x1)*(y3-y2) - (y2-y1)*(x3-x2));
}
int get_center1(double *xp, double *yp, double *rp)
{
	int x1,x2,x3,y1,y2,y3;
	double d1,d2,d3;

	double x = *xp;
	double y = *yp;

	x1 = POINTS[0];
	y1 = POINTS[1];
	x2 = POINTS[2];
	y2 = POINTS[3];
	x3 = POINTS[4];
	y3 = POINTS[5];

	if(check_points(x1,y1,x2,y2,x3,y3) ==0)
		return 1;
	
	for(x = MIN_X; x <= MAX_X; x++){
		for(y = MIN_Y; y <= MAX_Y; y++){
			d1 = (x - x1)*(x - x1) + (y - y1)*(y - y1);
			d2 = (x - x2)*(x - x2) + (y - y2)*(y - y2);
			if(d1 == d2){
				d3 = (x - x3)*(x - x3) + (y - y3)*(y - y3);
				if(d2 == d3){
					*rp = sqrt(d1);
					*xp = x;
					*yp = y;
					return 0;
				}
			}
		}
	}
	return 1;
}
int main(){
	double x,y,r;
	
	if(get_center1(&x, &y,&r))
		printf("세 점의 중심점을 찾을 수 없습니다.\n");
	else
		printf("세 점의 중심점은 (%f, %f)이고 지름은 %f입니다.\n",x,y,2*r);
	return 0;
}

