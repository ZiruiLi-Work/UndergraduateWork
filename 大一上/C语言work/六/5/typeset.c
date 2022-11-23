#include<stdio.h>
char a[200][200];
int n[200];

int main()
{
	int N,j,i,m_1=0;//m_1':';n' ';

	scanf("%d",&N);
	getchar();
	
	for(j=0;;j++){
		for(i=0;;i++){
			a[j][i]=getchar();
			if(a[j][i]==EOF)
				break;	
			else if(a[j][i]==':'){
				if(a[j][i-1]!=' '){
					a[j][i]=' ';
					a[j][++i]=':';
				}
				else
					a[j][i]=':';
				m_1=i;
				a[j][++i]=' ';
			}
			else if((a[j][i]=='\t')||(a[j][i]==' ')){
				if(a[j][i-1]==' '){
					i--;
					continue;
				}
				else
					a[j][i]=' ';
			}

		
			else if(a[j][i]=='\n')
				break;
		}

		if(a[j][i]==EOF)
			break;

		n[j]=N-1-m_1;
	}

	for(j=0;;j++){
		for(i=1;i<=n[j];i++){
			printf(" ");
		}

		for(i=0;a[j][i]!='\n';i++)
			printf("%c",a[j][i]);

		printf("\n");
		if(a[j+1][0]==EOF)
			break;
	}


	return 0;
}