// 2588 곱셈
#include <iostream>

int main()
{
    std::cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    int num1, num2;
    std::cin >> num1 >> num2;

    int divider = 10;
    int remain = 0;
    int temp;

    while(divider / 10 < num2)
    {
        temp = (num2 % divider - remain) / (divider / 10); // temp 는 num2 의 각 자릿수
        std::cout << temp * num1 << '\n';

        remain += temp;
        divider *= 10;
    }

    std::cout << num1 * num2 << '\n';
    return 0;
}