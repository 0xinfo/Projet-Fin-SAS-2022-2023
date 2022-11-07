#include "allibrc.h"

static int i;

void    funct_menu()
{
    puts("\n\t************Main menu************\n");
    puts("1) Add multiple new products. ");
    puts("2) Search Products.");
    puts("3) List all products (Name, price, price + VAT). ");
    puts("4) Buy a product. ");
    puts("5) Delete products by Coded. ");
    puts("6) Stock status.");
    puts("7) Supply stock. ");
    puts("8) Sales statistics. ");
    puts("9) View all products. \n");
}

int main()
{
   Prdcts_info Tab[MAX]; 
   int nb, choice;
   char command[50];
   strcpy( command, "" );
   
   do
   {
        funct_menu();
        do
        {
            printf("Give your choice: ");
            scanf("%d", &choice);
            if (choice > 9 || choice < 1)
                printf("\nYour choice must be between 1 and 10 .\n");
        } while (choice > 9 || choice < 1);
        
        check_choice(choice);
   } while (choice != 9);

   return 0; 
}
