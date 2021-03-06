/************************************************
 * @TITLE : ACM 호텔
 * @LEVEL : Bronze 3
 * @DATE : 2020-12-15
 * @NUMBER : 10250
 * @URL : https://www.acmicpc.net/problem/10250
 * @TIME : 1sec
 * @MEMORY : 256MB
 * @TIME : 11:48 ~ 11:57
 ************************************************
*/
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int H, W, N;
        cin >> H >> W >> N;
        int room = (N - 1) / H + 1;
        int floor = N % H == 0 ? H : N % H;
        cout << floor * 100 + room << '\n';
    }
    return 0;
}

/*
************************************************
* TEST INPUT 1
************************************************
2
6 12 10
30 50 72
************************************************
* TEST OUTPUT 1
************************************************
402
1203
************************************************
*/

/********************************************************
 * @CATEGORY : 
 * @Hint : 
 * ******************************************************/