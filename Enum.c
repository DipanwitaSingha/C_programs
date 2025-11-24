#include <stdio.h>

enum Day { MON=1, TUE, WED, THU, FRI, SAT, SUN };

int main() {
    enum Day today = WED;
    printf("Today is day number: %d\n", today);
    return 0;
}

