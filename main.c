#include <stdio.h>
#include <stdlib.h>




int compare(const void *x_void, const void *y_void) {
    int x = *(const int *)x_void;
    int y = *(const int *)y_void;
    return y - x;
}

int main()
{
    int coin[] = {9, 6, 5, 1};
    int target = 19;

    int n = sizeof(coin) / sizeof(coin[0]);





    qsort(coin, n, sizeof(int), compare);

    int min_coin = 0;

    for (int i = 0; i < n; i++)
    {
        while (coin[i]<=target)
        {

            target = target - coin[i];
            min_coin++;
        }

    }

    printf("Remaining target(which should be always 0) = %d\n",target);

    if(target>0){
        printf("Not a valid amount for the coin");

    }
    else

    printf("Maximum Coins Needed: %d\n", min_coin);

    return 0;
}
