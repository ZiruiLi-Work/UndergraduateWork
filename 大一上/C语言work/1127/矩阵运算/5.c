#include <stdio.h>
int a[20][20];
int b[20][20];

int main()
{
	int N,i,j;
	char m;

	scanf("%d",&N);
	N--;

	for(i=0;i<=N;i++){
		for(j=0;j<=N;j++)
			scanf("%d",&a[i][j]);
	}

	getchar();

	scanf("%c",&m);

	for(;m!='#';){
		for(i=0;i<=N;i++){
			for(j=0;j<=N;j++)
				scanf("%d",&b[i][j]);
		}

		getchar();

		if(m=='+'){
			for(i=0;i<=N;i++){
				for(j=0;j<=N;j++)
					a[i][j]=a[i][j]+b[i][j];
			}
		}

		if(m=='-'){
			for(i=0;i<=N;i++){
				for(j=0;j<=N;j++)
					a[i][j]=a[i][j]-b[i][j];
			}
		}

		scanf("%c",&m);
	}
	
	for(i=0;i<=N;i++){
		for(j=0;j<N;j++)
			printf("%5d",a[i][j]);

		printf("%5d\n",a[i][j]);
	}

	return 0;
}