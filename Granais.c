#include <stdio.h>
 
int main() {
 
    int r=1, s1, s2, c=0, sr1=0, sr2=0, gr=0, e=0;
    while(r != 2) {
        if(r == 1) {
            scanf("%d%d\n%d", &s1, &s2, &r);
            printf("Novo grenal (1-sim 2-nao)\n");
            c++;
        }
        if(s1 == s2) {
            e++;
        } else if(s1>s2) {
            sr1++;
        } else {
            sr2++;
        }
    }
    
    printf("%d grenais\n", c);
    printf("Inter:%d\n", sr1);
    printf("Gremio:%d\n", sr2);
    printf("Empates:%d\n", e);
    printf("Inter venceu mais\n");
 
    return 0;
}