#include<stdio.h>
#include<string.h>
struct tl{
	char name[11];
	char tel[11];
}a[51];
int main()
{
	int  n,i,c,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s%s",&a[i].name,&a[i].tel);
		a[i].name[10]='\0';
		a[i].tel[10]='\0';
	}
	for(i=0;i<n;i++){
		c=i;
		for(j=i;j<n;j++){
			if(strcmp(a[c].name,a[j].name)>0)
				c=j;
		}
		a[50]=a[i];
		a[i]=a[c];
		a[c]=a[50];
	}
	for(i=0;i<n;i++){
		printf("%12s%12s\n",a[i].name,a[i].tel);
	}
	
	return 0;


}