#include <stdio.h>
int prime[300]={2};
int main()
{
	int i,j,is_prime,m=1,N,a,x;
	for(i=3;i<=1000;i+=2){
		is_prime=1;
		for(j=0;prime[j]*prime[j]<=i;j++){
			if(i%prime[j]==0){
				is_prime=0;
			    break;
			}
		}
		if(is_prime){
			prime[m++]=i;
		}
	
	}

	scanf("%d",&N);
	a=N;
		for(x=0;a>1;){
		    if(a%prime[x]==0){
			   a=a/prime[x];
			   printf("%d ",prime[x]);
			}
			else
				x++;
		}

	return 0;


}
