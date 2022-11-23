#include <stdio.h>
int prime[800]={2};
int is_prime(int k)
{
	int i;
	for (i=0;prime[i]*prime[i]<=k;i++){
		if (k%prime[i]==0)
			return 0;
	}
	return 1;

}

int main()
{
	int i,m=1,N,a,j;
	scanf("%d",&N);
	for(i=3;i<=N;i+=2){
		if(is_prime(i))
			prime[m++]=i;
		printf("%d",i);
	}
	



		for(j=0,a=N;prime[j]<=a;){
		    if (a%prime[j]==0){
		       printf("%d ",prime[j]);
		       	a=a/prime[j];	
			}
			else
				j++;
		}







	return 0;


}