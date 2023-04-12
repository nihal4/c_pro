#include <stdio.h>


void cal(int x1, int y1, int c1, int x2, int y2, int c2) {
    printf("\n%dx+%dy=%d\n", x1, y1, c1);
    printf("%dx+%dy=%d\n", x2, y2, c2);
    if (c1 == c2) {
        int x = 0;
        int y = 0;
        printf("x=%d , y=%d", x, y);
    }
    if (y1 == y2) {
        int x = (c1 - c2) / (x1 - x2);
        int y = c1 - (x * x1);
        printf("x=%d , y=%d", x, y);
    }
    else if (x1 == x2) {
        int y = (c1 - c2) / (y1 - y2);
        int x = c1 - (y * y1);
        printf("x=%d , y=%d", x, y);
    }
    else if (x1 != x2) {
        if (x1 > x2) {
            x2 = x2 * x1; //10
            y2 = y2 * x1; //20
            c2 = c2 * x1; //70
            if (x1 == x2) {
                int y = (c1 - c2) / (y1 - y2);
                int x = ((c1 - (y * y1)) / x1);
                printf("x=%d , y=%d", x, y);
            }
            else if (x1 != x2) {
                x1 = x1 * (x2 / x1); //5*(10/5) =10
                y1 = y1 * (x2 / x1); //3*(10/5) =6
                c1 = c1 * (x2 / x1); //21*(10/5) =42
                int y = (c1 - c2) / (y1 - y2);
                int x = (c1 - y * y1) / x1;
                printf("x=%d , y=%d", x, y);
            }
        }
    }
}


int main() {
    cal(5, 3, 21, 2, 4, 14);
    return 0;
}