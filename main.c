#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


int main()
{
    setlocale(LC_ALL, "Portuguese");

    float peso, altura, imc;

    printf("\t* Calcule seu IMC * \n");
    printf(" OBS: IMC (Índice de Massa Corporal)\n");
    printf(" Para o calculo do seu IMC precisa-se do seu peso e sua altura. \n");

    printf(" Digite sua altura: ");
    scanf("%f",&altura);

    printf("\n Digite agora seu peso: ");
    scanf("%f",&peso);

    imc = peso / (altura,pow(altura,2));

    printf("\n");

    printf(" Seu IMC %.2f \n",imc);

    if(imc < 18.5){
        printf(" Você está abaixo do peso.\n");
    }
    if(imc > 18.5 && imc < 25){
        printf(" Você está no peso normal.\n");
    }
    if(imc > 25 && imc < 30){
        printf(" Você está sobrepeso.\n");
    }
    if(imc > 30 && imc < 35){
        printf(" Você está com IMC de obesidade grau 1.\n");
    }
    if(imc > 35 && imc < 40){
        printf(" Você está com IMC de obesidade grau 2.\n");
    }
    if(imc >= 40){
        printf(" Você está com IMC de obesidade grau 3.\n");
    }

    printf("\n");

    printf("\tTabela de IMC.\n");
    printf("\n");
    printf(" Menor que 18,5 Abaixo do peso\n Entre 18,5 e menor que 25 Peso normal\n Entre 25 e menor que 30 Sobrepeso\n");
    printf(" Entre 30 e menor que 35 Obesidade grau 1\n Entre 35 e menor que 40 Obesidade grau 2\n Maior ou igual a 40 Obesidade grau 3 \n");


    return 0;
}
