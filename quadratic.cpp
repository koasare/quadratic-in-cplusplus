#include <iostream>
#include <cmath>

int main() {
  
  float a;
  float b;
  float c;
  float root1;
  float root2;

  std::cout << "Enter a: " << '\n';
  std::cin >> a;

  std::cout << "Enter b: " << '\n';
  std::cin >> b;

  std::cout << "Enter c: " << '\n';
  std::cin >> c;

  float sqrtb4ac = std::sqrt(pow(b,2) - (4 * a * c));
  root1 = (-b + sqrtb4ac)/(2 * a);
  root2 = (-b - sqrtb4ac)/(2 * a);

  std::cout << "root 1: " << root1 << '\n';
  std::cout << "root 2: " << root2 << '\n';

  return 0;




  
}