#include <stdio.h>

// int main()
// {
//     int i,j;
//     for(i=1; i<=5; i++)
//     {
//         for(j=1;j<=i;j++)
//         {
//             printf("%2d", i);
//         }
//         printf("\n");
//     }
// }

// int main()
// {
//     int i,j;
//     for(i=1;i<=5;i++)
//     {
//         for(j=1;j<=6-i;j++)
//         {
//             printf("%2d", j);
//         }
//         printf("\n");
//     }
// }

int main()
{
    int i,j;
    for(i=1; i<=5; i++)
    {
        for(j=6-i; j>0; j--)
        {
            printf("%2d", j);
        }
        printf("\n");
    }
}