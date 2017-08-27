#include "sucesion.h"
#include "sucesionpoor.h"


double Error(double x, double x2)
{
  return (std::fabs(x2 - x)/x);
}

int main (void)
{
  int Nmax = 100;
  double S1, S2, S3;
  
  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);
  
  std::cout
    << "n                " << " "
    << "S1               " << " "
    << "S2               " << " "
    << "S3               " << " "
    << "DS1               " << " "
    << "DS2               " << std::endl;
  
  for(int n = 1; n <= Nmax; n++)
    {
      S1 = Sucesion1(n); S2 = Sucesion2(n); S3 = Sucesion3(n);
      std::cout
	<< n << "\t"
	<< S1 << "\t"
	<< S2 << "\t"
	<< S3 << "\t"
	<< Error(S3, S1) << "\t"
	<< Error(S3, S2) << "\t"
	<< std::endl;
    }

  return 0;
}
