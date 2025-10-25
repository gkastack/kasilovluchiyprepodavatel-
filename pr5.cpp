#include <iostream>

bool isPyth(unsigned a, unsigned b, unsigned c);

int main()
{
    using u_t = unsigned;
    u_t a = 0, b = 0, c = 0;
    size_t count = 0;
    while (std::cin >> a)
    {
        count += isPyth(a, b, c) ? 1 : 0;
        c = b;
        b = a;
    }
    if (std::cin.eof())
    {
        std::cout << count << '\n';
    }
    else if (std::cin.fail())
    {
        std::cerr << "Error\n";
        return 1;
    }
}

bool isPyth(unsigned a, unsigned b, unsigned c)
{
    bool p = pow(a, 2) == (pow(b, 2) + pow(c, 2));
    p = p || pow(b, 2) == (pow(a, 2) + pow(c, 2));
    p = p || pow(c, 2) == (pow(a, 2) + pow(b, 2));
    return p;
}
