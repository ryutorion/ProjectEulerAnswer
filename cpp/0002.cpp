#include <iostream>

int main()
{
    int result = 2;
    for(int a = 2, b = 8; b < 4000000;){
        result += b;
        b = 4 * b + a;
        a = (b - a) / 4;
    }

    std::cout << result << std::endl;
}
