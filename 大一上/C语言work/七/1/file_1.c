#include<stdio.h>
#include<string.h>
char a[10000][10000];
int bigger(int i,int j)
{
	if((a[i][1]>a[j][1])||((a[i][1]==a[j][1])&&(i>j)))
		return 1;
	else
		return 0;
}
int main()
{
	FILE*fi,*fo;
	int i,j,n,m,k,K=0;
	char t[10000];

	fi=fopen("filezip.in","r");
	fscanf(fi,"%d",&n);
	fgetc(fi);
	for(j=1;j<=n;j++)
		fscanf(fi,"%c",&a[0][j]);            // in;

	for(i=1;i<=n-1;i++){
		for(j=1;j<=n-1;j++)
			a[i][j]=a[i-1][j+1];            // change;
		a[i][j]=a[i-1][1];
	}

	for(k=0;k<=n-1;k++){
		m=-1;
		for(i=0;i<=n-1;i++){
			if(a[i][0]!='2'){
				m=i;
				break;
			}
		}
		if(m==-1)
			break;
		for(j=0;j<=n-1;j++){
			if(a[j][0]=='2')
				continue;
			if(bigger(m,j)==1)
				m=j;
		}
		t[k]=a[m][n];
		a[m][0]='2';
		if(m==1)
			K=k+1;
	}
	t[n]='\0';

	fo=fopen("filezip.out","w");
	fputs(t,fo);
	fprintf(fo,"\n");
	fprintf(fo,"%d",K);

	return 0;
}