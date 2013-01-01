#include <iostream>

int main()
{
    int result = 2;
    for(int a = 1, b = 2; b < 4000000;){
        b += a;
        a = b - a;

        if(b % 2 == 0)
            result += b;
    }

    std::cout << result << std::endl;
}
