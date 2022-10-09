#include <stdio.h>
#include<conio.h>
#include "sudokusolve.h"
#include "Game.h"

int main(void)
{

    gamestarted();
    
        char diff;
        printf_s("choose the difficulty:\n1-very easy\n2-easy\n3-medium\n4-hard\n5-very hard\n6-impossible\n");
        diff = getchar();
        system("cls");
        switch (diff)
        {
            /*case '1':
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

                return viewsudoku, solution;*/
        /*}*/
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

            break;
        }
        default:
        {
            printf_s("enter the correct difficulty!\n");
            break;
        }
        }
        
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                viewsudoku[i][j] = solution[i][j];
            }
        }


    /*duplicatefield(viewsudoku,solution);*/
    if (fillSudoku(solution, 0, 0))
    {
        printf_s("sudoku have a solution,u can start:\n");
    }
    else printf("\n\nNO SOLUTION\n\n");
    printfield(viewsudoku);
    gamelogic(viewsudoku, solution);
   
    _getch();
}