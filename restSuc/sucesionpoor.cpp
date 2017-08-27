#include "sucesion.h"

double SucesionPoor1 (double N)
{
  double sum, term;

  for(int n = 1; n <= 2*N; n++)
    {
      term = std::pow(-1.,n)*n/(n+1);
      sum += term;
    }

  return sum;
}

double SucesionPoor2 (double N)
{
  double sum, term1, term2;

  for(int n = 1; n <= N; n++)
    {
      term1 = (2*n-1)/(2*n);
      term2 = (2*n)/(2*n+1);
      sum += term2 - term1;
    }

  return sum;
}

double SucesionPoor3 (double N)
{
  double sum, term;

  for(int n = 1; n <= N; n++)
    {
      term = 1./(2*n*(2*n+1));
      sum += term;
    }

  return sum;
}
