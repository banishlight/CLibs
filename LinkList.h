

typedef struct _node {
   void* item;
   struct _node* next;
   struct _node* prev;
} Node;



typedef struct list {
   int count;
   Node* current;
   Node* first;
   Node* last;
} LIST;



LIST* ListCreate();
int ListCount(LIST* list);
void* ListFirst(LIST* list);
void* ListLast(LIST* list);
void* ListNext(LIST* list);
void* ListPrev(LIST* list);
void* ListCurr(LIST* list);
int ListAdd(LIST* list, void* item);
int ListInsert(LIST* list, void* item);
int ListAppend(LIST* list, void* item); 
int ListPrepend(LIST* list, void* item);
void* ListRemove(LIST* list);
void ListConcat(LIST* list1, LIST* list2);
void ListFree(LIST* list, void* itemFree);
void* ListTrim(LIST* list);
void* ListSearch(LIST* list, void* comparator, void* comparatorArg);
