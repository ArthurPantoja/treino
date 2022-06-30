#include <stdio.h>
#include <stdlib.h>

int main(){
int vet[10], vet2[5], i;

for ( i = 0; i < 5; i++){
    printf("Digite o valor da posição %d: ", i);
    scanf("%d", &vet[i]);
}
for(i = 0; i < 5; i++){
    vet2[i] = vet[i] * vet[i];
}
/*for(i = 0; i < 5; i++){
    if vet[i] > vet2[i];
}*/
printf("\n");
for(i = 0; i < 10;i++){
    printf("%d ", vet2[i]);
    printf("\n\n");
}
    return 0;
}
