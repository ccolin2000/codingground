#include <stdio.h>


int main()
{
    printf("Enter three integers!\n");
int a, b, c;
//Get three sides as input

{scanf("%d %d %d", &a,&b,&c);
}
printf("a = %d, b = %d, c=%d ", a,b,c );

if (a==b)   //two sides equal
{ if ((a==c) || (b==c))  //check for a third side to see if equal
printf("\nEquilateral Triangle\n");
else
printf("\nIsosceles Triangle\n");
}
else    //a and b not equal
{ if ((a==c) || (b==c))
printf("\nIsosceles Triangle\n");
else 
printf("\nScalene Triangle\n");
}
    return 0;
}