// 14681 사분면 고르기
#include <iostream>

int main()
{
    std::cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    int x, y;
    std::cin >> x >> y;

    if((x > 0) && (y > 0)) { std::cout << 1; }
    else if((x < 0) && (y > 0)) { std::cout << 2; }
    else if((x < 0) && (y < 0)) { std::cout << 3; }
    else { std::cout << 4; }

    return 0;
}