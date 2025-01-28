#include <stdio.h>
#include <math.h>

struct point {
    int x;
    int y;
};

double distance(struct point p1, struct point p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

int main() {
    struct point p1;
    p1.x = 1;
    p1.y = 2;
    struct point p2;
    p2.x = 4;
    p2.y = 6;
    double d = distance(p1, p2);
    printf("Distance between p1 and p2: %f\n", d);
    return 0;
}
