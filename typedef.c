
#include <stdio.h>

typedef struct vector{
    int x;
    int y;
}vec; // making another variable using typedef to skip writing structure
int main() {
    vec v1,v2;
    v1.x = 223;
    v1.y = 2244;
    v2.x = 224;
    v2.y = 998;
    printf("The 1 dim of vector is %d and second dim of vector is %d\n",v1.x,v1.y);
    printf("The v1 dim of vector is %d and v2 dim of vector is %d\n",v2.x,v2.y);
    

    return 0;
}
