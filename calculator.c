#include <stdio.h>
#include <math.h>

int main(){
// init the 2 varibles
double n1,n2;
// read them
printf("Enter the 2 nums: ");
scanf("%lf  %lf" , &n1 , &n2);

// calculate the result
double res = pow(n1,n2);

// display the result
printf("Result : %lf \n" , res);

return 0;

}