#include<stdio.h>
char a[100];
char b[100];
char c[200];
int main()
{
	int i,j,index,min;

	gets(a);
	gets(b);

	for(i=0;a[i]!='\0';i++)
		c[i]=a[i];
	for(j=0;b[j]!='\0';i++,j++)
		c[i]=b[j];
	c[i]='\0';

	for(i=0;c[i]!='\0';i++){
		for(index=j=i;c[j]!='\0';j++){
			if(c[index]>c[j])
				index=j;
		}

		min=c[index];
		c[index]=c[i];
		c[i]=min;
	}

	puts(c);

	return 0;
}