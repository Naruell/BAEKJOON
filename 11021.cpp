// 11021 A+B - 7
#include <iostream>

int main()
{
    std::cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    int caseAmount;
    int num1, num2;
    int i;
    std::cin >> caseAmount;

    for(i = 0; i < caseAmount; ++i)
    {
        std::cin >> num1 >> num2;
        std::cout << "Case #" << i + 1 << ": " << num1 + num2 << '\n';
    }

    return 0;
}