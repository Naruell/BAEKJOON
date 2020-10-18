// 2753 윤년
#include <iostream>

int main()
{
    std::cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    int year;
    std::cin >> year;

    auto printTrue = []() { std::cout << 1; };
    auto printFalse = []() { std::cout << 0; };

    if(year % 4 == 0)
    {
        if((year % 100 != 0) || (year % 400 == 0)) { printTrue(); }
        else { printFalse(); }
    }
    else
    {
        printFalse();
    }

    return 0;
}