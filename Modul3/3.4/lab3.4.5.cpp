#include <iostream>
#include <ctime>

struct Date {
    int year;
    int month;
    int day;
};
Date today(void) {
    time_t t = time(NULL);
    tm tl = *localtime(&t);
    Date time;
    time.year = tl.tm_year+1900;
    time.month = tl.tm_mon+1;
    time.day = tl.tm_mday;
    return time;
}

int main(void) {
    Date t = today();
    std::cout << t.year << "-" << t.month << "-" << t.day << std::endl;
    return 0;
}
