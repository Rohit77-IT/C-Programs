# include <stdio.h>
int a = 5,b=10;
void swap()

{
    
int temp;
temp = a;
a = b ;
b = temp;
}
int main()
{
    
printf("Before swapping a = %d , b = %d\n ",a,b);
swap();
printf("After swapping a = %d , b = %d\n",a,b);
return 0;
}