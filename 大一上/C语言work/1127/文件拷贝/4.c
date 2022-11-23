#include <stdio.h>
char s[200];
int is_empty(char a)
{
	if(((a<7)||(a>13))&&(a!=32))
		return 0;
	else
		return 1;
}

int main()
{
	FILE *in;
	FILE *out;
	int i,j,m;

	in=fopen("fcopy.in","r");
	for(i=0;i<200;i++)
		fscanf(in,"%c",&s[i]);

	fclose(in);

	for(i=0;s[i]!='\0';i++){/*ɾ*/
		if(is_empty(s[i])){
			s[i]=' ';
			for(j=i;is_empty(s[j]);j++){}
			for(m=i;s[j]!='\0';j++){
				m++;
				s[m]=s[j];
			}
			if(s[j]=='\0')
				s[++m]='\0';
		}
	}



	out=fopen("fcopy.out","w");
	for(i=0;s[i]!='\0';i++)
		fprintf(out,"%c",s[i]);

	return 0;
					
}