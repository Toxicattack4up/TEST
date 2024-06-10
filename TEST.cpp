#include <iostream>

void abc() {
    std::cout << "abc() called" << std::endl;
}

int main()
{
    int a, b, c;
    a = 5;
    b = 5;
    c = a + b;
    std::cout << c;
    abc();
    std::cout << "Leonid krasava" << std::endl;

}