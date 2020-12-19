/************************************************
 * @TITLE : 이항계수1
 * @LEVEL : Bronze 1
 * @DATE : 2020-12-19
 * @NUMBER : 11050
 * @URL : https://www.acmicpc.net/problem/11050
 * @TIME : 1sec
 * @MEMORY : 256MB
 * @TIME : 00:05 ~ 00:40
 ************************************************
*/
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int N, K;
    //scanf("%d%d", &N, &K);
    cin >> N >> K;
    int arr[N + 1][N + 1];
    for (int i = 0; i <= N; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || i == j)
                arr[i][j] = 1;
            else
            {
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
            }
        }
    }
    // for (int i = 0; i <= N; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout << '[' << arr[i][j] << ']';
    //     }
    //     cout << '\n';
    // }
    printf("%d", arr[N][K]);
    return 0;
}

/*
************************************************
* TEST INPUT 1
************************************************
5 2
************************************************
* TEST OUTPUT 1
************************************************
10
************************************************
*/

/********************************************************
 * @CATEGORY : 
 * @Hint : 이항계수는 dp 문제, (0, 0)은 없음
 * ******************************************************/