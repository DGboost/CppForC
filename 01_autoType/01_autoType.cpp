#include <iostream>

int main()
{
    int a = 10;
    int b(10);
    auto c(a);

    std::cout << c << std::endl;
    return 0;
}