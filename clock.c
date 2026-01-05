#include <stdio.h>

int main() {
    int h, m, s, add;
    char c;

    scanf("%d%c%d%c%d", &h, &c, &m, &c, &s);
    printf("Hour:%d\nMinute:%d\nsecond:%d\n", h, m, s);

    scanf("%d", &add);

    h = (h * 60 + m + add) % (24 * 60);
    m = h % 60;
    h /= 60;

    printf("\nhour:%d\nminute:%d\nsecond:%d\n", h, m, s);
    return 0;
}

