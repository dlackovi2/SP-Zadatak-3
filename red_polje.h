#include <iostream>
#define MAXLENGTH 1000
using namespace std;

struct pacijent
{
    int ai, bi, ci, di, ei;
    char ime[20];
    char prezime[20];
    int dan, mjesec, godina;
    char spol;
    char p_pacijent[30];
    char v_usluga[30];
    char v_ordinacija[30];
};

struct red
{
    pacijent polje[MAXLENGTH];
    int front, rear;
};

typedef int element;
typedef red Queue;

int AddOne(int n)
{
    return ((n+1) % MAXLENGTH);
}

void InitQ(Queue *Q)
{
    Q->front = 0;
    Q->rear = MAXLENGTH-1;
}

pacijent FrontQ(Queue *Q)
{
    return (Q->polje[Q->front]);
}

void EnQueueQ(pacijent x, Queue *Q)
{
    Q->rear = AddOne(Q->rear);
    Q->polje[Q->rear] = x;
}

void DeQueueQ(Queue *Q)
{
    Q->front = AddOne(Q->front);
}

bool IsEmptyQ(Queue *Q)
{
    if(AddOne(Q->rear) == Q->front)
        return 1;
    else
        return 0;
}
