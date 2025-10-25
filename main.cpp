#include <iostream>

int main()
{
  using u_t = unsigned;
  u_t a = 0;
  size_t sum = 0;
  while (std::cin >> a)
  {
    sum += a * a;
  }

  if (std::cin.eof())
  {
    std::cout << sum << '\n';
  }
  else if (std::cin.fail())
  {
    std::cerr << "ERROR" << '\n';
    return 1;
  }
}
