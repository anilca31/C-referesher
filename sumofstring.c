#include <stdio.h>

int sum_func(char x[])
{
int count, sum =0;

for (count = 0; x[count]!= '\0'; count++ )
{
    if ((x[count]>= '0') && (x[count] <='9')){
    sum += (x[count] - '0');
    }
}
return sum;
}

int main()
{
    char string[80];
    printf("Enter the string containing both digits and alphabet \n");
    scanf("%s", string);

/*
    for (count = 0; string[count] != '\0'; count++)
    {
        if ((string[count] >= '0') && (string[count] <= '9'))
        {
            nc += 1;
            sum += (string[count] - '0');
        }
    }
    printf("NO. of Digits in the string = %d\n", nc);
 */
    printf("Sum of all digits = %d\n", sum_func(string));
}
