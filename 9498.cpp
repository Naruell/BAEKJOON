// 9498 시험 성적
#include <iostream>

int main()
{
    std::cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    int score;

    enum {
        A = 90,
        B = 80,
        C = 70,
        D = 60
    };

    std::cin >> score;

    if(score >= A) { std::cout << "A\n"; }
    else if(score >= B) { std::cout << "B\n"; }
    else if(score >= C) { std::cout << "C\n"; }
    else if(score >= D) { std::cout << "D\n"; }
    else { std::cout << "F\n"; }

    return 0;
}