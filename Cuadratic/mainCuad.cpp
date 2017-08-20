#include "cuadratic.h"


int main(int argc, char **argv)
{
  double a = (double)std::atof(argv[1]),
    b = (double)std::atof(argv[2]),
    c = (double)std::atof(argv[3]);

  //std::cout << a << ", " << b << ", " << c << std::endl;
  
  SolvePoopCuad(a, b, c);
  if(!areComplex)
    {
      std::cout << "Poop solutions: " << x_1 << ", " << x_2 << std::endl;
    }
  
  SolveGoodCuad(a, b, c);
  if(!areComplex)
    {
      std::cout << "Good solutions: " << x_1 << ", " << x_2 << std::endl;
    }
}
