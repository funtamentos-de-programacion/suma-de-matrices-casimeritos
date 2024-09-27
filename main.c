#include <stdio.h>
#define TAM 100

int main(){
  int a[TAM][TAM], b[TAM][TAM], c[TAM][TAM];
  int m, n, p, q;
  int i, j;

  do {
    printf("Ingresa las dimensiones de la primer matriz\n");
    scanf("%d %d", &m, &n);
    printf("Ingresa las dimensiones de la segunda matriz\n");
    scanf("%d %d", &p, &q);
  } while(m != p || n != q || m <= 0 || n <= 0 || p <= 0 || q <= 0);

  // Leer la primera matriz
  printf("Ingresa los elementos de la primera matriz:\n");
  for(i = 0; i < m; i++) {
    for(j = 0; j < n; j++) {
      scanf("%d", &a[i][j]);
    }
  }

  // TODO(1): Leer la segunda matriz
  printf("Ingresa los elementos de la segunda matriz:\n");
  for(i = 0; i < p; i++) {
    for(j = 0; j < q; j++) {
      scanf("%d", &b[i][j]);
    }
  }

  // TODO(2): Sumar las matrices
  for(i = 0; i < m; i++) {
    for(j = 0; j < n; j++) {
      c[i][j] = a[i][j] + b[i][j];
    }
  }

  // TODO(3): Mostrar la matriz resultante
  printf("La matriz resultante de la suma es:\n");
  for(i = 0; i < m; i++) {
    for(j = 0; j < n; j++) {
      printf("%d ", c[i][j]);
    }
    printf("\n");
  }

  return 0;
}