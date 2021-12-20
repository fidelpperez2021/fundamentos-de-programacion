#include<iostream.h>
#include<conio.h>
void main()
{int x,n,c=0,s=0;
clrscr();
cout<<"ingresar cantidad de numeros:";
cin>>n;
while(c<n)
{
cout<<"ingresar numero:";
cin>>x;
s=s+x;
c=c+1;
}
cout<<"La suma de los numeros es:"<<s;
getch();
}
