#include <stdio.h>
#include <conio.h>
void main()
{
    int n1, n2;
    printf("Enter upper and lower limits of even numbers: ");
    scanf("%d%d", &n1,&n2);
    if (n1 < n2)
    {
        for (int i = n1; i <= n2; i++)
        {
            if (i % 2 == 0)
                printf("%d\n", i);
        }
    }
getch();
}
