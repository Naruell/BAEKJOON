// 10871 X보다 작은 수
#include <iostream>

int main()
{
    std::cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    int caseAmount, maxValue;
    int element;
    std::cin >> caseAmount >> maxValue;

    while(caseAmount-- > 0)
    {
        std::cin >> element;
        if(element < maxValue) { std::cout << element << ' '; }
    }

    return 0;
}