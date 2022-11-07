#include "allibrc.h"

void    check_choice(int choice)
{
    Prdcts_info Tab[MAX];

    switch (choice)
    {
        case 1:
            int count = funct_add(Tab);
            break;
            
        case 2:
            funct_Search(Tab);
            break;
        
        case 3:
            funct_choice(Tab, count);
            break;
        
        case 4:
            Buy_product(Tab);
            break;
        
        case 5:
            funct_remov(Tab);
            break;
        
        case 6:
            View_stock_status(Tab);
            break;

        case 7:
            add_Stock(Tab);
            break;

        case 8:
            funct_for_Saleststic(Tab);
            break;

        case 9:
            funct_affiche(Tab, count);
            break;

        default: puts("Syntax error");
            break;
    }
}


void    funct_choice(Prdcts_info Tab[MAX], int count)
{
    int choice;

    puts("1) all Products in Stock. ");
    puts("2) Products in ascending alphabetical order. ");
    puts("3) Products in descending order of price. ");
    
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    check_yr_choice(Tab, choice, count);
}

void    check_yr_choice(Prdcts_info Tab[MAX], int choice, int count)
{
    switch (choice)
    {
        case 1:
            funct_Sort_list(Tab, count);
            break;
            
        case 2:
            funct_list_names(Tab, count);
            break;
        
        case 3:
            funct_list_price(Tab, count);
            break;

        default: puts("Syntax error");
        break;
    }
}
