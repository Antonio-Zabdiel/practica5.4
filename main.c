#include<stdio.h>

int main(){
    int n = 0;
    int i = 0;
    float valores;
    /*var para los valores*/
    float v1 = 0;
    float v2 = 0;
    /**/
    double multiplicacion;

    printf("ingresa un numero para aproximar a pi: ");
    scanf("%d",&n);

    multiplicacion = 1.0;

    if(n != 0 && n > 0){
        while (n != 0)
        {
            
            printf("n: %d\t", n);
            v1 = 4*n*n;
            v2 = v1 - 1;
            valores = v1/v2; //ahora si me da el valor 
            
            multiplicacion *= valores;
            printf("%lf\n",multiplicacion);
            n--;
        }
        
        //printf("%f",multiplicacion);
    }

    return 0;
}