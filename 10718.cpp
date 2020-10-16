#include <iostream>

int main()
{
    std::cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    enum {count = 2};
    int i;

    for(i = 0; i < count; ++i)
    {
        std::cout << "강한친구 대한육군\n";
    }
    return 0;
}