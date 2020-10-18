// 2884 알람 시계
#include <iostream>

int main()
{
    std::cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    /* User Setting */
    const int HOUR_OFFSET = 0;
    const int MINUIT_OFFSET = 45;

    const int MAX_HOUR = 24;
    const int MAX_MINUIT = 60;

    /* Setting Alarm */
    int hour, minuit;
    std::cin >> hour >> minuit;

    /* Calculating Time */
    int hourMinus, minMinus;
    hourMinus = HOUR_OFFSET + static_cast<int>(MINUIT_OFFSET / MAX_MINUIT);
    minMinus = MINUIT_OFFSET - ((hourMinus - HOUR_OFFSET) * MAX_MINUIT);

    hour -= hourMinus;
    minuit -= minMinus;

    if(minuit < 0)
    {
        hour -= 1;
        minuit = MAX_MINUIT + minuit;
    }
    if(hour < 0)
    {
        // day -= 1;
        hour = MAX_HOUR + hour;
    }

    std::cout << hour << ' ' << minuit;

    return 0;
}