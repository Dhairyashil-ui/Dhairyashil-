#include <stdio.h>

void printFibonacci(int n) {
    int a = 0, b = 1, next;

        printf("Fibonacci Series: %d %d ", a, b);

            for (int i = 3; i <= n; i++) {
                    next = a + b;
                            printf("%d ", next);
                                    a = b;
                                            b = next;
                                                }
                                                    printf("\n");
                                                    }

                                                    int main() {
                                                        int n;

                                                            printf("Enter the number of terms: ");
                                                                scanf("%d", &n);

                                                                    if (n < 2) {
                                                                            printf("Number of terms should be at least 2.\n");
                                                                                } else {
                                                                                        printFibonacci(n);
                                                                                            }

                                                                                                return 0;
                                                                                                }
