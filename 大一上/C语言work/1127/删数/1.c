#include <stdio.h>

int main()
{
	char s[242];
	int N,i,j,k,n,m;
	gets(s);
	scanf("%d",&N);

	for(n=1;n<=N;n++){
		for(i=0;s[i]!='\0';i++){
			k=i+1;
			if (s[i]>s[k]){
			
				for(j=i,m=j+1;s[m]!='\0';){
					s[j]=s[m];
					j++;
					m++;
				}
				if(s[m]=='\0')
					s[j]='\0';
				break;
			}
		}

	}

	

	puts(s);

	return 0;


}