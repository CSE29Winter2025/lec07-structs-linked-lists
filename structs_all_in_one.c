#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct point {
    int x;
    int y;
};

double distance_v1(struct point p1, struct point p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

double distance_v2(struct point *p1, struct point *p2) {
    return sqrt(pow(p2->x - p1->x, 2) + pow(p2->y - p1->y, 2));
}

int main() {
    struct point p1;
    p1.x = 1;
    p1.y = 2;
    struct point p2;
    p2.x = 4;
    p2.y = 6;
    double d1 = distance_v1(p1, p2);
    double d2 = distance_v2(&p1, &p2);
    printf("Distance between p1 and p2 (using pass by value): %f\n", d1);
    printf("Distance between p1 and p2 (using pass by pointer): %f\n", d2);

    struct point *p3 = malloc(sizeof(struct point));
    p3->x = 1;
    p3->y = 2;
    struct point *p4 = malloc(sizeof(struct point));
    p4->x = 4;
    p4->y = 6;
    double d3 = distance_v2(p3, p4);
    printf("Distance between p3 and p4 (dynamically allocated): %f\n", d3);
    
    return 0;
}
