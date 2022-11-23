#include<stdio.h>
int a[40];

int main()
{
	char w;
	int m,i,j,index,max;

	for(m=0;;m++){                   /*in*/
		scanf("%d%c",&a[m],&w);
		if(w=='\n')
			break;
	}
	for(m++;;m++){
		scanf("%d%c",&a[m],&w);
		if(w=='\n')
			break;
	}	
	

	for(i=0;i<m;i++){            /*order*/
		for(j=index=i;j<=m;j++){
			if(a[index]<a[j])
				index=j;
		}
		max=a[index];
		a[index]=a[i];
		a[i]=max;
	}

	for(i=0;i<m;){               /*delete*/
		if(a[i]==a[i+1]){
			m-=2;
			for(j=i;j<=m;j++)
				a[j]=a[j+2];
		}
		else
			i++;
	}

	for(i=0;;i++){
		if(i==m){
			printf("%d",a[i]);
			break;
		}
		 printf("%d ",a[i]);
		
	}

	return 0;



}