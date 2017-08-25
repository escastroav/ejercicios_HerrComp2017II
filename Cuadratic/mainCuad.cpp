#include "cuadratic.h"


int main(int argc, char **argv)
{
  std::cout.precision(16); std::cout.setf(std::ios::scientific);
  double a =1., b = 1., xs1, xs2, xp1, xp2, c;
  
  for(int n = 0; n <= 100; n++)
    {
      c = pow(10.,-n);
      SolvePoopCuad(a, b, c);
      xs1 = x_1; xs2 = x_2;
      SolveGoodCuad(a, b, c);
      xp1 = x_1; xp2 = x_2;

      if(std::isinf(xs1) ||
	 std::isinf(xs2) ||
	 std::isinf(xp1) ||
	 std::isinf(xp2))
	{
	  std::cout << "infinite catched!" << std::endl;
	  break;
	}
      
      if(!areComplex && (xs1 != xp1 || xs2 != xp2))
	{
	  std::cout << "in cycle " << n << std::endl;
	  std::cout << "One solutions: " << xs1 << ", " << xs2 << std::endl;
	  std::cout << "Two solutions: " << xp1 << ", " << xp2 << std::endl;
	  std::cout << "------------------------------" << std::endl;
	}
    }
  //std::cout << a << ", " << b << ", " << c << std::endl;
  
  
  
 
}
