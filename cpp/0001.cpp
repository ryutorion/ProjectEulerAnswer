#include <iostream>

int main()
{
    int arithmeticSeriesOfThree   = (999 /  3) * ( 3 + 999) / 2;
    int arithmeticSeriesOfFive    = (999 /  5) * ( 5 + 995) / 2;
    int arithmeticSeriesOfFifteen = (999 / 15) * (15 + 990) / 2;

    std::cout <<
        arithmeticSeriesOfThree +
        arithmeticSeriesOfFive  -
        arithmeticSeriesOfFifteen
    << std::endl;
}
