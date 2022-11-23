#include<stdio.h>
#include<string.h>
char in[1000];
char out[1000];
char a[100];
char b[100];
int w;

int is_equal(int i)
{
	int j;
	for(j=0;a[j]!='\0';j++,i++){
		if((in[i]!=a[j])&&(in[i]!=(a[j]+('a'-'A')))&&(in[i]!=(a[j]-('a'-'A'))))
			return 0;
	}

	return 1;
}

void change(int m)
{
	int j;

	for(j=0;b[j]!='\0';j++)
		out[m++]=b[j];

	w=m;
}

int main()
{
	FILE*fin;
	FILE*fout;
	int i,m;

	gets(a);
	gets(b);

	fin=fopen("filein.txt","r");
	if(fin==NULL){
		printf("error");
		return 1;
	}

	for(i=0;i<1000;i++)
		fscanf(fin,"%c",&in[i]);

	fclose(fin);

	for(i=0,m=0;i<1000;i++){
		if(is_equal(i)){
			change(m);
			m=w;
			i=i+strlen(a)-1;
		}
		else
			out[m++]=in[i];
	}
		

	fout=fopen("fileout.txt","w");

	for(i=0;i<1000;i++)
		fprintf(fout,"%c",out[i]);

	fclose(fout);

	return 0;
}