#include<stdio.h>
#include<string.h>
char a[10000][10000];
char b[10000];
int bigger(int i,int j)
{
	if((a[i][1]>a[j][1])||((a[i][1]==a[j][1])&&(a[i][0]>a[j][0])))
		return 1;
	else
		return 0;
}
int main()
{
	FILE*fi,*fo;
	int i,j,n,m;

	fi=fopen("filezip.in","r");
	fscanf(fi,"%d",&n);
	fgetc(fi);
	for(j=1;j<=n;j++)
		fscanf(fi,"%c",&a[0][j]);  // in;

	for(i=1,a[0][0]='a';i<=n-1;i++)
			a[i][0]=a[i-1][0]+1;

	for(i=1;i<=n-1;i++){
		for(j=1;j<=n-1;j++)
			a[i][j]=a[i-1][j+1];            // change;
		a[i][j]=a[i-1][1];
	}
	for(i=0;i<=n-1;i++)
		a[i][n+1]='\0';

	for(i=0;i<=n-1;i++){
		m=i;
		for(j=i;j<=n-1;j++){
			if(bigger(m,j)==1)
				m=j;
		}
		strcpy(b,a[i]);
		strcpy(a[i],a[m]);
		strcpy(a[m],b);
	}

	fo=fopen("filezip.out","w");
	for(i=0;i<=n-1;i++)
		fprintf(fo,"%c",a[i][n]);
	fprintf(fo,"\n");

	for(i=0;i<=n-1;i++){
		if(a[i][0]=='b')
			fprintf(fo,"%d",i+1);
	}
	return 0;
}
