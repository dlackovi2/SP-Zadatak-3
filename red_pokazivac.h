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

struct element
{
    pacijent elem;
    element *next;
};

struct red
{
    element *front, *rear;
};

typedef red Queue;
typedef element *Element;

void InitQ(Queue *Q)
{
    Q->front = new element;
    Q->front->next = NULL;
    Q->rear = Q->front;
}

pacijent FrontQ(Queue *Q)
{
    return (Q->front->next->elem);
}

void EnQueueQ(pacijent x, Queue *Q)
{
    Q->rear->next = new element;
    Q->rear = Q->rear->next;
    Q->rear->next = NULL;
    Q->rear->elem = x;
}

void DeQueueQ(Queue *Q)
{

    Element temp = Q->front;
    Q->front = temp->next;
    delete temp;
}

bool IsEmptyQ(Queue *Q)
{
    if(Q->front == Q->rear)
        return 1;
    else
        return 0;
}
