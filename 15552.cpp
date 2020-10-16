#include <iostream>

int main()
{
    std::cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    int caseAmount, num1, num2;
    std::cin >> caseAmount;
    while(caseAmount-- > 0)
    {
        std::cin >> num1 >> num2;
        std::cout << num1 + num2 << '\n';
    }
    return 0;
}