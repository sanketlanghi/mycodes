#include<stdio.h>

/* Right angle Pattern loop

int main()
{
    int i, j, n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
 */


/* Square star Pattern loop 

    int main()
    {
        int i,j,n;

        printf("Enter the number of columns: ");
        scanf("%d", &n);

        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                printf("*");
            }
            printf("\n");

        }
*/

/* Hollow square pattern  

    int main()
    {
        int i,j,n;

        printf("Enter the number: ");
        scanf("%d", &n);


        for(i=1; i<=n;i++)
        {
            for(j=1; j<=n; j++)
            {
                if(i==1||i==n||j==1||j==n)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }

            }
            printf("\n");
}

}
*/
 

/* Hollow square pattern with diagonal 

    int main()
    {
        int i,j,n;

        printf("Enter the number of rows: ");
        scanf("%d", &n);

        for(i=1;i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                if(i==1||i==n||j==1||j==n||i==j)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }

            }
            printf("\n");   

        }

    }
*/


/*Rhombus star pattern

    int main()
    {
        int i,j,n;

        printf("Enter the number of rows: ");
        scanf("%d",&n);

        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n-i; j++)
            {
                printf(" ");
                
            }

        for(j=1; j<=n; j++)
        {
            printf("*");
        }

        printf("\n");
        }
    }
*/

/* Hollow rhombus star pattern */

    #include <stdio.h>

int main()
{
    int i, j, rows;

    /* Input number of rows from user */
    printf("Enter rows : ");
    scanf("%d", &rows);


    for(i=1; i<=rows; i++)
    {
        /* Print trailing spaces */
        for(j=1; j<=rows-i; j++)
        {
            printf(" ");
        }


        /* Print stars and center spaces */
        for(j=1; j<=rows; j++)
        {
            if(i==1 || i==rows || j==1 || j==rows)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}