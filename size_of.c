#include <stdio.h>

int main() {
    int a = sizeof(int);
    int b = sizeof(float);
    int c = sizeof(double);
    int d = sizeof(char);
   printf("The size of int is %d bytes\n",a);
   printf("The size of float is %d bytes\n", b);
   printf("The size of double is %d bytes\n",c);
   printf("The size of char is %d bytes\n",d);
   
   return 0;
}
