#include <iostream>
#include <complex>

using namespace std;

int main(){

  // Example how to declare a single complex variable:
  complex<double> c;

  // d = 1 + 2i 
  //complex<double> d = complex<double>(1.0, 2.0); 
  
  int maxit = 500; // max number of iteration steps
  complex<double> z;
  complex<double> z0;
  complex<double> z1;
  

  
  for(double a = -2.0; a <= 2.0; a = a+0.01){
    for(double b = -2.0; b <= 2.0; b = b+0.01){
      z = complex<double>(a,b);
      z0 = z;
      int n = 0;// number of steps
      double error = 1.0;
      while(error > 1e-8 && n < maxit){
	
	z1 = z -((z*z*z)-1.0)/3.0*z;
	error = abs(z1-z);
	z = z1;
	n++;
	//cout<< "in while schleife"<<endl;
      }
      cout << real(z0) << "\t" << imag(z0) << "\t" << n <<endl;
    }
  }
    
  
  
  
  
  return 0;
}
