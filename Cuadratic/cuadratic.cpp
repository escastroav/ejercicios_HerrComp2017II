#include "cuadratic.h"

double x_1 = 0.0;
double x_2 = 0.0;
bool areComplex = false;

void SolvePoopCuad(double a, double b, double c)
{
  double disc = 0.0;

  disc = pow(b,2.) - 4*a*c;

  areComplex = (disc < 0.);
  
  if(!areComplex)
    {
      x_1 = (-b + sqrt(disc))/(2*a);
      x_2 = (-b - sqrt(disc))/(2*a);
    }
  else
    {
      std::cout << "Complex solutions!.. from now we don't care." << std::endl;
    }
}

void SolveGoodCuad(double a, double b, double c)
{
  double disc = 0.0;

  disc = pow(b,2.) - 4*a*c;

  areComplex = (disc < 0.);

  if(!areComplex)
    {
      x_1 = -(2*c)/(b + std::sqrt(disc));
      x_2 = -(2*c)/(b - std::sqrt(disc));
    }
  else
    {
      std::cout << "Complex solutions!.. from now we don't care." << std::endl;
    }
}
