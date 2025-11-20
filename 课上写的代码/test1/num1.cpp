#include<stdio.h>
using namespace std;
int main()
{
    unsigned int a, b, c, max, min;
    scanf("%d%d%d", &a, &b, &c);
    max = a;
    if (max < b)
	   max = b;
    if (max < c)
	   max = c;
    min = a;
    if (min > b)
	   min = b;
    if (min > c)
	   min = c;  
    printf("max = %hu, max = %hd\n", max, max);
    printf("min = %hu, min = %hd\n", min, min);
    return 0;
}
