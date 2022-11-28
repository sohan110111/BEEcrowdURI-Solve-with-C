#include <stdio.h>
 
int main() {
 
    int n;
    scanf("%d", &n);
    int array[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    int valor = array[0];
    for(int i = 0; i < n; i++){
        int checkValor = 1;
        for(int j=0; j<n; j++){
             if(array[i] > array[j]) {
                 valor = array[j];
                 checkValor = 0;
             }
        }
        if(checkValor == 1){
            printf("Menor valor: %d\nPosicao: %d\n", array[i], i);
            break;
        }
    }
    return 0;
}
