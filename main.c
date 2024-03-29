#include <stdio.h>

//TIRAR DÚVIDA COM PROFESSOR

int main(void) {
  int vetor_desor[] = {40,30,15,5,100,25,65,145}; //desorganizado
  int fim = 8, p , menor = 0, j, escolhido;


  for(int i = 1; i < fim; i++)
  {
    escolhido = vetor_desor[i];
    j = i-1;
    //Checa se o elemento adjacente da esquerda do escolhido é maior que o próprio
    while ((j >= 0) && (vetor_desor[j] > escolhido))
    {
      //move o elemento da esquerda para a direita 
      vetor_desor[j+1] = vetor_desor[j];
      j = j-1;
    }
    //Ajusta o elemento escolhido em sua posição correta
    vetor_desor[j+1] = escolhido;
  }

  for(int i = 0; i < fim ; i++)
    printf("[%d]: %d\n", i, vetor_desor[i]);
}