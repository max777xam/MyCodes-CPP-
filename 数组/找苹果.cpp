#include <bits/stdc++.h>
using namespace std;
int n, a[1000001], g, flag = -1;
int main()
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &g);
    for (int i = 1; i < n; i++)
    {
        if (a[i] == g)
        {
            flag = i;
            break;
        }
    }
    printf("%d\n", flag);
    return 0;
}