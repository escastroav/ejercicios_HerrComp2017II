#include "cuadratic.h"


int main(int argc, char **argv)
{
  std::cout.precision(16); std::cout.setf(std::ios::scientific);
  double a =1.,
    b = 1.,
    xs1,
    xs2,
    s1,
    s2,
    xp1,
    xp2,
    p1,
    p2,
    c;
  
  for(int n = 1; n <= 100; n++)
    {
      c = pow(10.,-n);
      
      SolvePoopCuad(a, b, c);
      xs1 = x_1; xs2 = x_2;
      
      s1 = ConfirmSol(a, b, c, xs1);
      s2 = ConfirmSol(a, b, c, xs2);
      
      SolveGoodCuad(a, b, c);
      xp1 = x_1; xp2 = x_2;
      
      p1 = ConfirmSol(a, b, c, xp1);
      p2 = ConfirmSol(a, b, c, xp2);

      if(std::isinf(xs1) ||
	 std::isinf(xs2) ||
	 std::isinf(xp1) ||
	 std::isinf(xp2))
	{
	  std::cout << "infinite catched!" << std::endl;
	  break;
	}
      
      std::cout << n << "\t" << s1 << "\t" << s2 << "\t" << p1 << "\t" << p2 << std::endl;
    }
  //std::cout << a << ", " << b << ", " << c << std::endl;
  
  
  
 
}
