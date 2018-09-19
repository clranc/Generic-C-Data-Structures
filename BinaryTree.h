
typedef void *node_val;

typedef struct tree_node_struct
{
    void *node_val;
    tree_node *left_node;
    tree_node *right_node;
}tree_node;

typedef struct tree_base_struct
{
    tree_node *root_node;
    long int tree_size;
}tree_base;


#define H_L_CHILD(x) x * 2 + 1
#define H_R_CHILD(x) x * 2 + 2
#define H_PARENT(x) (x - 1) / 2

typedef struct heap_struct
{
    long int size;
    node_val * elem;
} heap;


