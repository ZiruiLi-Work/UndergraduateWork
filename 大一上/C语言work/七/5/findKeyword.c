#include<stdio.h>
char in[1000];

int main()
{
	FILE*fp;
	int i,j,m;

	fp=fopen("in.c","r");

	for(i=0,j=0,m=0;(fscanf(fp,"%c",&in[i])!=EOF)&&(i<=1000);i++){
		if(in[i]=='\n'){
			i=-1;j++;
			continue;
		}
		if(in[i]=='"')
			m++;
	
		if(m%2==0){
			if(i>=3){
				if(((in[i]==' ')||(in[i]=='('))&&(in[i-1]=='r')&&(in[i-2]=='o')&&(in[i-3]=='f'))
					printf("for:%d,%d\n",j+1,i-2);
			}	
			if(i>=5){
				if(((in[i]==' ')||(in[i]=='('))&&(in[i-1]=='e')&&(in[i-2]=='l')&&(in[i-3]=='i')&&(in[i-4]=='h')&&(in[i-5]=='w'))
					printf("while:%d,%d\n",j+1,i-4);
			}
			if(i>=2){
				if(((in[i]==' ')||(in[i]=='('))&&(in[i-1]=='f')&&(in[i-2]=='i'))
					printf("if:%d,%d\n",j+1,i-1);
			}
		}
	}

	return 0;
}