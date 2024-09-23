//C_Exercis
#include <stdio.h>

    

    int main() {
    //Question 1
    int x=16-21%6*11%2+5*3%2;
  
    printf("the value is: %d", x);

    //Question 2
    
    int L=16;
    int l=92;
    
    int area=L*l;
    printf("The area of rectangle is: %d\n", area);
    
    //Question 3
    
    float A=12.3;
    float B=2.89;
    float C=8.34;
    float D=15.9;
    
    float sum=A+B+C+D;
    printf("%f\n %f\n %f\n %f\n", A,B,C,D);
    printf("the sum of all float numbers is: %f\n", sum);
    
    return 0;
}