#include <stdio.h>
char s_1[200];
char s_2[200];

int main()
{
	int i,j;

	gets(s_1);
	s_2[0]=s_1[0];

	for(i=j=1;s_1[i]!='\0';i++){
		if (s_1[i]=='-'){       /*ур-*/
			if(s_1[i-1]<s_1[i+1]){
				for(;s_2[j-1]+1<=s_1[i+1];){
					s_2[j]=s_2[j-1]+1;
					j++;
				}
				i++;
			}
		
			else{
				s_2[j++]=s_1[i];
				s_2[j++]=s_1[i+1];
				i++;
			}
		}
	

		else{
			s_2[j++]=s_1[i];
		}
	}

	puts(s_2);

	

	return 0;


}