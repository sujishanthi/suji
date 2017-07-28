#include <stdio.h>
void main()
{
    int a, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(a = 0; a <= n; a++)
    {
        if (n == a * a)
        {
            printf("YES");
            return 0;
        }
    }
    printf("NO");
}
