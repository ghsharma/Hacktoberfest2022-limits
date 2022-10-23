# calculator in c language.

#include<stdio.h>
void calculator();

int main()
{   
    char choice;
    int red,green,flag;

    printf("\n\n");
    printf("**_**_welcome to BASICAL__**_**");
    printf("\n\n");

    do
    {

        flag = red;
        calculator();

        

        printf("\n");
        printf("CALCULATE AGAIN ? : Y/N : ");
        scanf(" %c",&choice);

        if(choice == 'Y' || choice == 'y')
        {
            flag = green;
            printf("\n");
            printf("___HERE YOU GO !!___\n");
            printf("\n");
        }
        else
        {
            printf("**___BYE!!___**");
            printf("**__**__NICE HELPING YOU BUDDY!!__**__**\n");
        }

    } while (flag == green);

        return 0;
}

void calculator()
{
    char operator;
    float num1,num2; 

    printf("enter the first number : ");
    scanf("%f",&num1);
    printf("\n");

    printf("enter the operator ('+','-','*','/') : " );
    scanf(" %c",&operator);
    printf("\n");

    printf("enter the second number : ");
    scanf("%f",&num2);
    printf("\n");


    switch(operator)
    {
        case '+' : printf("  %.2f + %.2f = %.2f",num1,num2,num1+num2);
        break;

        case '-' : printf("  %.2f - %.2f = %.2f",num1,num2,num1-num2);
        break;

        case '*' : printf("  %.2f x %.2f = %.2f",num1,num2,num1*num2);
        break;

        case '/' : printf(" %.2f / %.2f = %.2f",num1,num2,num1/num2);
        break;

        default : printf("OOPS!!\n");
                    printf("INVALID OPERATOR .");
        break;

    }
}

        
    
