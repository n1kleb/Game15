#include "ctest.h"
#include "function.h"

CTEST(check_win, correct_check_win)
{
    int arr[4][4];
    for(int i = 0; i < 4; i++)
        for(int j = 0; j < 4; j++)
            arr[i][j] = i * 4 + j + 1;
    bool result = checkWin(arr);
    ASSERT_TRUE(result);
}

CTEST(check_win, incorrect_check_win1)
{
    int arr[4][4];
    for(int i = 0; i < 4; i++)
        for(int j = 0; j < 4; j++)
            arr[i][j] = 0;
    bool result = checkWin(arr);
    ASSERT_FALSE(result);
}

CTEST(check_win, incorrect_check_win2)
{
    int arr[4][4];
    for(int i = 0; i < 4; i++)
        for(int j = 0; j < 4; j++)
            arr[i][j] = 3;
    bool result = checkWin(arr);
    ASSERT_FALSE(result);
}

CTEST(check_win, incorrect_check_win3)
{
    int arr[4][4];
    for(int i = 0; i < 4; i++)
        for(int j = 0; j < 4; j++)
            arr[i][j] = 10;
    bool result = checkWin(arr);
    ASSERT_FALSE(result);
}

CTEST(check_win, incorrect_check_win4)
{
    int arr[4][4];
    for(int i = 0; i < 4; i++)
        for(int j = 0; j < 4; j++)
            arr[i][j] = 16;
    bool result = checkWin(arr);
    ASSERT_FALSE(result);
}

CTEST(check_win, incorrect_check_win5)
{
    int arr[4][4];
    for(int i = 0; i < 4; i++)
        for(int j = 0; j < 4; j++)
            arr[i][j] = 100;
    bool result = checkWin(arr);
    ASSERT_FALSE(result);
}

CTEST(check_win, incorrect_check_win6)
{
    int arr[4][4];
    for(int i = 0; i < 4; i++)
        for(int j = 0; j < 4; j++)
            arr[i][j] = i;
    bool result = checkWin(arr);
    ASSERT_FALSE(result);
}

CTEST(check_win, incorrect_check_win7)
{
    int arr[4][4];
    for(int i = 0; i < 4; i++)
        for(int j = 0; j < 4; j++)
            arr[i][j] = j;
    bool result = checkWin(arr);
    ASSERT_FALSE(result);
}

CTEST(check_win, incorrect_check_win8)
{
    int arr[4][4];
    for(int i = 0; i < 4; i++)
        for(int j = 0; j < 4; j++)
            arr[i][j] = i + j;
    bool result = checkWin(arr);
    ASSERT_FALSE(result);
}

CTEST(check_win, incorrect_check_win9)
{
    int arr[4][4];
    for(int i = 0; i < 4; i++)
        for(int j = 0; j < 4; j++)
            arr[i][j] = i * 3 + j + 1;
    bool result = checkWin(arr);
    ASSERT_FALSE(result);
}