#include <stdio.h>
#include <stdlib.h>

void cal(int a[2][100], int d[100], int n)
{
    int final = a[0][0], temp[10];

    for(int i=0 ; i<n ; i++){
        temp[i] = a[1][i];

        if( i == 0 ){
            a[0][i] = a[0][i] + d[i];
        }
        else{
            a[0][i] = (a[0][i] - temp[i-1]) + a[1][i-1] + d[i]; 
        }

        if( (a[1][i] - a[0][i])%2 == 1 ){
            if( a[1][i] < a[0][i] + (a[1][i] - a[0][i] + 1)/2 + d[i] ){
                a[1][i] = a[0][i] + (a[1][i] - a[0][i] + 1)/2 + d[i];
            }
        }
        else{
            if( a[1][i] < a[0][i] + (a[1][i] - a[0][i])/2 + d[i] ){
                a[1][i] = a[0][i] + (a[1][i] - a[0][i])/2 + d[i];
            }
        }
    }
    printf("%d\n", a[0][n-1]);
}

int main()
{
    int t;

    scanf("%d", &t);

    for( int k=0 ; k<t ; k++ ){
        int a[2][100], n, d[100];

        scanf("%d", &n);

        for(int i=0 ; i<n ; i++){
            scanf("%d %d", &a[0][i], &a[1][i]);
        }

        for(int j=0 ; j<n ; j++){
            scanf("%d", &d[j]);
        }

        cal(a, d, n);
    }

    return 0;
}