#include<stdio.h>
int find_factorial(int n);
 int main()
 {
   int num, fact;
   //Ask user for the input and store it in num
   printf("Enter any integer number:");
   scanf("%d",&num);    //5
   //Calling our user defined function
   fact =find_factorial(num);     //function call
   //Displaying factorial of input number
   printf("Factorial of %d is: %d\n",num, fact);
  // return 0;
 }
 int find_factorial(int n)
 {
   //Factorial of 0 is 1 
   if (n==0)
      return(1);  //return constant
   //Function calling itself: recursion
   return(n*find_factorial(n-1));
 }
 //return (5*find_factorial(4))    or 5*4!        return(5*24)= 120                   n*(n-1)   
//5!=n*n-1, 5*4*3*2*1=120
 //return (4*find_factorial(3))   or 4*3!   retuen(4*6)=24
 //return (3*find_factorial(2))  or 3*2!       //return 3*2  =6
 //return (2*find_factorial(1)) or 2*1!        ///return (2*1) =2
 //return (1*find_factorial(0)) or 1*0!        //   return 1*1=1
 //return 1
