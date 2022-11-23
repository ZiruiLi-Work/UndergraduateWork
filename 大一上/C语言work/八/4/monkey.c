#include<stdio.h>
int p[10000];
void ch(int n,int m,int q,int j)
{
	int i;
	if(j==n){
		printf("%d",q);
		return;
	}
	for(i=2;;i++){
		q++;
		if(q>n)
			q=q%n;
		for(;p[q]==1;){
			q++;
			if(q>n)
			q=q%n;
		}
		if(q>n)
			q=q%n;
		if(i==m){
			p[q]=1;
			break;
		}
	}
	q++;
	if(q>n)
		q=q%n;
	for(;p[q]==1;){
		q++;
		if(q>n)
			q=q%n;
		}

	ch(n,m,q,++j);
	return;
}

int main()
{
	int n,m,q;
	scanf("%d %d %d",&n,&m,&q);
	ch(n,m,q,1);
	return 0;
}