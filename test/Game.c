#include "Game.h"
#include<conio.h>
#include <stdio.h>
#include <dos.h>
void printfield(int field[][9])
{
    printf("\n+-----+-----+-----+\n");
    for (int i = 1; i < 10; ++i)
    {
        for (int j = 1; j < 10; ++j)
            printf("|%d", field[i - 1][j - 1]);
        printf("|\n");
        if (i % 3 == 0) printf("+-----+-----+-----+\n");
    }
}
void gamestarted()
{
    

    printf_s("Hello, player. U wanna start the game?\n Click Y/N for continue:");
    char c = _getch();
        if (c == 89 || c== 121)
        {
            system("cls");
        }
        else
        {
            printf_s("okay, bye");
            exit(666);
        }
}

void gamelogic(int field[][9], int solution[][9])
{
    while (1)
    {
        printf_s("Select the cell(1-9, 1-9) where you want to paste the value. For example: 5(row) 5(column)\n");
        int cell[2] = { 0 };
        int check = 0;
        scanf_s("%d %d", &cell[0], &cell[1]);
        printf_s("Enter the value: ");
        int value, errors = 0;
        scanf_s("%d", &value);
        if (value == 1234)
        {
            system("color 3");
            printf_s("cheatcode activated");
            exit(1);
        }
        if (field[cell[0] - 1][cell[1] - 1] == 0)
        {
            field[cell[0] - 1][cell[1] - 1] = value;
            system("cls");
        }
        else
        {
        
        system("cls");
        
        printf_s("this cell have a value");
        }
        
        
        
        if (field[cell[0] - 1][cell[1] - 1] != solution[cell[0] - 1][cell[1] - 1])
        {
            
           
            errors++;
            printf_s("ERROR VALUE, HE IS RESET FOR ZERO, RECHECK)");
            field[cell[0] - 1][cell[1] - 1] = 0;
            if (errors == 10)
            {
                printf_s("sorry you lost");
                exit(666);
            }
        }
        printfield(field);
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                if (field[i][j] != 0)
                    check++;
            }
        }
        if (check == 81) {
            printf_s("My congratulations, u closed this sudoku!!!\n");
            printf_s("Errors:");
            printf_s("%d", errors);
        }
    }
}

//int diffselection(int** viewsudoku)
//{
    /*int cycle = 1;
    char diff;
    while (cycle)
    {
        diff = 0;
    printf_s("choose the difficulty:\n1-very easy\n2-easy\n3-medium\n4-hard\n5-very hard\n6-impossible\n");
    diff = _getch();
    system("cls");
    switch (diff)
    {
    case '1':
    {
        int solution[9][9] = {
                      {0, 9, 0, 2, 0, 0, 0, 0, 0},
                      {0, 0, 0, 0, 1, 0, 9, 0, 8},
                      {6, 0, 8, 0, 0, 0, 7, 1, 0},
                      {0, 0, 0, 0, 8, 0, 0, 7, 0},
                      {3, 8, 0, 5, 6, 0, 0, 0, 0},
                      {2, 0, 9, 1, 0, 0, 0, 0, 5},
                      {0, 0, 0, 0, 2, 3, 0, 6, 0},
                      {4, 6, 2, 0, 5, 1, 8, 0, 3},
                      {8, 1, 0, 0, 4, 9, 5, 2, 7} };
         int viewsudoku1[9][9];
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                viewsudoku[i][j] = solution[i][j];
            }
        }
        
        return viewsudoku, viewsudoku;
    }
    case '2':
    {
        int solution[9][9] = {
                       {0, 0, 3, 6, 7, 0, 0, 0, 4},
                       {8, 0, 2, 0, 4, 0, 0, 0, 0},
                       {6, 9, 4, 0, 3, 0, 2, 5, 7},
                       {7, 0, 0, 0, 8, 0, 0, 0, 6},
                       {0, 0, 9, 1, 0, 0, 0, 0, 2},
                       {0, 0, 1, 0, 9, 0, 7, 0, 0},
                       {0, 0, 7, 0, 0, 0, 0, 0, 0},
                       {0, 5, 0, 0, 6, 3, 0, 0, 9},
                       {8, 1, 0, 0, 4, 9, 5, 2, 7} };
        int viewsudoku1[9][9];
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                viewsudoku[i][j] = solution[i][j];
            }
        }

        return viewsudoku, solution;
    }
    case '3':
    {
        int solution1[9][9] = {
                       {7, 0, 0, 9, 0, 2, 0, 8, 0},
                       {9, 0, 0, 0, 0, 1, 0, 0, 4},
                       {2, 0, 0, 0, 0, 0, 0, 0, 3},
                       {0, 0, 0, 3, 2, 0, 0, 0, 0},
                       {0, 6, 0, 0, 0, 8, 0, 0, 5},
                       {0, 1, 0, 0, 5, 0, 0, 3, 0},
                       {0, 0, 0, 0, 0, 0, 0, 0, 0},
                       {1, 0, 0, 0, 0, 5, 7, 0, 0},
                       {0, 4, 0, 0, 0, 9, 0, 0, 8} };
        int viewsudoku1[9][9];
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                viewsudoku[i][j] = solution1[i][j];
            }
        }

        return viewsudoku, solution1;
    }
    case '4':
    {
        int solution1[9][9] = {
                      {4, 7, 9, 0, 0, 0, 0, 0, 5},
                      {0, 0, 0, 0, 0, 0, 0, 0, 0},
                      {5, 0, 0, 7, 0, 0, 0, 0, 9},
                      {9, 0, 0, 0, 0, 0, 5, 6, 8},
                      {0, 0, 7, 0, 1, 5, 0, 0, 0},
                      {0, 0, 4, 0, 0, 3, 0, 9, 0},
                      {0, 0, 0, 8, 0, 1, 0, 0, 6},
                      {0, 2, 0, 0, 4, 0, 0, 0, 0},
                      {0, 0, 1, 0, 0, 0, 4, 7, 0} };
        int viewsudoku1[9][9];
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                viewsudoku[i][j] = solution1[i][j];
            }
        }

        return viewsudoku, solution1;
    }
    case '5':
    {
        int solution1[9][9] = {
                       {0, 0, 3, 0, 2, 9, 0, 0, 1},
                       {6, 0, 0, 1, 0, 0, 4, 0, 0},
                       {0, 0, 8, 3, 7, 0, 0, 0, 0},
                       {9, 0, 4, 0, 0, 0, 0, 0, 0},
                       {0, 6, 1, 0, 0, 0, 0, 5, 8},
                       {0, 0, 0, 0, 0, 2, 0, 0, 0},
                       {0, 5, 0, 0, 0, 0, 0, 6, 0},
                       {0, 0, 0, 8, 6, 0, 0, 4, 0},
                       {7, 0, 0, 0, 0, 0, 0, 0, 0} };
        int viewsudoku1[9][9];
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                viewsudoku[i][j] = solution1[i][j];
            }
        }

        return viewsudoku, solution;
    }
    case '6':
    {
        
       int viewsudoku[9][9] = {
                      {8, 0, 0, 0, 0, 0, 0, 0, 0},
                      {0, 0, 3, 6, 0, 0, 0, 0, 0},
                      {0, 7, 0, 0, 9, 0, 2, 0, 0},
                      {0, 5, 0, 0, 0, 7, 0, 0, 0},
                      {0, 0, 0, 0, 4, 5, 7, 0, 0},
                      {0, 0, 0, 1, 0, 0, 0, 3, 0},
                      {0, 0, 1, 0, 0, 0, 0, 6, 8},
                      {0, 0, 8, 5, 0, 0, 0, 1, 0},
                      {0, 9, 0, 0, 0, 0, 4, 0, 0} };
       
        return viewsudoku;
    }
    default:
    {
        printf_s("enter the correct difficulty!\n");
        break;
    }
    }
    } 
   
    }*/

   /* int duplicatefield(int viewsudoku[][9])
    {
        
        return 0;
    }*/

