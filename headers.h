struct node {int i; struct node *next; char *name;};
void print_list(struct node *);
struct node * insert_front(struct node *, int);
struct node * free_list(struct node *);
void printnode(struct node *);
struct node * remove_node(struct node *front, int data);
