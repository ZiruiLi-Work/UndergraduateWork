#include<stdio.h>
int a[10][10];
int work(int N,int n,int m)//N*N;a[n][n]=m
{
	int i=n,j=n;
	for(;j<n+N;j++){
		a[i][j]=m;
		m++;
	}
	for(i++,j--;i<n+N;i++){
		a[i][j]=m;
		m++;
	}
	for(j--,i--;j>=n;j--){
		a[i][j]=m;
		m++;
	}
	for(i--,j++;i>=n+1;i--){
		a[i][j]=m;
		m++;
	}

	return m;
}

int main()
{
	FILE*fp;
	int N,i,j,n,t,m;

	scanf("%d",&N);
	t=N;
	fp=fopen("file.out","w");

	for(n=0,m=1;N>0;){
		m=work(N,n,m);
		N-=2;
		n++;
	}

	for(i=0;i<=t-1;i++){
		for(j=0;j<=t-1;j++){
			fprintf(fp,"%5d",a[i][j]);
			if(j==t-1)
				fprintf(fp,"\n");
		}
	}

	return 0;
}