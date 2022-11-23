#include <stdio.h>
int max(int a,int b)
{
	if (a<=b)
	return b;
	else
		return a;
}

int min(int a,int b)
{
	if (a<=b)
	return a;
	else
		return b;
}

int main()
{
	int Ax1,Ay1,Ax2,Ay2,Bx1,By1,Bx2,By2,S,max_ax,min_ax,max_bx,min_bx,max_ay,min_ay,max_by,min_by,a,b,max_x,min_x,max_y,min_y;
	scanf("%d %d %d %d %d %d %d %d",&Ax1,&Ay1,&Ax2,&Ay2,&Bx1,&By1,&Bx2,&By2);
	    max_ax=max(Ax1,Ax2);
		min_ax=min(Ax1,Ax2);
		max_ay=max(Ay1,Ay2);
		min_ay=min(Ay1,Ay2);
		max_bx=max(Bx1,Bx2);
		min_bx=min(Bx1,Bx2);
		max_by=max(By1,By2);
		min_by=min(By1,By2);
		max_x=max(max_ax,max_bx);
		min_x=min(min_ax,min_bx);
		max_y=max(max_ay,max_by);
		min_y=min(min_ay,min_by);

		a=max_ax-min_ax+max_bx-min_bx-(max_x-min_x);
		b=max_ay-min_ay+max_by-min_by-(max_y-min_y);
		if((b<=0)||(a<=0))
			S=0;
		else
			S=a*b;

		
	printf("%d",S);

	return 0;

}