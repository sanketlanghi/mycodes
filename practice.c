#include <stdio.h>
// //
// // int main(){
// //
// //    int  length, breadth;
// //
// //    printf("Enter the length: ");
// //    scanf("%d", &length);
// //    printf("Enter the breadth: ");
// //    scanf("%d", &breadth);
// //
// //
// //    area = length*breadth;
// //    perimeter = 2*(length+breadth);
// //
// //    printf("Area of rectangle is %d", area);
// //    printf("Perimeter of rectangle is %d", perimeter);
// //
// //
// // }
//
//
//
//
//
// #include<stdio.h>
//
// int main(){
//
//  int cel, fahr;
//
//  printf("Enter celcius:");
//  scanf("%d",&cel);
//
// fahr = (cel*9/5)+32;
//
// printf("The temperature in celcius is : %d", fahr);
//
//
//
// }

//
// int main(){
//  
//   int i;
// printf("First 10 natural numbers: \n");
//   for(i=1;i<=10;i++){
//
//           printf("%d \n",i);
//   }
//
// }

// SUM OF GIVEN NATURAL NUMBERS
//
// int main(){
//
//       int i, sum = 0, num;
//
//       printf("Enter a number:");
//       scanf("%d", &num);
//
//       printf("The first %d nautral numbers: \n", num);
//
//       for(i=1;i<=num;i++){
//          printf("%d \n",i);
//          sum = sum + i;
//       }
//
//       printf("The sum is %d", sum);
// }

// int main(){
//       int i, n;
//       printf("Enter a number: ");
//       scanf("%d", &n);
//
//       for(i=n; i; i--){
//         printf("%d \n", i);
//       }
// }

//
// ********************EVEN NUMBER
// int main(){
//
//  int i, n;
//
//  printf("Enter the number:");
//  scanf("%d", &n);
//
//
//  for(i=0; i<=n; i=i+2){
//             printf("%d \n", i);
//           }
// }

// ****************ODD NUMBER******************

// int main(){
//
//       int i, n;
//
//       printf("Enter a number:");
//       scanf("%d", &n);
//
//       for(i=1; i<=n; i=i+2){
//         printf("%d \n",i);
//       }
// }

//
/***************************LOWER AND UPPER VALUE
int main(){
    int i, lower, upper;

      printf("Enter the lower integer:");
      scanf("%d", &lower);

      printf("Enter the upper integer:");
      scanf("%d", &upper);

      if(lower <= upper){
          printf("Numbers between %d and %d are:", lower, upper);
              for(i=lower; i<=upper; i++){
                    printf("%d ", i);
              }
        } else {
           printf("Given input is invalid!");
        }
}

//
// **********************************LOWER AND UPPER VALUE EVEN NUMBERS
// int main(){
//     int i, lower, upper;
//
//       printf("Enter the lower integer:");
//       scanf("%d", &lower);
//
//       printf("Enter the upper integer:");
//       scanf("%d", &upper);
//
//       for(i=lower; i<=upper; i=i+2){
//         printf("%d \n", i);
//       }
// }


//
/* ************************** LOWER AND UPPER VALUE ODD NUMBERS
int main(){
    int i, lower, upper;

      printf("Enter the lower integer:");
      scanf("%d", &lower);

      printf("Enter the upper integer:");
      scanf("%d", &upper);

     if(lower <= upper){
         for(i=lower+1; i<=upper; i=i+2){
     printf("%d \n", i);
       }
    } else {
       printf("Given input is invalid");
    }
}*/
//
//
// int main(){
//
//           int i, n, num, sum ;
//
//           printf("How many numbers do you want to enter:");
//           scanf("%d", &n);
//
//           sum = 0;
//           for(i=1; i<=n; i++){
//             printf("Enter number:");
//             scanf("%d", &num);
//           }
//             if(num%2==0){
//               printf(" Even numbers : %d \n",num);
//             } else if(num%2!=0){
//               printf(" Odd numbers: %d \n", num);
//             }
//
// }

/********************PERFECT NUMBER

int main(){

  int i, n, ans;

  printf("Enter the value of n: ");
  scanf("%d", &n);

  ans = 0;

  for(i=1; i<n; i++)
  {

     if(n%i == 0)
     {
       ans = ans + i;
     }

  }

  if(ans == n)
  {
    printf("%d, is a perfect number", n);
  }
  else
  {
    printf("%d is not a perfect number", n);
  }

}*/

/* PRINT SUM AND AVERAGE OF THE GIVEN NUMBERS

int main(){

    float i, n, sum = 0, avg;

    printf("Input 10 numbers\n");

    for(i=1; i<=10; i++)
    {
      printf("number %.0f:",i);
      scanf("%f", &n);
      sum = sum + i;
    }
    avg = sum / 10;
    printf("The sum is: %.0f \n", sum);
    printf("The average is %.3f \n", avg);
}
*/

/* INPUT NUMBERS AND PRINT THE NUMBERS AND ITS CUBE

int main()
{
      int i, n, cube;
      printf("Enter the value of n: ");
      scanf("%d", &n);

      for(i=1; i<=n; i++)
      {
        cube = (i*i*i);
        printf("Number: %d, The cube is: %d \n", i, cube);
      }
}*/

/* MULTIPLICATION TABLE  OF A GIVEN NUMBER
int main()
{
  int multi,i,n;
  printf("Enter the integer: \n ");
  scanf("%d", &n);

  printf("Multiplication table of %d \n", n);
  for(i=1; i<=10; i++)
  {
      printf("%d X %d =  %d \n", n,i, n*i);
  }
}*/

/* MULTIPLICATION TABLE OF EVERY NUMBER BETWEEN GIVEN NUMBER

  int main()
  {
      int i,j,n;
      printf("Enter the value upto number starting from 1: ");
      scanf("%d", &n);

      for(i=1; i<=n; i++)
      {
          for(j=1;j<=10; j++)
          {
            printf(" %d X %d = %d\n ",i,j,j*i);
          }
      }
  }*/
   
/* to display the n terms of odd natural number and their sum . 

void main()
{
  int i, n, sum = 0;

  printf("Input number of terms : ");
  scanf("%d", &n);
  printf("\nThe odd numbers are :");
  for (i = 1; i <= n; i++)
  {
    printf("%d ", 2 * i - 1);
    sum = sum +2 * i - 1; 
  }
  printf("\nThe Sum of odd Natural Number upto %d terms : %d \n", n, sum);
}*/


/* to display the pattern like right angle triangle using an asterisk.

int main()
{
   int i,n,j;


   for(i=1; i<=4; i++)
   {
      for(j=1; j<=i; j++)
      {
        printf("*");
      }
   }
}*/


