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

int CompareChart(double x, double tole)
{
  int n = 0;
  double sumSin = 0., sinError = 0.;
  
  do
    {
      sumSin = GoodSin(x, n);
      sinError = std::fabs(sumSin-std::sin(x))/std::fabs(std::sin(x));
      // std::cout << x << "\t" << n << "\t" << sumSin << "\t" << sinError << std::endl;
      n++;
    }while(sinError > tole);
  
  return n;
}

int main(int argc, char **argv)
{
  int Nmax;
  double fix_x = (double)std::atof(argv[1]), tolerance = (double)std::atof(argv[2]);

  std::cout.precision(10); std::cout.setf(std::ios::scientific);
  
  //std::cout << "x" << "\t" <<  "term" << "\t" << "good" << "\t" << "error" << std::endl;
  for(double x = 0; x<= fix_x; x+=0.1)
    {
      Nmax = CompareChart(x, tolerance);
      std::cout << x << "\t" << Nmax << std::endl;
    }
  
  return 0;
}
