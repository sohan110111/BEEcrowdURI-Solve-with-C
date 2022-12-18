#include <stdio.h>

int main() {

  int row = 12, col = 12, l, k = 1;
  float m[row][col], sum = 0.0, forAvg = 0.0;
  char t;
  scanf("%c\n", &t);
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      scanf("%f", &m[i][j]);
    }
  }
  
  l = 11;
for(int i = 1; i < 11; i++) {
    if(i >= 7) {
        l++;
    }
    for( int j = l;j <= 11; j++) {
        sum += m[i][j];
        forAvg++;
    }
    
    if(i <= 6) {
        l--;
        if(l == 6) {
            l = 7;
        }
    }
}

  if (t == 'S') {
    printf("%.1f\n", sum);
  } else {
    printf("%.1f\n", sum / forAvg);
  }

  return 0;
}
