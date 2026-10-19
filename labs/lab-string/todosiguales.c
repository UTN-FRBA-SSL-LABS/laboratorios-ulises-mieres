#include <stdio.h>
#include "String.h"

int main(int argc, char *argv[]) {
    (void)argc;
    int todosIguales = 1;

    for (char **arg = argv + 1; *arg != NULL; arg++) {
        if (!AreEqual(argv[1], *arg)) {
            todosIguales = 0;
            break;
        }
    }

    printf("%d\n", todosIguales);
    return 0;
}
