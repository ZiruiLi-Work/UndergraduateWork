#include <stdio.h>
int main()
{
	int N,i,k,a,s;
	scanf("%d",&N);

	for(i=1;i<N/2;i++){
		for(s=i,k=i+1;s<N;k++){
			s+=k;
		}

		if(s==N){
			break;
		}
	}
		
		if (s==N){
			printf("%d=",N);
			for(a=i;a<k-1;a++){
				printf("%d+",a);
			}
			printf("%d",k-1);
		}
		else
			printf("No Answer");

		return 0;




}