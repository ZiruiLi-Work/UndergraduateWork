#include<stdio.h>
char key[51];
char word[300];
void del(int i)
{
	for(;key[i]!='\0';i++)
		key[i]=key[i+1];
}

int main()
{
	FILE*fp,*fo;
	int i,j,m;
	char x;
	gets(key);
	for(i=0;key[i]!='\0';i++){
		for(j=i+1;key[j]!='\0';j++){    //delete
			if(key[i]==key[j]){
				del(j);
				j--;
			}
		}
	}
	m=i-1;
	for(x='z';x>='a';x--){
		for(j=0;j<=m;j++){
			if(x==key[j])
				break;
		}
		if(x!=key[j])
			key[i++]=x;
	}
	key[26]='\0';
	puts(key);

	fp=fopen("encrypt.txt","r");
	fgets(word,300,fp);

	fo=fopen("output.txt","w");

	for(i=0;word[i]!='\0';i++){
		if((word[i]>='a')&&(word[i]<='z')){
			m=word[i]-'a';
			fprintf(fo,"%c",key[m]);
		}
		else
			fprintf(fo,"%c",word[i]);
	}

	return 0;
}