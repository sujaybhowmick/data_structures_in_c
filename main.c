#include "list/linked_list.h"

int main() {
    struct Node *list = NULL;
    char name[] = "Sujay Bhowmick";
    add(&list, name, sizeof(name));
    print(list, print_string);
    clear(list);
    return 0;
}
