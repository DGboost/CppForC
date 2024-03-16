#include <iostream>

int main()
{
    int a = 10;
    int b(10);
    int c(a);

    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
    return 0;
}
