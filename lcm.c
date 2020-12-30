#include<stdio.h>

int hcf (int a, int b);

//Recursion Function
int hcf (int a, int b)
{   if (b==1)
        {return b;}
    else
    {   if (a%b == 0)
        {return b;}
        else
        {return hcf(b,a%b);}
    }
}

int main()
{   int num1,num2,l,h;

    printf("Enter the Larger Numbers: ");
    scanf("%d", &num1);

    printf("Enter the Smaller Numbers: ");
    scanf("%d", &num2);

    printf("\nUsing the concept (HCF*LCM)=(num1*num2)\n");
    h = hcf(num1,num2);
    l = (num1*num2)/h;

    printf("\nThe HCF of %d and %d is: %d\n", num1, num2, h);
    printf("\nThe LCM of %d and %d is: %d\n", num1, num2, l);

    return 0;
}
