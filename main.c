#include <stdio.h>
#include <locale.h>

int main() {
    double nota1;
    double nota2;
    double media;
    setlocale(LC_ALL, "Portuguese");
    wprintf(L"Digite a primeira nota\n");
    scanf("%lf", &nota1);
    wprintf(L"Digite a segunda nota\n");
    scanf("%lf", &nota2);
if(nota1>= 0 && nota1 <= 10 && nota2 >= 0 && nota2 <= 10){
    media = (nota1 + nota2)/2;
    wprintf(L"A média do aluno é %lf", media);
}else{
    wprintf(L"Erro. Informe uma nota entre 0 e 10");
}
    return 0;
}