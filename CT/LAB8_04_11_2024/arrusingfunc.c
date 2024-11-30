 #include<stdio.h>
 int display(int marks[]);
 int main()
 {
  // float avg;
    int marks[5] = {99, 90, 96, 93, 95};
    display(marks);       // name of the array is passed as argument.   base address: array name it self is a base address or marks[0]
 }
 int display(int marks[])
 {
    int i;
 // sum = 0;
    //float avg;
    for (i = 0; i <= 4; i++) {
 printf("%d\t",marks[i]);
 //return marks; // not allowed
 }
 printf("\n");
 }
