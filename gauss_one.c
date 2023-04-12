#include <stdio.h>


void cal(int x1, int y1, int c1, int x2, int y2, int c2) {
    printf("\n%dx+%dy=%d\n", x1, y1, c1);
    printf("%dx+%dy=%d\n", x2, y2, c2);
    if (c1 == c2) {
        int x = 0;
        int y = 0;
        printf("x=%d , y=%d\n", x, y);
    }
    if (y1 == y2) {
        int x = (c1 - c2) / (x1 - x2);
        int y = c1 - (x * x1);
        printf("x=%d , y=%d\n", x, y);
    }
    else if (x1 == x2) {
        int y = (c1 - c2) / (y1 - y2);
        int x = c1 - (y * y1);
        printf("x=%d , y=%d\n", x, y);
    }
    else if (x1 != x2) {
        if (x1 > x2) {
            x2 = x2 * x1;
            y2 = y2 * x1;
            c2 = c2 * x1;
            if (x1 == x2) {
                int y = (c1 - c2) / (y1 - y2);
                int x = ((c1 - (y * y1)) / x1);
                printf("x=%d , y=%d\n", x, y);
            }
            else if (x1 != x2) {
                x1 = x1 * (x2 / x1);
                y1 = y1 * (x2 / x1);
                c1 = c1 * (x2 / x1);
                int y = (c1 - c2) / (y1 - y2);                
                int x = (c2 - y * y2) / x2;
                printf("x=%d , y=%d\n", x, y);
            }
        }
    }
}


int main() {
    cal(1,-1,1, 2, -1, 4);
    cal(5,3,21, 2, 4, 14);
    cal(5,4,40,2,2,18);
    return 0;
}