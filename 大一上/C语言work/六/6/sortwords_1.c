#include <stdio.h>
#include<string.h>
#include<stdlib.h>
char in[100];
char*p[500];
char *temp;

int main(int c, char*a[])
{
	FILE*fp,*hh;
	int i,j,h,min;
	char m;
	fp=fopen(a[1],"r");

	for(i=0;;i++){
		for(j=0;(m=fgetc(fp))!=EOF;j++){//'()'is important!!!!
			if((m==' ')||(m=='\n')){
				in[j]='\0';
				break;
			}
			else
				in[j]=m;	
		}
		if(m==EOF){
			h=i-1;
			break;
		}
		p[i]=(char*)malloc(strlen(in)+1);
		strcpy(p[i],in);
	}
	fclose(fp);

	hh=fopen(a[2],"w");

	for(i=0;i<h;i++){
		min=i;
		for(j=i+1;j<=h;j++){
			if(strcmp(p[min],p[j])>0)
				min=j;
		}
		temp=p[i];
		p[i]=p[min];
		p[min]=temp;
	}
	fputs(p[0],hh);
	fprintf(hh," ");
	for(i=1;i<=h;i++){
		if(strcmp(p[i-1],p[i])!=0){
			fputs(p[i],hh);
			fprintf(hh," ");
		}
	}
		
	for(i=1;i<=h;i++)
		free(p[i]);
	
	return 0;
}