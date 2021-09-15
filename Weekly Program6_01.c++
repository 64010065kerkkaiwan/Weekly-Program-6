#include<stdio.h>

float sqrt(int number)
{
    float temp,s ;
    

    s = number / 2;
    temp = 0;

    while(s != temp){

        temp = s;
        s = ( number/temp + temp) / 2;
    }
    printf("Square roots are %f and -%f", s, s);
}

int main()
{
    int number;

    printf("Enter the number: \n");

    scanf("%d", &number);
    if (number >= 0)
    {
        sqrt(number) ;
    }
    else{
        printf("ERROR");
    }
    
}
