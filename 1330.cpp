// 1330 두 수 비교하기
#include <iostream>

int main()
{
    std::cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    int num1, num2;
    std::cin >> num1 >> num2;

    if(num1 > num2)      { std::cout << ">\n"; }
    else if(num1 < num2) { std::cout << "<\n"; }
    else                 { std::cout << "==\n"; }

    return 0;
}