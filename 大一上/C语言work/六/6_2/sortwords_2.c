#include<stdio.h>
char p[500][200];
char temp[2][100];
int bigger(int a,int b)//a>b?
{
	int i;
	for(i=0;;i++){
		if(p[a][i]<p[b][i])
			return 0;
		else if(p[a][i]>p[b][i])
			return 1;
		if((p[a][i]=='\0')||(p[b][i]=='\0'))
			return 2;
	}
}
int main(int c,char*a[])
{
	FILE*in,*out;
	int i=0,j=0;
	char m;
	in=fopen(a[1],"r");
	while(m=fgetc(in)!=EOF){
		if((m==' ')||(m=='\n')){
			p[i++][j]='\0';
			j=0;
		}
		else
			p[i][j++]=m;
	}
	p[i][j]='\0';
	for(i=0;p[j]!='\0';i++){
		for(j=i+1;p[j]!='\0';j++){
			if(bigger(i,j)!=0){
				temp[0]=p[i];
				p[i]=p[j];
				p[j]=temp[0];
			}
		}
	}

	for(i=0;p[i]!='\0';i++){
		if(bigger(i,i+1)==2){
			for(j=i+1;p[j]!='\0';j++)
				p[j]=p[j+1];
		}
	}

	out=fopen(a[2],"w");
	for(i=0;p[i]!='\0';i++){
		fputs(p[i],out);
		fprintf(" ",out);
	}

	return 0;
}







