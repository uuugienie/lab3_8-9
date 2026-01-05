#include <stdio.h>

int main() 
{
    int month = 0, getm = 0;

    if (scanf("%d", &month) != 1) return 0;

    switch (month) {
        case 6:
            getm = 1;
            break;
        case 7:
            getm = 1;
            break;
        case 8:
            getm = 1;
            break;
        default:
            break;
    }

    if (getm == 1) {
        int sumer;

        if (month < 11) {
            sumer = 11 - month;
        } else {
            sumer = (12 - month) + 11;
        }

        printf("sumer %d\n", sumer);
        printf("winter is coming %d\n", sumer);   
    }

    return 0;
}
