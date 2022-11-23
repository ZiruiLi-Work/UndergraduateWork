#include<stdio.h>
#include<string.h>
char in[1000][100];
char a[15][25]={'\0'};
int k=0;

int main()
{
	FILE*fi,*fo;
	int i,j,m=0;
	fi=fopen("input.c","r");
	fo=fopen("output.c","w");
	
	for(i=0;(fscanf(fi,"%s",&in[i])!=EOF)&&(i<=1000);i++){
		if((in[i][0]=='i')&&(in[i][1]=='n')&&(in[i][2]=='t')){
			k=1;
			break;
		}
	}

	if(k==1){
		for(i++,j=0;(fscanf(fi,"%s",&in[i])!=EOF)&&(i<=1000);i++){
			if(in[i][0]==',')
				continue;
			if(in[i][0]==';')
				break;
			strcpy(a[j],in[i]);
			i--;
			j++;
		}
		a[j][0]='\0';
	}
	
	for(i++;(fscanf(fi,"%s",&in[i])!=EOF)&&(i<=1000);i++){
		if(k==0)
			continue;
		for(j=0;a[j][0]!='\0';j++){
			if(strcmp(in[i],a[j])==0)
				break;
		}
		if(strcmp(in[i],a[j])==0)
			i--;
	}
	in[i][0]='\0';

	for(i=0;in[i][0]!='\0';i++){
		for(j=0;in[i][j]!='\0';j++)
			fprintf(fo,"%c",in[i][j]);
	}

	return 0;
}