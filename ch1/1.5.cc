#include <iostream>

int main() {
    std::cout << "Enter two numbers : " << std::endl;
    int v1, v2;
    std::cin >> v1 >> v2;
    std::cout << v1 ;
    std::cout << " multiplies " ;
    std::cout << v2 ;
    std::cout << " = " ;
    std::cout << v1 * v2 ;
    std::cout << std::endl;
    return 0;
}
