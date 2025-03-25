# include <stdio.h>
int main() 
{
    double number;
    printf("Enter the number you want to check: ");
    scanf("%lf",&number);
    if(number<0){
    printf("The number is negative");
    }
else if (number>0)
{
printf("The number is positive");
}
else
{
printf("The number is 0");
    }
    return 0;
}