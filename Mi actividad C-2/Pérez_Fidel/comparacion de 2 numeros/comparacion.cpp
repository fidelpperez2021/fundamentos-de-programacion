#include <iostream.h>
main()
{int x,y;
 cout<<"\n ingrese numero x:";
 cin>>x;
 cout<<"\n ingrese numero y:";
 cin>>y;
 if(x==y)
 cout<<"\n Son iguales";
 else
 {
  if(x>y)
  cout<<"\n el mayor es:"<<x;
  else
  cout<<"\n el mayor es:"<<y;
 }
 return 0;
}
