#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main() {
    printf("Parent. My pid is %d. My parent id is %d\n", getpid(), getppid());
    int cid = fork();
    sleep(1);
    if (cid == 0)
        printf("Child. My pid is %d. My parent id is %d\n", getpid(), getppid());
    else
        printf("Parent. My pid is %d. My child pid is %d\n", getpid(), cid);

    return 0;
}
