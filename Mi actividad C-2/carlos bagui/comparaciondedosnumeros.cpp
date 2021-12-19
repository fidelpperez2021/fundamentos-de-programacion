// comparacion de dos numeros//

#include<iostream>
using namespace std;
int main()
{
float x,y;
cout<<"ingrese el valor de x: "<<x<<endl;
cout<<"ingrese el valor de y: "<<y<<endl;
if (x==y){
cout<<"el valor de x: "<<x<<"es igual a y: "<<y<<endl;
}else{
if (x<y){
cout<<"el valor de x: "<<x<<"es menor a y: "<<y<<endl;  
}else{
cout<<"el valor de y: "<<y<<"es menor a x: "<<x<<endl;
}
}
return 0;
}
