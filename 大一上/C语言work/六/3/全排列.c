#include<stdio.h>
int put[11];
int mark[11];


void work(int N,int m,int n);//����N��������m���������ݣ�ʣn��

int main()
{
	int N;

	scanf("%d",&N);

	work(N,0,N);

	return 0;
}

void work(int N,int m,int n)
{
	int i;
	if(n==0){
		for(i=0;i<N;i++){
			printf("%d ",put[i]);
		}
		printf("\n");
	}
	else{
		for(i=1;i<=N;i++){
			if(mark[i]==0){
				mark[i]=1;
				put[m]=i;
				work(N,m+1,n-1);
				mark[i]=0;
			}
		}
	}


}