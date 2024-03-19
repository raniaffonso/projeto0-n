#define TOTAL 100

tyedef struct Tarefa{
  inr prioridade;
  char descricao[300];
  char categoria[100];
} Tarefa;

int criarTarefa(Tarefa tarefas[], int pos);
int deletarTarefa(Tarefa tarefas[], int pos);
int listarTarefa(Tarefa tarefas[], int pos);
int salvarTarefa(Tarefa tarefas[],int total, int pos);
int carregarTarefa(Tarefa tarefas[],int total, int pos);