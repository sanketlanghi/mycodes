#include<stdio.h>

/* Area of a rectangle

int main()
{
    int length ,breadth;

    printf("Enter the length:");
    scanf("%d", &length);
    printf("Enter the breadth:");
    scanf("%d", &breadth);

    int area;
    area = length*breadth;

    printf("Area of rectangle is: %d", area);
}
*/

// ----------------------------------------------------

/*Print ASCII value of a character

int main()
{
    char val;

    printf("Enter a character:");
    scanf("%c", &val);

    printf("The given character is: %c\nAnd it's ASCII value is %d", val, val);
}
*/

// ---------------------------------------------------------

/*Area of triangle
   
    int main()
    {
        int area, height, breadth;

        printf("Enter the Height:");
        scanf("%d", &height);
        printf("Entre the breadth:");
        scanf("%d", &breadth);

        area = (0.5*height*breadth);

        printf("The area of the triangle is: %d", area);
    }

*/

// ---------------------------------------------------------------

/*ABBREVATE A PERSONS NAME

    int main()
    {
        char fname[20], lname[20];

        printf("Enter your first name: ");
        scanf("%s", &fname);
        printf("Enter your second name: ");
        scanf("%s", &lname);
         
        
        printf("Abbrevation of the name is:");
        printf("%c.%c", fname[2], lname[3]);

    }
*/

// ----------------------------------------------------------------------

/*  SIMPLE INTEREST RATE 

int main()
{
        float prin, time, intRate, simple_intrest;

        printf("Enter the principle amount:");
        scanf("%f", &prin);
        printf("Enter the time:");
        scanf("%f",&time);
        printf("Enter the interest rate:");
        scanf("%f",&intRate);

        simple_intrest = (prin*time*intRate)/100;


        printf("The simple intrest is: %f", simple_intrest);


        return 0;
}
*/

// -----------------------------------------------------------

/*GROSS SALARY OF AN EMPLOYEE

int main()
{
    float hoursWorked, hourlyrate, gross_sal;

    printf("Enter the hours worked:");
    scanf("%f", &hoursWorked);
    printf("Enter the hourly rate:");
    scanf("%f", &hourlyrate);

    gross_sal = (hourlyrate*hoursWorked*52);


    printf("The gross salary is : Rs %f", gross_sal);

    return 0;
}
*/

// -----------------------------------------------------------


/*PERCENTAGE CALCULATIONS
int main()
{
    float num, deno ,per;

    printf("Enter the value:");
    scanf("%f", &num);
    printf("Enter the total value:");
    scanf("%f", &deno);

    per = (num/deno)*100;


    printf("The percentage is: %.2f", per);

    return 0;
}
*/

// ------------------------------------------------------------


/*CONVERTING CELCIUS TO FAHRENHEIT

int main()
{

    float fahr, cel;

    printf("Enter the temperature in celcius:");
    scanf("%f", &cel);

    fahr = 9/5*(cel+32);

    printf("The temperature in fahrenheit is : %f", fahr);
    
    return 0;

}
*/

// -------------------------------------------------------------- 

/*TO DISPLAY THE SIZE OF THE DATA TYPES

        int main()
        {
            int a;
            float b;
            char c;


            printf("The size of int: %zu bytes\n", sizeof(a));
            printf("The size of float: %zu bytes\n", sizeof(b));
            printf("The size of char : %zu bytes\n", sizeof(c));

            return 0;

        }
*/

// ------------------------------------------------------------------

/*FACTORIAL OF A NUMBER

        int main()
        {
                int i,num, fact = 1; 

                printf("Enter a number: ");
                scanf("%d", &num);

                for(i=1; i<=num; i++){
                    fact = fact*i;
                }

                printf("The factorial of the number %d: %d", num, fact);

                return 0;

}
*/

// -----------------------------------------------------------------



/*DISPLAY THE POWER OF THE GIVEN INTEGER UPTO 3


        int main()
        {

            int num;

            printf("Enter the integer:");
            scanf("%d", &num);

            printf("The power of %d upto 3 values: %d, %d ,%d", num, num, num*num, num*num*num);
            

            return 0;
}
*/

// --------------------------------------------------------------


/*GREATEST OF THREE NUMBERS

    int main()
    {
        int num1, num2, num3;

        printf("Enter 1st number:");
        scanf("%d", &num1);
        printf("Enter 2nd number:");
        scanf("%d", &num2);
        printf("Enter 3rd number:");
        scanf("%d", &num3);

        if(num1>num2 && num1>num3)
        {
            printf("1st number is the greatest.");
        } 
        else if(num2>num1 && num2>num3)
        {
            printf("2nd number is the greatest:");
        }
        else
        {
            printf("3rd number is the greatest:");
        }
    }
*/

// --------------------------------------------------------------

/*THE NUMBER IS POSITIVE OR NEGATIVE


    int main()
    {
        int  num1;


        printf("Enter the number:");
        scanf("%d", &num1);
        
        if(num1>0)
        {
            printf("The given number %d is positive.", num1);
        }
        else
        {
            printf("The given number %d is negative.", num1);
        }
 }
 */

// ------------------------------------------------------------

/*CHARACTER IS VOWEL OR CONSONENT


int main()
{
    char val;

    printf("Enter the character: ");
    scanf("%c", &val);

    switch (val)
    {
    case 'A':
    case 'a':
            printf("It is a vowel.");
        break;
    case 'E':
    case 'e':
            printf("It is a vowel.");
        break;
    
    case 'I':
    case 'i': 
            printf("It is vowel.");
        break;

    case 'O':
    case 'o': 
            printf("It is vowel.");
        break;

    case 'U':
    case 'u':
            printf("It is a vowel.");
        break;

    default:
            printf("It is not a vowel.");
        break;
    }
}
*/
// ---------------------------------------------------------

/*A CHARACTER IS AN ALPHABET OR NOT


    int main()
    {
            char alph;

            printf("Enter the character: ");
            scanf("%c",&alph);

            switch (alph)
            {
            case 'A':
            case 'B':
            case 'C':
            case 'D':
            case 'E':
            case 'F':
            case 'G':
            case 'H':
            case 'I':
            case 'J':
            case 'K':
            case 'L':
            case 'M':
            case 'N':
            case 'O':
            case 'P':
            case 'Q':
            case 'R':
            case 'S':
            case 'T':
            case 'U':
            case 'V':
            case 'W':
            case 'X':
            case 'Y':
            case 'Z':

            case 'a':
            case 'b':
            case 'c':
            case 'd':
            case 'e':
            case 'f':
            case 'g':
            case 'h':
            case 'i':
            case 'j':
            case 'k':
            case 'l':
            case 'm':
            case 'n':
            case 'o':
            case 'p':
            case 'q':
            case 'r':
            case 's':
            case 't':
            case 'u':
            case 'v':
            case 'w':
            case 'x':
            case 'y':
            case 'z':
                        printf("The given value is an Allphabet.");    

                break;      
            
            default:
                    printf("The given value is not an Alphabet.");
                break;
            }
}
*/

// ----------------------------------------------------------------

/*UPPERCASE, LOWERCASE, SPECIAL CHARACTER OR DIGIT


    int main()
    {
        char val;
        

        printf("Enter the value: ");
        scanf("%c", &val);

        if(val >= 'A' && val <= 'Z')
        {
            printf("The character is Uppercase.");
        } 
        else if(val >= 'a' && val <= 'z')
        {
            printf("The character is Lowercase");
        } 
        else if(val>= '0' && val <= '9')
        {
            printf("The given value is a number.");
        }
        else 
        {
            printf("The given value is a special character.");
        }
    }
*/

// ---------------------------------------------------------------

/*THE NUMBER IS POSITIVE OR NEGATIVE


    int main()
    {
        int num;

        printf("Enter the number:");
        scanf("%d", &num);

        if(num%2 == 0)
        {
            printf("The given number is even.");
        }
        else
        {
            printf("The given number is odd.");
        }
}
*/

// ----------------------------------------------------------

/*GREATEST OF TWO NUMBERS

    int main()
    {
            int num1, num2;

            printf("Enter 1st number:");
            scanf("%d", &num1);
            printf("Enter 2nd number:");
            scanf("%d", &num2);

            if(num1>num2)
            {
                printf("1st number is greater.");
            }
            else
            {
                printf("2nd number is greater.");
            }
    }
*/

// -------------------------------------------------------------

/*LEAP YEAR

    int main()
    {
        int year;

        printf("Enter the year:");
        scanf("%d", &year);

        if(year%4 == 0)
        {
            printf("The given year is a leap year.");
        }
        else
        {
            printf("The given year is not a leap year.");
        }
}
*/

// ----------------------------------------------------------------


/*VOTING ELIGIBILITY CHECKER

    int main()
    {
        int age;

        printf("Enter your age:");
        scanf("%d",&age);

        if(age >= 18)
        {
            printf("You are eligible for voting.");
        }
        else
        {
            printf("You are not eligible for voting.");

        }
    }
*/

// -------------------------------------------------------------

/*ENTER WEEK NUMBER AND PRINT WEEDAY

    void main()
    {
        int num;

        printf("Enter week number(1-7): ");
        scanf("%d", &num);
        
        switch(num)
        {
        case 1:
                    printf("MONDAY");
            break;
        
        case 2:
                    printf("TUESDAY");
            break;

        case 3:
                    printf("WEDNESDAY");
            break;
        
        case 4:
                    printf("THURSDAY");
            break;

        case 5:
                    printf("FRIDAY");
            break;

        case 6:
                    printf("SATURDAY");
            break;

        case 7:
                    printf("SUNDAY");
            break; 


        default:
                    printf("INVALID!");
            
            break;
        }

    }
*/

// -----------------------------------------------------------


/*ENTER MONTH NUMBER AND 
    int main()
    {
        int num;

        printf("Enter month number:");
        scanf("%d", &num);

        switch(num)
        {
            case 1:
                    printf("JANUARY: 31 DAYS"); 
                break;
            case 2:
                    printf("FEBRUARY: 28 DAYS"); 
                break;
            case 3:
                    printf("MARCH: 31 DAYS"); 
                break;
            case 4:
                    printf("APRIL: 30 DAYS "); 
                break;
            case 5:
                    printf("MAY : 31 DAYS"); 
                break;
            case 6:
                    printf("JUNE : 30 DAYS"); 
                break;
            case 7:
                    printf("JULY: 31 DAYS"); 
                break;
            case 8:
                    printf("AUGUST: 31 DAYS"); 
                break;
            case 9:
                    printf("SEPTEMBER: 30 DAYS "); 
                break;
            case 10:
                    printf("OCTOBER: 31 DAYS"); 
                break;
            case 11:
                    printf("NOVEMBER: 30 DAYS"); 
                break;
            case 12:
                    printf("DECEMBER: 31 DAYS"); 
                break;

            
            default:
                    printf("INVALID!");
                    break;
        }
    }
*/

// ------------------------------------------------------------

/*LOOPS- REVERSE A GIVEN NUMBER 


    int main()
    {
        int i,num;

        printf("Enter the number: ");
        scanf("%d", &num);
        
        i=num;
        while (i>=1)
        {
            printf("%d\n", i);
            i--;
        }
        
}

*/

// ---------------------------------------------------------------

/*ENTER A NUMBER AND GET ALL THE EVEN NUMBERS BETWEEN THE GIVEN NUMBER

    int main()
    {
        int num, i;

        printf("Enter the number:");
        scanf("%d",&num);

        for(i=0; i<=num; i=i+2)
        {
          printf("%d\n", i);        
        }
        return 0;

}
*/

// -------------------------------------------------------------------

/*ACCEPT THREE NUMBERS AND FIND MAXIMUM NUMBER BETWEEN THEM

    int main()
    {
        int num, i, n, max;

        printf("Enter how many numbers do you want: ");
        scanf("%d", &num);

        printf("Enter the number: ");
        scanf("%d", &n);

        max = n;
        
        for(i=2; i<=num; i++)
        {
            printf("Enter the number: ");
            scanf("%d",&n);

            if(n>max)
            {
                max = num;
            }
        }
        printf("The maximum number is : %d", n);
  }
  */

// -------------------------------------------------------------------------------

/*ACCEPT THREE NUMBERS AND SHOW THE MINIMUM 


    int main()
    {
        int num, i, n, min;

        printf("Enter how many numbers do you want: ");
        scanf("%d", &num);

        printf("Enter the number: ");
        scanf("%d", &n);

        min = n;
        
        for(i=2; i<=num; i++)
        {
            printf("Enter the number: ");
            scanf("%d",&n);

            if(n>min)
            {
                min = n;
            }
        }
        printf("The minimum number is : %d", n);
  }
  */
// ----------------------------------------------------------------

/*Write a program in C to read 10 numbers from keyboard and find their sum and average

    int main()
    {

        int num, i,sum=0;
        float avg;

        printf("Input 10 numbers: \n");
        for(i=1; i<=10; i++)
        {
             printf("No.%d: ", i);
             scanf("%d", &num);
            
             sum = sum + num;
            
        }
         avg = sum/10.0;
        printf("The sum is : %d \n", sum);
        printf("The average is : %f", avg);

 }
 */

// -------------------------------------------------------------------

/*Write a program in C to display the cube of the number upto given an integer.

    int main()
    {
        int num, i;

        printf("Enter the number: ");
        scanf("%d", &num);

        for(i=1;i<=num;i++)
        {
            printf("The cube of %d is : %d \n", i, i*i*i);
        }
    }
*/

// ----------------------------------------------------------------------------

/*Write a program in C to display the multiplication table of a given integer.

    int main()
    {
        int num,mult, i; 

        printf("Enter the number: ");
        scanf("%d",&num);

        for(i=1; i<=10; i++)
        {
             mult = (i*num);
            printf("%d X %d =  %d\n", num,i, mult);
           
        }
}
*/

// --------------------------------------------------------------------------

/*Write a program in C to display the multiplication table vertically from 1 to n

    int main()
    {
        int num,j, i;

        printf("Input upto the table number starting from 1 : ");
        scanf("%d", &num);

        for(i=1; i<=num; i++)
        {
            for(j=1; j<=10; j++)
            {
                printf(" %d X %d = %d \n ",i,j,i*j);
            }

        }
}
*/
// ----------------------------------------------------------------------------

/* Write a program in C to display the n terms of odd natural number and their sum

    int main()
    {
        int num, i, sum = 0 ;

        printf("Enter the number: ");
        scanf("%d", &num);

        printf("The odd numbers are: ");
        for(i=1;i<=num;i++)
        { 
           printf("%d ", 2*i-1);
           sum = sum + 2*i-1;
        }
        printf("\nThe sum of odd numbers is :%d ", sum);

}
 */

// -------------------------------------------------------------------------------

/*Write a program in C to display the pattern like right angle triangle using an asterisk.*/


    int main()
    {
        int num, i, j;  

    
        for(i=1; i<=4;i++)
        {
            for(j=1; j<=i; j++)
            {
                printf("*");
                printf("\n ");
            }
        }
 }




























/*CHECK IF THE NUMBER IS ARMSTRONG OR NOT---( the sum of cubes of each digit is equal to the number itself. For example: 153 = 1*1*1 + 5*5*5 + 3*3*3 // 153 is an Armstrong number.)


    int main()
    {
        int i, num, sum=0;

        printf("Enter a number: ");
        scanf("%d", &num);
 
        printf("The sum of given number: \n");

        for(;i<=num; i++)
        {
            printf("%d",i);
            sum = sum + i;
        }
    printf("The sum is : %d", sum);

}
*/


    






