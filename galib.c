#include <stdio.h>
#include <stdlib.h>



int printBankPlan(char bank)
{
    int cmd;
    if(bank == 'A')
    {
        printf("\n1. 2 interest rate for 1 year");
        printf("\n2. 4 interest rate for <= 5 year");
        printf("\n3. 6.5 interest rate for <= 10 year");
        printf("\n4. 8 interest rate for > 10 year\n");



        scanf("%d",&cmd);
        return cmd;
    }
    else if(bank == 'B')
    {
        printf("\n1. 1 interest rate for 1 year");
        printf("\n2. 2.5 interest rate for <= 4 year");
        printf("\n3. 5.5 interest rate for <= 7 year");
        printf("\n4. 9 interest rate for > 10 year\n");



        scanf("%d",&cmd);
        return cmd;



    }
    else
    {
            printf("Invalid input");
            return -1;
    }



}



void calculate(float balance, float interest)
{
    float intr = (balance*interest)/100;
    float total = intr+balance;



    printf("After 1 year at %f % rate - ",interest);
    printf("\n     your total interest : %f",intr);
    printf("\n     your total amount : %f",total);
}



int main()
{
    float balance;
    char bank;





    printf("Choose between bank A and B : ");
    scanf("%c",&bank);



    printf("\nDeposit: ");
    scanf("%f",&balance);



    if(balance < 20000)
    {
        return 0;
    }



    printf("\nChoose a plan : ");



   int r = printBankPlan(bank);
   if(r == -1)
   {
       return 0;
   }



   if(bank == 'A')
   {
       switch(r)
       {
        case 1:
        calculate(balance,2.0);
        break;



        case 2:
        calculate(balance,4.0);
        break;



        case 3:
        calculate(balance,6.5);
        break;



        case 4:
        calculate(balance,8.0);
        break;
       }
   }
   else if(bank == 'B')
   {
       switch(r)
       {
        case 1:
        calculate(balance,1.0);
        break;



        case 2:
        calculate(balance,2.5);
        break;



        case 3:
        calculate(balance,5.5);
        break;



        case 4:
        calculate(balance,9);
        break;
       }
   }




    return 0;
}
