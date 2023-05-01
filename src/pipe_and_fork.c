#include "../include/pipex.h"

void pipe_and_fork(int (*fd)[2], pid_t  *pid, int i)
{
    if (pipe(fd[i]) == -1)
    {
        perror("perror");
        exit(EXIT_FAILURE);
    }
    pid[i] = fork();
    if (pid[i] == -1)
        perror("perror");
}
