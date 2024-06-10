#include <iostream>
#include <string>

using namespace std;
static void abc();
static std::string abc(std::string a);

int main()
{
    int a, b, c;
    a = 5;
    b = 5;
    c = a + b;
    std::cout << c << endl;
    abc();
    cout << "Leonid krasava" << std::endl;
    string g = abc("asd");

    cout << g;
}

static void abc()
{
    std::cout << 1 + 2 << endl;
}

static std::string abc(std::string a)
{
    std::cout << a << std::endl;
    return a + "!!!";
}