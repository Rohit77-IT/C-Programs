# include <stdio.h>
# include <math.h>
int main()
{
    int count = 0,r,n, sum = 0;
    printf("Enter the number: ");
    scanf("%d",&n);
   int m=n;
   int p=n;
    while(n>0)
    {
        count++;
        n= n/10;
    }
    while(m>0)
    { r= m%10;
    sum = sum + pow(r,count);
m=m/10;
}
if(sum == p)
printf("Armstrong number");
else
printf("Not an armstrong number");
return 0;
}
