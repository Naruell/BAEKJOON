#include <iostream>
#include <cmath>

int main()
{
    int caseAmount, x1, y1, r1, x2, y2, r2;
    double distance;
    std::cin >> caseAmount;
    while(caseAmount-- > 0)
    {
        std::cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
        if(r2 > r1) // 첫 번째 원이 크다고 가정하기 위해
        {
            int tempX = x1;
            int tempY = y1;
            int tempR = r1;

            x1 = x2;
            y1 = y2;
            r1 = r2;

            x2 = tempX;
            y2 = tempY;
            r2 = tempR;
        }

        if(r1 >= distance) // 첫 번째 원 안에 두 번째 원이 있는 경우
        {
            if(distance + r2 == r1)
            {
                if(r1 == r2) { std::cout << -1 << std::endl; }
                else { std::cout << 1 << std::endl; }
            }
            else if( distance + r2 < r1) { std::cout << 0 << std::endl; }
            else { std::cout << 2 << std::endl; }
        }

        else // 첫 번째 원 밖에 두 번째 원이 있는 경우
        {
            if(r1 + r2 == distance) { std::cout << 1 << std::endl; }
            else if(r1 + r2 > distance) { std::cout << 2 << std::endl; }
            else { std::cout << 0 << std::endl; }
        }

    }
    return 0;
}