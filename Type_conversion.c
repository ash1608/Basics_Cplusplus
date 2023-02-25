#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number:");
    scanf("%d", &a);
    for (int i = 0; i < 5; i++)
    {
        // In the same way we can do type conversion in c++ and for conversion of char in int we use int instead of char!
        char c = (char)(a+ i);
        printf("%c ", c);
    }
}