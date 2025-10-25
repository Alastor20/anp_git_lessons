#include <iostream>
#include <limits>

bool isPyth(unsigned a, unsigned b, unsigned c);

int main()
{
  using u_t = unsigned;
  u_t a = 0, b = 0, c = 0;
  size_t count = 0;
  std::cin >> c;
  std::cin >> b;
  while (std::cin >> a)
  {
    if (isPyth(a, b, c))
    {
      if (std::numeric_limits<size_t>::max() > count)
      {
        ++count;
      }
      else
      {
        std::cerr << "ERROR: overflow" << '\n';
        return 2;
      }
    }
    c = b;
    b = a;
  }

  if (std::cin.eof())
  {
    std::cout << count << '\n';
  }
  else if (std::cin.fail())
  {
    std::cerr << "ERROR: cant read" << '\n';
    return 1;
  }
}

bool isPyth(unsigned a, unsigned b, unsigned c)
{
  bool p = a * a + b * b == c * c;
  p = p || a * a + c * c == b * b;
  p = p || b * b + c * c == a * a;
  return p;
}
