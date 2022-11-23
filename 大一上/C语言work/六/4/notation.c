#include<stdio.h>
char a[102];

int main()
{
	int i,m,n_1=0,n_2=0;//次方m；n_1不为零的首位下标;n_2:'.';不初始化有警告信息
	for(i=0;;i++){
		scanf("%c",&a[i]);
		if(a[i]=='\n')
			break;
	}

	for(i=0,m=0;a[i]!='\n';i++){
		if((a[i]!='0')&&(a[i]!='.')){
			n_1=i;
			break;
		}
	}
	for(i=0;a[i]!='\n';i++){
		if(a[i]=='.'){
			n_2=i;
			break;
		}
	}

	if(n_1<n_2)
		m=n_2-n_1-1;
	else
		m=n_2-n_1;

	if(a[n_1+1]=='\n')
		printf("%ce%d",a[n_1],m);
	else{
		printf("%c.",a[n_1]);
		for(i=n_1+1;a[i]!='\n';i++){
			if(a[i]=='.')
				continue;
			printf("%c",a[i]);
		}
		printf("e%d",m);
	}

	return 0;
}