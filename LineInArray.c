#include <stdio.h>
 
int main() {
 
    int row=12,  col=12, l;
    float m[row][col], sum = 0.0, avg = 0.0;
    char t;
    scanf("%d\n%c", &l, &t);
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++) {
            scanf("%f", &m[i][j]);
        }
    }
    for(int j = 0; j < col; j++) {
        sum += m[l][j];
    }
    if( t == 'S') {
        printf("%.1f\n", sum);
    } else {
        printf("%.1f\n", sum/col);
    }
 
    return 0;
}