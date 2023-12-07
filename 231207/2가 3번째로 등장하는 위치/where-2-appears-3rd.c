#include <stdio.h>

int main() {
    int n,j;
    int cnt=0, num=0;

    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        scanf("%d ",&j);
        num++;

        if(j == 2)
        {
            cnt++;
        }

        if(cnt == 3)
        {
            printf("%d",num);
            break;
        }

    }

    

    return 0;
}