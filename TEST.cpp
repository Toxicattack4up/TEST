#include <iostream>

int main()
{
    int a, b, c;
    a = 5;
    b = 5;
    c = a + b;
    std::cout << c;

    std::cout << "Leonid krasava" << std::endl;

    class Base {
    public:
        virtual void abc() {
            std::cout << "Base abc() called" << std::endl;
        }
        virtual ~Base() {}
    };
}