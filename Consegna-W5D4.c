#include <stdio.h>
#define pigreco 3.1415
#define rad3 1.7320
//funzioni
double areaCerchio(double raggio);
double areaQuadrato (double lato);
double areaTriangoloEquilatero(double lato);
int main(){
//inserire i dati
    double valore = 0;
    printf("Inserisci un numero: \n");
    scanf("%lf", &valore);
//calcoli
    printf("l'area del quadrato è : \n");
    printf("%lf", areaQuadrato(valore));

    printf("l'area del cerchio è : \n");
    printf("%lf", areaCerchio(valore));

    printf("l'area del triangolo equilatero è : \n");
    printf("%lf", areaTriangoloEquilatero(valore));
}
//descrivi le funzioni

//areaQuadrato (double lato)
//area lato * lato
//return area

//areaCerchio (double raggio)
//area = raggio * raggio * pigrego
//return area

//areaTriangoloEquilatero (double lato)
//area = base * altezza / 2
//return area

double areaCerchio(double raggio){
    double area = 0;
    area = raggio * raggio * pigreco;
    return area;
};

double areaQuadrato (double lato){
    double area = 0;
    area = lato * lato;
    return area;
}

double areaTriangoloEquilatero(double lato){
    double area = 0;
    double altezza = (lato * rad3)/2;
    area = (lato * altezza)/2;
    return area;
};