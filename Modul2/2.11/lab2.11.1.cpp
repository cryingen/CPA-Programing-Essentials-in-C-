#include <iostream>

struct Time
{
    int hour;
    int minute;
};
int main(void) {
    Time myTime;
    int min;
    std::cout << "Input hour: ";
    std::cin >> myTime.hour;
    std::cout << "Input minute: ";
    std::cin >> myTime.minute;
    if(myTime.hour > 23 || myTime.hour < 0 || myTime.minute > 60 || myTime.minute < 0)
        std::cout << "Wrong time!";
    else
    {
        std::cout << "Input time interval in minutes: ";
        std::cin >> min;
        myTime.minute += min;
        while ( myTime.minute >= 60 )
        {
            myTime.hour++;
            if(myTime.hour > 23)
                myTime.hour -= 24;
            myTime.minute -= 60;
        }
        std::cout << myTime.hour << ":" << myTime.minute;
    }
    return 0;
}
