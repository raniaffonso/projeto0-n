#include "tarefas.h"
#include <stdio.h>

int main ()
  int pos = 0;
  Tarefa tarefas[TOTAL];

  int opcao;
  do {
    printf("\nMenu principal\n");
    printf("1 - Criar tarefa\n");
    printf("2 - Deletar tarefas\n");
    printf("3 - Listar tarefa\n");
    printf("0 - Sair\n");
    printf("Entre com uma opção: ")
    int i = sacnf("%d", &opcao);
    printf("Opção escolhida: %d\n", opcao);
  } while (opcao != 0);
}