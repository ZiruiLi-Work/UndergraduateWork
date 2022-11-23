#include <stdio.h>
int prime[500]={2};
int a[100];
int is_prime(int k)
{
	int i;
	for(i=0;prime[i]*prime[i]<=k;i++){
		if (k%prime[i]==0){
			return 0;
		}
	}
	return 1;
}

int main()
{
	int k,m=1,N,N_2,b,j,c,h;
	scanf("%d",&N);
	for(k=3;k<=2000;k+=2){
		if(is_prime(k)){
			prime[m++]=k;
		}
	}
	a[0]=N%10;
	N_2=0;

	if(is_prime(N)){
		for(h=1,b=N;;h++){
			b=b/10;
			a[h]=b%10;
			if(a[h]==0)
				break;
		}
		for(j=h-1,c=1;j>=0;j--){
			c*=a[j];
			N_2+=c;
			c=c/a[j]*10;

		}

		if(is_prime(N_2))
			printf("yes");
	else
		printf("no");
	}
	else
		printf("no");

	return 0;


}