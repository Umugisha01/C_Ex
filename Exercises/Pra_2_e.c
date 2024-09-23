#include <stdio.h>
 
int main(){
    int i=0;
    
     while (i < 50) {  // Loop until i reaches 50
        i++;  // Increment i
        if (i % 2 == 0) {  // Check if i is divisible by 2
            printf("The Number is: %d\n", i);  // Print if true
        }
    }
    return 0;
}