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
      std::cout << x << "\t" << j << "\t" << GoodSin(x, j) << "\t" << std::fabs(GoodSin(x,j)-std::sin(x))/std::sin(x) << std::endl;
    }
}

int main(void)
{
  double fix_x = 0.5;
  double n_Terms = 50;

  std::cout.precision(16);
  
  std::cout << "term" << "\t" << "good" << "\t" << "error" << std::endl;
  for(double dx=0;dx<=10.;dx+=.1){CompareChart(fix_x+dx, n_Terms);};
  
  return 0;
}
