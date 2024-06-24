#include "lista.h"

int main() {
    List * A = list_new(4);

    list_info(A);
    
    list_insert(A,4);
    list_insert(A,10);
    list_insert(A,2);
    list_insert(A,7);

    list_info(A);
    list_expand(A, 8);
    list_info(A);

    list_insert(A,20);

    list_remove(A,2);
    list_print(A);

    list_reduce(A);
    list_print(A);

    list_info(A);
    
    list_free(A);

    return 0;
}
