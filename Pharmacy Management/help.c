#include "allibrc.h"

float max = 0;
float result;
float total = 0;
float average = 0;

int funct_strlen(Prdcts_info Tab[MAX])
{
    int i = 0;

    while (Tab[i].Name[0])
    {
        i++;
    }
    return (i);
}

void    View_stock_status(Prdcts_info Tab[MAX])
{
    int len = funct_strlen(Tab);

    if (len < 3)
        funct_print_list(Tab, len);
    else
        puts("There is no product less than 3");
}

void    Buy_product(Prdcts_info Tab[MAX])
{
    int i, j;
    float min = Tab[0].Price;
    char yr_code[20];
    int yr_Quantity;
    int len = funct_strlen(Tab);

    printf("Enter the code of the product you want to buy ");
    scanf("%s", yr_code);

    for (i = 0; i < len; i++)
    {
        if (strcmp(Tab[i].Code, yr_code) == 0)
        {
            printf("Enter the quantity to be purchased ");
            scanf("%d", &yr_Quantity);

            if (Tab[i].Quantity >= yr_Quantity)
            {
                Tab[i].Quantity = Tab[i].Quantity - yr_Quantity;
                
                max = max > Tab[i].Price ? max : Tab[i].Price;
                result =  min = min < Tab[i].Price ? min : Tab[i].Price;
                total += Tab[i].Price;
                average++;
                printf("average = %.2f\n", average);
                
                if (Tab[i].Quantity == 0)
                {
                    funct_remov_quantity(Tab, yr_code);
                }
                else
                    puts("Then sell the product");
            }
        }
    }
}


void    add_Stock(Prdcts_info Tab[MAX])
{
    char yr_code[20];
    int yr_quantity;
    int len = funct_strlen(Tab);

    printf("Enter the product code: ");
    scanf("%s", yr_code);

    for (int i = 0; i < len; i++)
    {
        if (strcmp(Tab[i].Code, yr_code) == 0)
        {
            printf("Enter the quantity you want to add: ");
            scanf("%d", &yr_quantity);

            Tab[i].Quantity += yr_quantity;
            
            print_result_Search(Tab, i);
        }
    }
}


void    funct_for_Saleststic(Prdcts_info Tab[MAX])
{
    printf("Total prices of products sold for the current day : %.2f\n", total);
    printf("Average price of products sold for the current today : %.2f\n", total / average);
    printf("Maximum prices for products sold for the current day : %.2f\n", max);
    printf("Minimum prices for products sold for the current today  = %.2f\n", result);
}
