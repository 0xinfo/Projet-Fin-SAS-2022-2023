#ifndef ALLIBRC_H
# define ALLIBRC_H

#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#define MAX 100

typedef struct Products
{
    char Name[20];
    char Code[20];
    int Quantity;
    float Price;
    float Price_VAT;

}   Prdcts_info;

void    add_Stock(Prdcts_info Tab[MAX]);

void    check_choice(int choice);
void    check_yr_choice(Prdcts_info Tab[MAX], int choice, int count);

void    funct_affiche(Prdcts_info Tab[MAX], int count);
void    funct_choice(Prdcts_info Tab[MAX], int count);
void    funct_for_Saleststic(Prdcts_info Tab[MAX]);
void    funct_list_names(Prdcts_info Tab[MAX], int count);
void    funct_list_price(Prdcts_info Tab[MAX], int count);
void    funct_menu();
void    funct_Search(Prdcts_info Tab[MAX]);
void    funct_Sort_list(Prdcts_info Tab[MAX], int count);
void    funct_remov_quantity(Prdcts_info Tab[MAX], char yr_code[20]);
void    funct_print_list(Prdcts_info Tab[MAX], int count);

void    View_stock_status(Prdcts_info Tab[MAX]);

void    Buy_product(Prdcts_info Tab[MAX]);

void    print_list_names(Prdcts_info Tab[MAX], int count);
void    prinf_list_price(Prdcts_info Tab[MAX], int count);
void    print_result_Search(Prdcts_info Tab[MAX], int pos);

int     funct_add(Prdcts_info Tab[MAX]);
int     funct_strlen(Prdcts_info Tab[MAX]);
int     funct_remov(Prdcts_info Tab[MAX]);

#endif
