#include <stdio.h>

void factorial(){
    int a;
    printf("Enter a number : "); scanf("%d",&a);
    int fact=1;
    if(a!=0)
    {
        for(int i=1; i<a+1; i++)
        {        fact=fact*i;        }
    }
    else { fact=1;}
    printf("Factorial of %d is %d",a,fact);
}

void prime(){
    int a,flag=0;
    printf("Enter a number : "); scanf("%d",&a);
    int m = (a/2);
    for(int i=2;i<m;i++)
    {
        if (  a==0 ||  a==1 || a % i == 0)
        {            ++flag;        }
    }
    if(flag>0)
    {        printf("The number %d is not prime",a);    }
    else{ printf("The number %d is prime",a);	  }
}

void fibonacci(){
    int a=0,b=1;
    int c,fib;
    printf("Enter a number till where you want to generate the series: ");scanf("%d",&c);
    printf("%d, %d, ",a,b);
    for(int i=2; i<c; i++)
    {
        fib = a + b;
        printf("%d, ",fib);
        a = b;
        b = fib;
    }
}

int main(){
    printf("\nChoose Option To Perform : ");
    printf("\n1.Factorial");
    printf("\n2.Check prime");
    printf("\n3.Generate Fibonacci");
    printf("\n\nEnter Your Choice :");
    int choice;
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: factorial();
                break;
        case 2: prime();
                break;
        case 3: fibonacci();
                break;
        default: printf("Error");
    }
    return 0;
}
