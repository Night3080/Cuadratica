#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;
int main() {
  //Variables a utilizar
  double a,b,c,x1,x2;
  cout<< "Coloque el valor de a"<<endl;
  cin>> a;
  cout<< "Coloque el valor de b"<<endl;
  cin>> b;
  cout<< "Coloque el valor de c"<<endl;
  cin>> c;
  //Procedimiento para calcular el valor de x1
  x1=(-b+sqrt(b*b-4*a*c))/(2*a);
  //Procedimiento para calcular el valor de x2
  x2=(-b-sqrt(b*b-4*a*c))/(2*a);
  cout<< "El valor de x1 es: "<<x1<<endl;
  cout<< "El valor de x2 es: "<<x2<<endl;
  return 0;
}