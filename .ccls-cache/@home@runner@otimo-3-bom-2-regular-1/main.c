#include <stdio.h>

int main(void) {
/*Cada espectador de um cinema respondeu a um questionário no qual constava sua idade e a sua opinião em relação ao filme: ótimo – 3, bom – 2, regular – 1. Faça um programa que receba a idade e a opinião de 15 espectadores e que calcule e mostre:

a) A média das idades das pessoas que responderam ótimo;
b) A quantidade de pessoas que respondeu regular;
c) A percentagem de pessoas que respondeu bom entre todos os espectadores analisados.*/

  //Entrada: idade e opinião
  int idade=0;
  int opiniao;
  int idade_otimo=0; // média de idade de quem respondeu ótimo
  int regular=0, bom=0, otimo=0;

  for(int i=0; i<15; i++){
  //1º PASSO: Receber informações
    printf("\nInforme idade: ");
    scanf("%d", &idade);
    printf("\n");
    printf(" ------------------ \n");
    printf("|   1 - REGULAR    |\n");
    printf("|   2 - BOM        |\n");
    printf("|   3 - ÓTIMO      |\n");
    printf(" ------------------ \n");
    do{ // Validação de informação 
    printf("Qual sua opinião em relação ao filme:\n");
    scanf("%d", &opiniao);
    } while(opiniao!=1 && opiniao!=2 && opiniao!=3); // fima da validação de informação
    
   if(opiniao==1)
      regular++; // contador para saber quantos respomderam regular
    else
      if(opiniao==2)
        bom++; // contador para saber quantos respomderam bom
      else
        if(opiniao==3)
          idade_otimo=idade_otimo+idade;
          otimo++; // contador para saber quantos respomderam ótimo
  }
  //2º PASSO: 
  //Saída:
  //a) A média das idades das pessoas que responderam ótimo;
    printf("\nMédia das idades das pessoas que responderam ótimo: %d", idade_otimo/15);
  //b) A quantidade de pessoas que respondeu regular;
    printf("\n\nQuantidade de pessoas que responderam regular: %d", regular);
  //c) A percentagem de pessoas que respondeu bom entre todos os espectadores analisados.
    printf("\n\nPorcentagem e pessoas que responderam bom: %.2f", (float) bom*100/15);

  //https://www.computersciencemaster.com.br/exercicios-lacos-de-repeticao/
}