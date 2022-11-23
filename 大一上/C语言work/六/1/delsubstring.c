#include<stdio.h>
#include<string.h>
char a[200];
char b[200];

int is_equal(int m)
{
    int i,j;

    for(i=m,j=0;;j++,i++){
        if(b[j]=='\0')
            return 1;
        if(a[i]!=b[j])
            return 0;
	}
}

void delete_(int n)
{
    int i;
    for(i=n;;i++){
        a[i]=a[i+strlen(b)];
       if(a[i]=='\0')
            break;
    }
}

int main()
{
    int i;

    gets(a);
    gets(b);

    for(i=0;a[i]!='\0';i++){
        if(is_equal(i)){
            delete_(i);
            i--;
        }
    }

    puts(a);
    return 0;
}