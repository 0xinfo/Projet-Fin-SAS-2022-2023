#include "allibrc.h"

void    funct_Sort_list(Prdcts_info Tab[MAX], int count)
{
    Prdcts_info temp[count];

    for (int i = 0; i < count; i++)
    {
        for (int j = i+1; j < count; j++)
        {
            if (Tab[i].Code[0] > Tab[j].Code[0])
            {
                strcpy(temp[i].Code, Tab[i].Code);
                strcpy(Tab[i].Code, Tab[j].Code);
                strcpy(Tab[j].Code, temp[i].Code);

                strcpy(temp[i].Name, Tab[i].Name);
                strcpy(Tab[i].Name, Tab[j].Name);
                strcpy(Tab[j].Name, temp[i].Name);

                temp[i].Quantity = Tab[i].Quantity;
                Tab[i].Quantity = Tab[j].Quantity;
                Tab[j].Quantity = temp[i].Quantity;

                temp[i].Price = Tab[i].Price;
                Tab[i].Price = Tab[j].Price;
                Tab[j].Price = temp[i].Price;
            }
        }
    }
    funct_print_list(Tab, count);
}

void    funct_list_names(Prdcts_info Tab[MAX], int count)
{
    Prdcts_info temp[count];

    for (int i = 0; i < count; i++)
    {
        for (int j = i+1; j < count; j++)
        {
            if (Tab[i].Name[0] > Tab[j].Name[0])
            {
                strcpy(temp[i].Name, Tab[i].Name);
                strcpy(Tab[i].Name, Tab[j].Name);
                strcpy(Tab[j].Name, temp[i].Name);
            }
        }
    }
    print_list_names(Tab, count);
}

void    funct_list_price(Prdcts_info Tab[MAX], int count)
{
    Prdcts_info temp;

    int i, j;

    for (i = 0; i < count; i++)
    {
        for (j = i+1; j < count; j++)
        {
            if (Tab[i].Price < Tab[j].Price)
            {
                temp = Tab[j];
                Tab[j] = Tab[i];
                Tab[i] = temp;
            }
        }
    }
    prinf_list_price(Tab, count);
}
