#include<iostream>
#include<cmath>
#include<cstdlib>

double factorial (int n)
{
  double fac = 1.;
  for(int k = 1; k <= n; k++)
    {
      fac *= k;
    }
  return fac;
}

double PoopSin (double x, int N)
{
  double sum = 0., term = 0.;
  for(int i = 1; i <= N; i++)
    {
      term = (pow(-1.,i-1)*pow(x, 2*i-1))/factorial(2*i-1);
      sum += term;
    }
  return sum;
}

double GoodSin (double x, int N)
{
  double sum = 0., term = x;
  
  sum+=term;
  
  for(int i = 1; i <= N; i++)
    {
      term *= -pow(x,2.)/((2*i)*(2*i+1));
      sum += term;
    }
  return sum;
}

double CompareChart(double x, int N)
{
  for(int j = 1; j <= N; j++)
    {
      std::cout << j << "\t" << PoopSin(x,j) << "\t" << GoodSin(x, j) << "\t" << sin(x) << std::endl;
    }
}

int main(void)
{
  double fix_x = 10.5;
  double n_Terms = 100;

  std::cout.precision(10);
  
  // std::cout << "term" << "\t" << "poop" << "\t" << "good" << "\t" << "real" << std::endl;
  CompareChart(fix_x, n_Terms);
  
  return 0;
}
