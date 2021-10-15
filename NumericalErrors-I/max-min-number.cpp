#include<iostream>
int main(void)
{
  float xover = 1.52e40;
  float xunder = 1.52e-50;

  std::cout << "xover = " << xover <<"\t";
  std::cout << "xunder = " << xunder <<"\n";
  return 0;
}
