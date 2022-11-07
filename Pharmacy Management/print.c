#include "allibrc.h"

void    funct_print_list(Prdcts_info Tab[MAX], int count)
{
    int i = 0;

    while (i < count)
    {
        printf("\nThis is Product a number %d :\n", i+1);
        printf("\nName of the product: %s\n", Tab[i].Name);
        printf("Code of the product: %s\n", Tab[i].Code);
        printf("Quantity of the product: %d\n", Tab[i].Quantity);
        printf("Price of the product: %.2f\n", Tab[i].Price);
        i++;
    }
}

void    print_list_names(Prdcts_info Tab[MAX], int count)
{
    int i;

    for (i = 0; i < count; i++)
    {
        printf("\nThis is Product a number %d :\n\n", i+1);
        printf("Name of the product: %s\n", Tab[i].Name);
        printf("Code of the product: %s\n", Tab[i].Code);
        printf("Quantity of the product: %d\n", Tab[i].Quantity);
        printf("Price of the product: %.2f\n", Tab[i].Price);
    }
}


void    prinf_list_price(Prdcts_info Tab[MAX], int count)
{
    int i;

    for (i = 0; i < count; i++)
    {
        printf("\nThis is Product a number %d :\n\n", i+1);
        printf("Name of the product: %s\n", Tab[i].Name);
        printf("Code of the product: %s\n", Tab[i].Code);
        printf("Quantity of the product: %d\n", Tab[i].Quantity);
        printf("Price of the product: %.2f\n", Tab[i].Price);
    }
}

void    print_result_Search(Prdcts_info Tab[MAX], int pos)
{
    printf("Name of the product: %s\n", Tab[pos].Name);
    printf("Code of the product: %s\n", Tab[pos].Code);
    printf("Quantity of the product: %d\n", Tab[pos].Quantity);
    printf("Price of the product: %.2f\n", Tab[pos].Price);
}
