#include<stdio.h>
char a[200];
char b[200];
int c[200][2];//frequence,mark;
int bigger(int i,int j)
{
	if(c[i][0]<c[j][0])
		return 0;
	else
		return 1;
}

int main()
{
	int i,j,k,m=0;

	for(i=0;i<=200;i++){
		c[i][1]=0;
		scanf("%c",&a[i]);
		if(a[i]=='\n')
			break;
		if(i==0)
			b[0]=a[i];
		c[i][0]=0;
		
		for(j=0,k=0;(j<=m)&&(j<=i);j++){
			if(a[i]==b[j]){
				k=1;
				c[j][0]++;
				break;
			}
		}
		if(k==0){
			b[++m]=a[i];
			c[m][0]=1;
		}
	}

	for(i=0;i<=m;i++){
		for(k=0;k<=m;k++){
			if(c[k][1]==0)
				break;	
		}
		for(j=0;j<=m;j++){
			if(c[j][1]==1)
				continue;
			if(bigger(k,j)==0)
				k=j;
		}
		if((i+1)%4!=0)
			printf("%c-%d ",b[k],c[k][0]);
		else
			printf("%c-%d\n",b[k],c[k][0]);
		c[k][1]=1;
	}
	
	printf("\n");
	return 0;
}