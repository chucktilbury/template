
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    if(argc < 2) {
        fprintf(stderr, "Use: %s filename\n", argv[0]);
        exit(1);
    }

    printf("Hello Template: %s\n", argv[1]);

    return 0;
}
