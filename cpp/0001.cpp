#include <iostream>

int main()
{
    int result = 3;
    for(int i = 4; i < 1000; ++i){
        if(i % 3 == 0 || i % 5 == 0){
            result += i;
        }
    }

    std::cout << result << std::endl;
}
