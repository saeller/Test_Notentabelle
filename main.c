#include <stdio.h>

int main(void) {
    float noten[10];
    float summe;
    for (int i=0;i < 10; i++) {
        printf("bitte geben Sie den %d.Notenwert ein\n",i+1);
        scanf("%f", &noten[i]);
        summe = summe + noten[i];

    }
    for(int i =0; i< 10;i++) {
        printf("%d. Note: %f\n",i +1, noten [i]);
    }
    printf("Summe aller Noten%f\n",summe);
    printf("Notendurchschnitt%f", summe/10);
    return 0;
}
