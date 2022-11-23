#include<stdio.h>
char a[100];
int main()
{
	int n,m,x,h,i;

	scanf("%d %d",&n,&x);

	if(n<0)
		m=0-n;
	else
		m=n;

	for(i=0;;i++){
		h=m%x;
		if(h<=9)
			a[i]='0'+h;
		else
			a[i]='a'+h-10;
		m=m/x;
		if(m==0)
			break;
	}

	if(n<0)
		printf("-");
	for(;i>=0;i--)
		printf("%c",a[i]);

	return 0;
		



}