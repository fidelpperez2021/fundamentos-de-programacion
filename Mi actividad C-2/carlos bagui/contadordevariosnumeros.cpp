//suma o contador  de varios Numeros//

#include<iostream>
using namespace std;
int main()
{
	int c=0,n;
	float s=0,x;
	cout<<"ingrese la catidad de valores a sumar: ";
	cin>>n;
	do{
		cout<<"ingrese el elenento"<<c+1;
		cin>>x;
		c=c+1;
		s=s+x;
	}while(c<n);
	cout<<"La suma de los elementos fue: "<<s<<endl;
	return 0;
}	
