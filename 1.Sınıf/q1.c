/*
write a function that takes char N, and 
return left aligned bits which are 5th 6th and 7th
*/
#include <stdio.h>
int align(char N)
{
    N = N >> 4 & 07;
}
int main(int argc, char const *argv[])
{
    int a=0265;//10110101
    //answer will be 3, 00000011
    int c=align(a);

    int b=0365;//11110101;
    //answer will be 7, 00000111
    int d=align(b);

    printf("c:%d\td:%d\n",c,d);
    return 0;
}