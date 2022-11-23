#include <stdio.h>
char m[500];

int is_start(int i)
{
	if ((m[i]=='/')&&(m[i+1]=='*'))
		return 1;
	else
		return 0;
}

int is_end(int i)
{
	if ((m[i]=='*')&&(m[i+1]=='/'))
		return 1;
	else
		return 0;
}

int main()
{
	FILE*fp;
	int s=0,a=0,i,x;

	fp=fopen("filein.c","r");

	for(i=0;i<500;i++)/*¸´ÖÆ*/
		fscanf(fp,"%c",&m[i]);

	for(i=0;m[i]!='\0';i++){
		if(is_start(i)){
			s+=2;
			for(i+=2;is_end(i)!=1;i++){
				a++;
			}
			i++;
			s+=2;
		}

		else
			s++;
	}
	s=s+a;

	x=100*a/s;

	printf("%d%%",x);
	printf("%d%d",a,s);

	return 0;

}