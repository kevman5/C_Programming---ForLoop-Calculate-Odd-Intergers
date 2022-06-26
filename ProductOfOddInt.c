#include <stdio.h>

int main(void)
{


int product;
product = 1;

for (int x=1;x<=15;x=x+2)
    {
        product = product * x;

    }

    printf("The product of Odd Integers from 1 - 15 are %d\n: ",product);


}
