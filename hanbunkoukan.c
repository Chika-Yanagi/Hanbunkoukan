#include <stdio.h>
#include <stdlib.h>

struct node{
    char element;
    struct node *next;
};

struct node *initlist() {
    struct node *n;
      n=(struct node*)malloc(sizeof(struct node));
      n->next=NULL;
    return n;
}

void insert(struct node *p, char x) {
    struct node *n; 
     n=p;
  
     while(n->next!=NULL){
      n=n->next;
      }
      n->next=(struct node*)malloc(sizeof(struct node));
      n->next->element=x;
      n->next->next=NULL;
   
}

void printlist(struct node *p) {
    p = p->next;
    while (p) {
        putchar(p->element);
        p = p->next;
    }
    putchar('\n');
}

void halfchange(struct node *p) {
  struct node *q = p;
  int n=0;
  while(q->next!=NULL){
  q = q->next;
  n++;
  }
  q->next = p->next;
  q = p;
  for(int i=0;i<n/2;i++){
  q = q->next;
  }
  p->next = q->next;
  q->next = NULL;
}
int main(int argc, char *argv[]) {
    struct node *list, *head;
    char *p;

    if (argc<2)
        exit(-1);

    list = initlist();
    p = argv[1];
    for (; *p; p++) {
        insert(list, *p);
    }

    halfchange(list);
    printlist(list);

    for (; list; ) {
        head = list;
        list = list->next;
        free(head);
    }
    return 0;
}


