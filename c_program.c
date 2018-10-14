#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
	  
   int j,p;
double k,n;
char z[2000];
char ch;


    scanf("%d",&j);
    scanf("%lf\n",&k);
    p= i+j;
    printf("%d\n",p);
    n = d+k;
    printf("%.1lf\n",n);
printf("%s",s);
int m=0;
while(ch!='\n')
{
    ch=getchar();
    z[m]=ch;
    m++;
}
z[m]='\0';
printf("%s",z);

getch();
return 0; }
