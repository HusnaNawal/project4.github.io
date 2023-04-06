#include <stdio.h>
#include <ctype.h>
#include <windows.h>     //header
#include <unistd.h>
#define TRUE 1
#define FALSE 0

void menu();
void order();         //function declaration
void chocolate();
void almond();
void traditional();

int ch;
int cookies;
int quantity;       // global Variable
int choice;
double totalPrice;


void main()
{
    menu();

}

void menu()    // function definition     // main menu
{
    system("cls");
    int ch;

    printf("\n\n\t\t RAYA COOKIES BY UNANA\t\t \n");
    printf("\n\t\t ######################\t\t\n");
    printf("\n\t\tWelcome to our online cookies store!\t\t\n");
    printf("\n");
    printf(" \n\n\tAre you ready to make purchase? [1 = yes || 0 = no] :");
    scanf("%d", &ch);
    system("cls");

    if(ch==1)
    {
        order();
    }

    else
        {
            printf("\n Take your time and make an order whenever you are ready\n\n");
            printf("\n\n");
            printf("\n\nPress any key to continue");
            getch();

            menu();

        }


}

void order()                                     // function definition
{
    int choice=TRUE;
    char purchase;

    while(choice==TRUE)
    {
        system("cls");
        printf("\n\t\t\t\tMENU\n");
        printf("\t\t\t\t+===+\n");
        printf("\n");
        printf("\n\t\t[A] - Chocolate Series");
        printf("\n\t\t[B] - Almond Series");
        printf("\n\t\t[C] - Traditional Series");
        printf("\n\t\t[X] - Back to menu");
        printf("\n\t\t[Z] - Exit\n");
        printf("\n\n");
        printf( "\nEnter your choice :");
        scanf("%c",&purchase);
        fflush(stdin);
        printf("\n");
        purchase=toupper(purchase);
        system("cls");

        switch(purchase)
        {
            case 'A':chocolate();break;
            case 'B':almond();break;              // call the  function
            case 'C':traditional();break;
            case 'X':menu();break;
            case 'Z':choice=FALSE;break;

            default: printf("\n Please enter only one of above choices");
        }
    }

}


void chocolate()           //function definition
{
    int cookies =0; 
    int quantity= 0;
    double totalPrice;


    system("cls");
    fflush(stdin);
    printf("           \n\t\t CHOCOLATE SERIES COOKIES\t\t\n");
    printf("           \n\t\t +==========================+\t\t\n");
    printf("\n\n");
    printf("\n\t\t [1] - Chocolate Chip [Price = 15.00]");
    printf("\n\t\t [2] - Cocoa Explosion [Price = 20.00]");
    printf("\n\t\t [3] - Cookie Bliss [Price = 20.00]");
    printf("\n\t\t [4] - Chocolate Chimp [Price = 25.00]");
    printf("\n\t\t [5] - Choco Chunky [Price = 25.00]");
    printf("\n\t\t [6] - Butter Cocoa [Price = 25.00]");
    printf("\n\t\t [7] - Chocotastic [Price = 30.00]");
    printf("\n\t\t [8] - Chocolate Chip Tales [Price = 35.00]");
    printf("\n\t\t [9] - Polka Cookie [Price = 35.00]");
    printf("\n\t\t [10] - Chip Joy [Price = 40.00]");
    printf("\n\n");
    printf("\nEnter your choice :");
    scanf("%d", &cookies);
    fflush(stdin);

    if( cookies == 1)

    {



        printf( " How many do you want buy?:");
        scanf(" %d",&quantity);
        totalPrice = 15.00 * quantity;
        printf("\n Total Price : RM%.2f ", totalPrice);
        sleep(10);


    }

    else if(cookies ==2)
    {
        printf( " How many do you want buy? :");
        scanf(" %d",&quantity);
        totalPrice = 20.00 * quantity;
        printf("\n Total Price :RM%.2f ", totalPrice);
        sleep(10);




    }
    else if (cookies==3)
    {
        printf( " How many do you want buy? :");
        scanf("%d",&quantity);
        totalPrice = 20.00 * quantity;
        printf("\n Total Price :RM%.2f", totalPrice);
        sleep(10);


    }
    else if(cookies==4)
    {
        printf( " How many do you want buy? :");
        scanf("%d",&quantity);
        totalPrice = 25.00 * quantity;
        printf("\n Total Price :RM%.2f", totalPrice);
        sleep(10);


    }
    else if(cookies==5)
    {
        printf( " How many do you want buy? :");
        scanf("%d",&quantity);
        totalPrice = 25.00 * quantity;
        printf("\n Total Price :RM%.2f", totalPrice);
        sleep(10);



    }
    else if(cookies==6)
    {
        printf( " How many do you want buy? :");
        scanf("%d",&quantity);
        totalPrice = 25.00 * quantity;
        printf("\n Total Price :RM%.2f", totalPrice);
        sleep(10);




    }
    else if(cookies==7)
    {
         printf( " How many do you want buy? :");
         scanf(" %d", &quantity);
         totalPrice = 30.00 * quantity;
         printf("\n Total Price :RM%.2f", totalPrice);
         sleep(10);


    }
    else if(cookies==8)
    {
        printf( " How many do you want buy? :");
        scanf(" %d", &quantity);
        totalPrice = 35.00 * quantity;
        printf("\n Total Price :RM%.2f", totalPrice);
        sleep(10);



    }
    else if(cookies==9)
    {
        printf( " How many do you want buy? :");
        scanf(" %d", &quantity);
        totalPrice = 35.00 * quantity;
        printf("\n Total Price :RM%.2f", totalPrice);
        sleep(10);




    }
    else if(cookies==10)
    {
        printf( " How many do you want buy? :");
        scanf(" %d", &quantity);
        totalPrice = 40.00 * quantity;
        printf("\n Total Price :RM%.2f", totalPrice);
        sleep(10);


    }
    else
        {
            printf("\n Please enter only one of above choices\n");
            printf("\n\nPress any key to continue");
            getch();

        }
    }



void almond()                  //function defintion
{
    int cookies=0;
    int quantity=0;
    double totalPrice;


    system("cls");
    fflush(stdin);
    printf("\n\t\t ALMOND SERIES COOKIES\t\t\n");
    printf("\n\t\t +==========================\t\t\n");
    printf("\n\n");
    printf("\n\t\t [1] - Almond Snowy [Price = 15.00]");
    printf("\n\t\t [2] - Almond Sugar Cookies [Price = 20.00]");
    printf("\n\t\t [3] - Almond Flour Thumbprint Cookies [Price = 20.00]");
    printf("\n\t\t [4] - Almond Chocolate chip [Price = 25.00]");
    printf("\n\t\t [5] - Almond Butter Cookies [Price = 25.00]");
   
    printf("\n\n");
    printf("\nEnter your choice :");
    scanf("%d", &cookies);
    fflush(stdin);

    if( cookies == 1)

    {



        printf( " How many do you want buy? :");
        scanf(" %d", &quantity);
        totalPrice = 15.00 * quantity;
        printf("\n Total Price :RM %.2f ",totalPrice);
        sleep(10);


    }

    else if(cookies ==2)
    {
        printf( " How many do you want buy? :");
        scanf(" %d", &quantity);
        totalPrice = 20.00 * quantity;
        printf("\n Total Price :RM%.2f ",totalPrice);
        sleep(10);




    }
    else if (cookies==3)
    {
        printf( " How many do you want buy? :");
        scanf("%d", &quantity);
        totalPrice = 20.00 * quantity;
        printf("\n Total Price :RM%.2f",totalPrice);
        sleep(10);


    }
    else if(cookies==4)
    {
        printf( " How many do you want buy? :");
        scanf("%d", &quantity);
        totalPrice = 25.00 * quantity;
        printf("\n Total Price :RM%.2f",totalPrice);
        sleep(10);


    }
    else if(cookies==5)
    {
        printf( " How many do you want buy? :");
        scanf(" %d", &quantity);
        totalPrice = 25.00 * quantity;
        printf("\n Total Price :RM%.2f",totalPrice);
        sleep(10);



    }
   
    else
        {
            printf("\n Please enter only one of above choices\n");
            printf("\n\nPress any key to continue");
            getch();

        }

}

void traditional()           //function definition
{
    int cookies=0; 
    int quantity=0;
    double totalPrice;

    system("cls");
    fflush(stdin);
    printf("\n\t\t TRADITIONAL SERIES COOKIES\t\t\n");
    printf("\n\t\t +==========================+\t\t\n");
     printf("\n\n");
    printf("\n\t\t [1] - Baulu  [Price = 15.00]");
    printf("\n\t\t [2] - Baulu Gulung [Price = 20.00]");
    printf("\n\t\t [3] - Semperit [Price = 20.00]");
    printf("\n\t\t [4] - Tempeyek Kacang & Ikan Bilis [Price = 15.00]");
   
    printf("\n\n");
    printf("\nEnter your choice :");
    scanf("%d", &cookies);
    fflush(stdin);

    if( cookies == 1)

    {



        printf( " How many do you want buy? :");
        scanf(" %d", &quantity);
        totalPrice = 15.00 * quantity;
        printf("\n Total Price :RM %.2f ",totalPrice);
        sleep(10);


    }

    else if(cookies ==2)
    {
        printf( " How many do you want buy? :");
        scanf(" %d", &quantity);
        totalPrice = 20.00 * quantity;
        printf("\n Total Price :RM%.2f ",totalPrice);
        sleep(10);




    }
    else if (cookies==3)
    {
        printf( " How many do you want buy? :");
        scanf("%d", &quantity);
        totalPrice = 20.00 * quantity;
        printf("\n Total Price :RM%.2f",totalPrice);
        sleep(10);


    }
    else if(cookies==4)
    {
        printf( " How many do you want buy? :");
        scanf(" %d", &quantity);
        totalPrice = 15.00 * quantity;
        printf("\n Total Price :RM%.2f",totalPrice);
        sleep(10);


    }
     else
        {
            printf("\n Please enter only one of above choices\n");
            printf("\n\nPress any key to continue");
            getch();

        }



}
