/*
    write a func that takes two char array and search second in first.  and return position first occurrence or
    -1 if not found. u can only use strlen func
*/

#include <stdio.h>
#include <string.h>
int substring(char *str1, char *str2)
{
    char *ptr2=NULL;
    int i=0,j;
    while(i< strlen(str1)-stlen(str2)){
        ptr2=str2;
        j=0;
        int count=0;
        while(j<stlen(str2))
        {
            if(str1[i]==str2[j])
            count++;
        }

    }
}

int main()
{

    return 0;
}