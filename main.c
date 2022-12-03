#include <stdio.h>

int main(){

    int n , k , tmp , p;

    scanf("%d %d", &n , &k);
    int numbers[n];
    int sortedNumbers[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d" , &numbers[i]);
    }

    for (int j = 0; j < n; j++)
    {
        int p = (j + k) % n;
        sortedNumbers[p] = numbers[j];
    }
    
    


    for (int i2= 0; i2 < n; i2++)
    {
        printf("%d " , sortedNumbers[i2]);
    }
    

    

    return 0;
}