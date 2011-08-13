#include <stdio.h>
#include <math.h>

double PI,l1,l2,l3,m1,m2,m3;
int t1,t2;

int read_input(void) {
	int h,m,s;
	if ((scanf("%lf",&l1)!=1)||(l1<0.0))    return 0;
	scanf("%lf%lf",&l2,&l3);
	scanf("%lf%lf%lf",&m1,&m2,&m3);
	scanf("%d:%d:%d",&h,&m,&s);
	t1 = s + 60*m + 3600*h;
	scanf("%d:%d:%d",&h,&m,&s);
	t2 = s + 60*m + 3600*h;	
    return 1;
}

void calc_pos(double *x, double *y, double t) {
	*x = m1 * l1 * sin(PI*t/21600.0) + m2 * l2 * sin(PI*t/1800.0) + m3 * l3 * sin(PI*t/30.0);
	*x/= 2.0 * (m1+m2+m3);
	*y = m1 * l1 * cos(PI*t/21600.0) + m2 * l2 * cos(PI*t/1800.0) + m3 * l3 * cos(PI*t/30.0);
	*y/= 2.0 * (m1+m2+m3);
}

double calc_pathlen(void) {
	double oldx,oldy,newx,newy,dx,dy;
	int t;
	double result=0.0;

	calc_pos(&newx, &newy, (double) t1);
	for(t=t1; t<=t2; t++) {
		oldx=newx; oldy=newy;
		calc_pos(&newx, &newy, (double) t);
		dx=newx-oldx;
		dy=newy-oldy;
		result+=sqrt(dx*dx+dy*dy);
	}
	return result;
}

int main() {
	PI = 2.0 * acos(0.0); // 3.14159
	while(read_input()) {
		printf("%.2f\n", calc_pathlen());
	}
	return 0;
}
