//Write a program to print the first 10 odd natural numbers in reverse order.

#include<stdio.h>
int main()
{
    int i;
    for(i=10;i>=1;i--)
    printf("%d\n",2*i-1);
    return 0;
}
/*
19
17
15
13
11
9
7
5
3
1
*/