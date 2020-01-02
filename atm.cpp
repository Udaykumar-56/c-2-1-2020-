#include <stdio.h>
int main()
{
   int n,a,b=2500, pin;
   printf("enter PIN");
   scanf("%d",&pin);
   if (pin == 1234)
   {
   printf("Insert your card");
   printf("Select an option\n1. Deposit amount\n2. withdraw\n3. Show balance\n4. Exit\n");
   scanf("%d",&n);
   switch (n) {
            case 1:
                printf("Enter amount to be deposited ");
                scanf("%d",&a);
                printf("Current balance = %d",a+b);
                break;
            case 2:
                printf("withdraw ");
                scanf("%d",&a);
                if(b-a>500)
                {
                    printf("Current balance = %d",b-a);
                }
                else
                printf("Tranaction can't complete");
                break;
            case 3:
                printf("Current balance ");
                printf("%d",b);
                break;
            case 4:
                printf("Exit");
                break;
            default:
                printf("Out of range");
                break;
   }
   
   }
   else
   printf("Pin is incorrect");
}

