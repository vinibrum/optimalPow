#include <stdio.h>
#include <math.h>

double optimalPow(double base, int exp){
    double result = 1.0;
    int aux = abs(exp);
    while (aux != 0){
            // aux & 1 -> aux % 2
        if(aux & 1){
            result *= base;
        }
        base *= base;
        aux /= 2;
    }
    return exp < 0 ? 1/result : result;
}

int main(){
    printf("2^3 = %lf\n", optimalPow(2, 3));
    printf("10^0 = %lf\n", optimalPow(10, 0));
    printf("10^10 = %lf\n", optimalPow(10, 10));
    printf("10^-2 = %lf\n", optimalPow(10, -2));
    return 0;
}
