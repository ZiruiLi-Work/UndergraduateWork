#include<stdio.h>
char A[80];
char B[80];
char c[80];

void delete_(char a[])                        /*delete 0*/
{
	int i,j;
	for(i=0;a[i]!='\0';i++){
		if(a[i]!='0'){
			for(j=0;a[i]!='\0';i++,j++)
				a[j]=a[i];
			a[j]='\0';
			break;
		}
	}
}

char jian(char a,char b)                    /*how to '-'*/
{
	int p;
		p=a-'0'-(b-'0');
		if(p<0)
			p+=10;
	return p+'0';
}

int bigger(char a[],char b[])
{
	int i;
	for(i=0;;i++){
		if(a[i]=='\0'){
			return 2;
			break;
		}
		if(a[i]==b[i])
			continue;
		else if(a[i]>b[i]){
			return 1;
			break;
		}

		else if(a[i]<b[i]){
			return 0;
			break;
		}
	}
}


int main()
{
	int i,m,n,j,k;

	gets(A);
	gets(B);

	delete_(A);
	delete_(B);
		
	for(i=0,m=0;A[i]!='\0';i++)				/*how long*/
		m+=1;
	for(i=0,n=0;B[i]!='\0';i++)
		n+=1;

	if(m>n){
		for(i=0;i<=m-n-1;i++)
			c[i]=A[i];

		for(k=0;A[i]!='\0';i++,k++){
			c[i]=jian(A[i],B[k]);
			if(A[i]<B[k]){
				for(j=i-1;;j--){
					if(c[j]!='0'){
						c[j]--;
						break;
					}
					else
						c[j]='9';
				}
			}
		}

		c[i]='\0';
		delete_(c);
		puts(c);
	}

	else if(m<n){
		for(i=0;i<=n-m-1;i++)
			c[i]=B[i];

		for(k=0;B[i]!='\0';i++,k++){
			c[i]=jian(B[i],A[k]);
			if(A[k]>B[i]){
				for(j=i-1;;j--){
					if(c[j]!='0'){
						c[j]--;
						break;
					}
					else
						c[j]='9';
				}
			}
		}

		c[i]='\0';
		delete_(c);
		printf("-");
		puts(c);
	}

	else{
		if(m=n=0)
			printf("0");

		else if(bigger(A,B)==1){
			for(i=0;A[i]!='\0';i++){
				c[i]=jian(A[i],B[i]);
				if(A[i]<B[i]){
					for(j=i-1;;j--){
						if(c[j]!='0'){
							c[j]--;
							break;
						}
						else
							c[j]='9';
					}
				}
			}

			c[i]='\0';
			delete_(c);
			puts(c);
		}

		else if(bigger(B,A)==1){
			for(i=0;A[i]!='\0';i++){
				c[i]=jian(B[i],A[i]);
				if(B[i]<A[i]){
					for(j=i-1;;j--){
						if(c[j]!='0'){
							c[j]--;
							break;
						}
						else
							c[j]='9';
					}
				}
			}

			c[i]='\0';
			delete_(c);
			printf("-");
			puts(c);
		}

		else
			printf("0");
	}
		return 0;
}