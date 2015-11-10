#include <iostream>
#include <complex>
#include <cmath>

using namespace std;


//Unterfunktion
complex<double> funct(complex<double> winkel);

int main(){
  const int N = 100; // ANzhal der schriitte
  complex<double> ii = complex<double>(0.0,1.0);//definiere die imaginäre Zahl
  complex<double> array[N];
  
  double dphi = 2*M_PI/(N-1);
  
  // Example how to declare a single complex variable:
  complex<double> c;

  for(int i = 0; i < N; i++){
    //double phi = i * dphi;
    //array[i] = exp(phi*ii);
    complex<double>  phi = (i * dphi - M_PI)+ii;
    array[i] = funct(phi);
    cout << phi << "\t" << funct(phi) <<endl;
  }
 // for(int i=0; i < N; i++){
 //   double reali = real(array[i]);
 //   double imagi = imag(array[i]);
 //   double absi  = abs(array[i]);
 //   //cout << i*dphi << "\t" << reali << "\t" << imagi << "\t" << absi <<endl;
 // }

  return 0;
}


complex<double> funct(complex<double>  winkel){
  complex<double>  zz;
  zz = tan(winkel);
  
  return zz;
}