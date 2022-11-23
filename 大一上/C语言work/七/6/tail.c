#include<stdio.h>
#include<string.h>
int main(int t,char *a[])
{
	FILE*fp;
	int i,k=0,l;
	char in[500][1000];
	l=strlen(a[1]);
	for(i=1;i<l;i++){
		k=10*k+(a[1][i]-'0');}
	if(k==0)
		k=10;
	fp=fopen(a[2],"r");
	for(i=0;(fgets(in[i],1000,fp)!=NULL)&&(i<=1000);i++){}

	for(l=k;l>0;l--){
		for(k=0;in[i-l][k]!='\0';k++)
			printf("%c",in[i-l][k]);
	}

	return 0;
}