// Print each number in the range specified by two integers.

#include <iostream>
#include<stdio.h>
using namespace std;

void print_range(int lo, int hi)
{
    if (lo > hi)
    {
        print_range(hi, lo);
        return;
    }
    for (int i = lo; i != hi; ++i)
        cout << i << " ";
}

int main()
{
    int low = 0, high = 0;
    printf("please input two integers:\n");
    scanf("%d%d",low,high);
    print_range(low, high);
    return 0;
}
