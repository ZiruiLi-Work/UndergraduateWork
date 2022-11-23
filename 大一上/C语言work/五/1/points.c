#include<stdio.h>
#include<math.h>
int x[15];
int y[15];

double length(int a,int b)
{
	double l;
	l=sqrt((x[a]-x[b])*(x[a]-x[b])+(y[a]-y[b])*(y[a]-y[b]));
	return l;
}

double is_s(double a,double b,double c)
{
	double s,p;
	p=(a+b+c)/2;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	return s;
}

int main()
{
	int n,i;
	double S,a,b,c;

	scanf("%d",&n);

	for(i=0;i<=n-1;i++)                    /*in*/
		scanf("%d %d",&x[i],&y[i]);

	for(i=1,S=0;i+1<=n-1;i++){
		a=length(0,i);
		b=length(0,i+1);
		c=length(i,i+1);
		S+=is_s(a,b,c);
	}

	printf("%.2f",S);

	return 0;


}