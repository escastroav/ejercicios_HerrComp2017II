#include "sucesion.h"

double Sucesion1(int N)
{
  int sign = 1;
  double p1;
  double sum = 0, term = 0;
  
  for(int k = 1; k <= 2*N; k++)
    {
      sign = (k % 2 == 0) ? 1:(-1);
      p1 = (k+1);
      term = sign*(k/p1);
      sum += term;
    }

  return sum;
}

double Sucesion2(int N)
{
  double p1, p2, p3;
  double
    sum = 0,
    term1 = 0,
    term2 = 0;
  
  for(int k = 1; k <= N; k++)
    {
      p1 = 2*k;
      p2 = (2*k+1);
      p3 = (2*k-1);
      
      term1 = p3/p1;
      term2 = p1/p2;
      
      sum += (term2 - term1);
    }

  return sum;
}

double Sucesion3(int N)
{
  double p1, p2;
  double sum = 0, term = 0;
  
  for(int k = 1; k <= N; k++)
    {
      p1 = 2*k; p2 = (2*k+1);
      
      term = 1./(p1*p2);
      sum += term;
    }

  return sum;
}
