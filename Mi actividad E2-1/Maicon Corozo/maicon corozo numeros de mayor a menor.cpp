#include<stdio.h>
#include<conio.h>
main()
{
int a,b,c,d;
printf("ingrese cuatro numeros");
scanf("%d%d%d%d",&a,&b,&c,&d);
if(c<b&&b<a&&c<d) printf("el orden es el siguiente %d%d%d%%d",d,c,b,a);
else if(a>b&&b>c&c<d)printf("el orden es el siguiente %d%d%d%d",c,b,a,b);
else if(a>b&&c>a&&b<d)printf("el orden es el siguiente %d%d%d%d",b,a,d,c);
else if(a>c&&c>b&&a<d)printf("el orden es el siguiente %d%d%d%d",d,b,c,a);
else if(b>c&&b>a&&c>d)printf("el orden es el siguiente %d%d%d%d",c,d,a,b);
else printf("el orden es el siguiente %d%d%d%d",d,c,b,a);

getch();
}


