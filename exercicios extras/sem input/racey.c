//
// Este é um programa muito simples para jogar com tarefas.
//
// a ideia é imprimir uma das duas cadeias
//
//   Eu acho que carros de corrida são divertidos.
//   Eu acho que as corridas de carros são divertidas
//
//  Esta é uma condição de corrida, pois dependendo de como o
//  threads são agendadas, você receberá uma resposta diferente.
//  Não estamos escrevendo nenhuma variável.  Portanto, isso não é
//  uma corrida de dados e o programa é legal.
//

#include <stdio.h>
#include <omp.h>

int main()
{
   printf("I think");
   printf(" race");
   printf(" car");
   printf("s");
   printf(" are fun!\n");
}
