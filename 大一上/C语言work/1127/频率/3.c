#include <stdio.h>
char s[200];
int a[25];
int main()
{
	int i,k;

	for(i=0;;i++){
		s[i]=getchar();
		if(s[i]==EOF)
			break;
	}	

	for(i=0;s[i]!='\0';i++){
		if ((s[i]>=97)&&(s[i]<=122)){/*Í³¼Æ*/
			k=s[i]-97;
			a[k]++;
		}
	}

	for(k=a[0],i=0;i<=25;i++){     /*k=max*/
		if(k<a[i])
			k=a[i];
	}

	for(;k>0;k--){
		for(i=0;i<=25;i++){
			if(a[i]-k>=0)
				printf("*");
			else
				printf(" ");
			if(i==25)
				printf("\n");
		}
	}
	printf("abcdefghijklmnopqrstuvwxyz");
	
	return 0;
}