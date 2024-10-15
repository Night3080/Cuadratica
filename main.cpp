#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;
int main() {
  double a,b,c,x1,x2;
  cout<< "Coloque el valor de a"<<endl;
  cin>> a;
  cout<< "Coloque el valor de b"<<endl;
  cin>> b;
  cout<< "Coloque el valor de c"<<endl;
  cin>> c;
  x1=(-b+sqrt(b*b-4*a*c))/(2*a);
  x2=(-b-sqrt(b*b-4*a*c))/(2*a);
  cout<< "El valor de x1 es: "<<x1<<endl;
  cout<< "El valor de x2 es: "<<x2<<endl;
  return 0;
}