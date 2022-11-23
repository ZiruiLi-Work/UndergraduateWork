#include<stdio.h>
#include<string.h>
struct st{
	int num;
	char name[10];
	int age;
}a[51];

int main()
{
	int i,n,k,j;
	scanf("%d",&n);

	for(i=0;i<n;i++){
		scanf("%d %s %d",&a[i].num,&a[i].name,&a[i].age);
	}

	for(i=0;i<n;i++){
		k=i;
		for(j=i;j<n;j++){
			if(strcmp(a[k].name,a[j].name)>0)
				k=j;
		}
		a[50]=a[i];
		a[i]=a[k];
		a[k]=a[50];
	}
	for(i=0;i<n;i++)
		printf("%3d%6s%3d\n",a[i].num,a[i].name,a[i].age);

	for(i=0;i<n;i++){
		k=i;
		for(j=i;j<n;j++){
			if(a[k].age>a[j].age)
				k=j;
			else if((a[k].age==a[j].age)&&(strcmp(a[k].name,a[j].name)>0))
				k=j;
		}
		a[50]=a[i];
		a[i]=a[k];
		a[k]=a[50];
	}
	printf("\n");
	for(i=0;i<n;i++)
		printf("%3d%6s%3d\n",a[i].num,a[i].name,a[i].age);

	return 0;

}