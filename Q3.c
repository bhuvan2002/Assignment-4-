#include <stdio.h>

#define N 3

void transpose(int A[N][N]) {
  for (int i = 0; i < N; i++) {
    for (int j = i + 1; j < N; j++) {
      int temp = A[i][j];
      A[i][j] = A[j][i];
      A[j][i] = temp;
    }
  }
}

int main() {
  int A[N][N] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
  };

  transpose(A);

  printf("Modified matrix is:\n");
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      printf("%d ", A[i][j]);
    }
    printf("\n");
  }

  return 0;
}
