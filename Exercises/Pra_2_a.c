#include <stdio.h>
int main(){
int num_1,num_2,num_3;
printf("Enter Number one: ");
scanf("%d", &num_1);

printf("\nEnter number two: ");
scanf("%d", &num_2);

printf("\nEnter Number three: ");
scanf("%d", &num_3);

printf("The Number one is:%d\n", num_1);
printf("The Number two is:%d\n", num_2);
printf("The Number three is:%d\n", num_3);

int avg= (num_1+num_2+num_3)/3;
printf("The Average of The Numbers is:%d""\n", avg);
if(avg>=18){
    if(avg<=20){
       printf("The Grade is: A");
    }

}
else if(avg>16 && avg<18){
    printf("The Grade is: B");
}
else{
    printf("The Grade is: C");
}

return 0;
}