#include <stdio.h>

int cal(int n, int m){
    if (n<m)
        return 0;
    else return (n-m)%2==0;
}

int main()
{
    int t; // Number of test cases
    int n,m;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        scanf("%d", &m);
        if (cal(n,m))
            printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}