#include<stdio.h>
int in[10000][2];

int main()
{
	int n,i,j,c,m=0,k=0;

	scanf("%d",&n);

	for(i=0;i<n;i++){
	scanf("%d",&c);
		in[i][1]=0;
		k=0;
		if(i==0){
			in[i][0]=c;
			m=0;
		}
		for(j=0;j<=m;j++){
			if(c==in[j][0]){
				in[j][1]++;
				k=1;
				break;
			}
		}
		if(k==0){
			in[++m][0]=c;
			in[m][1]=1;
		}
	}
	for(i=0,c=0;i<=m;i++){
		if(in[c][1]<in[i][1])
			c=i;
	}
	printf("%d",in[c][0]);
	return 0;
}