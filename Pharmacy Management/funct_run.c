#include "allibrc.h"

static int i, j;

int    funct_add(Prdcts_info Tab[MAX])
{
    int nb;
    int count;

    do
   {
        printf("\nHow much  product do you want to add: ");
        scanf("%d", &nb);
        if (nb > 100 || nb < 1)
        puts("Your number must be between 1 and 100 .");
   } while (nb > 100 || nb < 1);
   
   for (i = 0; i < nb; i++)
   {
        printf("Give the information of Product %d :\n\n", i+1);
        printf("Enter the Name of the product: ");
        scanf("%s", Tab[i].Name);
        printf("Enter the Code of the product: ");
        scanf("%s", Tab[i].Code);
        printf("Enter the Quantity of the product: ");
        scanf("%d", &Tab[i].Quantity);
        printf("Enter the Price of the product: ");
        scanf("%f", &Tab[i].Price);
        count++;
   }
   return (count);
}

void    funct_affiche(Prdcts_info Tab[MAX], int count)
{
    i = 0;

    while (i < count)
    {
        printf("\nName of the product: %s\n", Tab[i].Name);
        printf("Code of the product: %s\n", Tab[i].Code);
        printf("Quantity of the product: %d\n", Tab[i].Quantity);
        printf("Price of the product: %f\n", Tab[i].Price);
        i++;
    }
}

void    funct_Search(Prdcts_info Tab[MAX])
{
    int i, choice;
    char yr_code[20];
    int yr_quantity;
    int len = funct_strlen(Tab);

    puts("1) Search for products by Code");
    puts("2) Search for products by Quantity");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("\nEnter your code: ");
        scanf("%s", yr_code);

        for (i = 0; i < len; i++)
        {
            if (strcmp(Tab[i].Code, yr_code) == 0)
            {
                print_result_Search(Tab, i);
            }
        }
    }
    else if (choice == 2)
    {
        printf("\nEnter your quantite: ");
        scanf("%d", &yr_quantity);

        for (i = 0; i < len; i++)
        {
            if ( Tab[i].Quantity == yr_quantity)
            {
                print_result_Search(Tab, i);
            }
        }
    }
    else
        puts("This code does not exist");
}

int funct_remov(Prdcts_info Tab[MAX])
{
    int i;
    char c;
    char yr_code[20];
    int len = funct_strlen(Tab);

    printf("\nEnter the code of product that you want to delete: ");
    scanf("%s", yr_code);

    for (i = 0; i < len; i++)
    {
        if (strcmp(Tab[i].Code, yr_code) == 0)
        {
            print_result_Search(Tab, i);

            for (j = i; j < len; j++)
            {
                Tab[j] = Tab[j+1];
            }
            len--;
        }
    }
    puts("\nThis product is delete");
}

void    funct_remov_quantity(Prdcts_info Tab[MAX], char yr_code[20])
{
    int len = funct_strlen(Tab);

    for (i = 0; i < len; i++)
    {
        if (strcmp(Tab[i].Code, yr_code) == 0)
        {
            for (j = i; j < len; j++)
            {
                Tab[j] = Tab[j+1];
            }
            len--;
        }
    }
    puts("\nThis product is delete");
}
