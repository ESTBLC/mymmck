#include <sys/types.h>
#include <stdio.h>

#include "tracee/tracee.h"

int main(int argc, char *argv[])
{
    if (argc < 2) {
        printf("No file specified\n");
        return -1;
    }

    pid_t pid = start_tracee(argv[1], argv + 1);

    return 0;
}