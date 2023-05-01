#include "../include/pipex.h"

void exec_process(int nb_child, int (*fd)[2], pid_t *pid)
{
    int i = 0;
    int j = 0;

    while (i < nb_child)
    {
        pipe_and_fork(fd, pid, i);
        if(pid[i] == 0)
            child(nb_child, i, fd);
        else
        {
            waitpid(pid[j], NULL, 0);
            i++;
        }
        // parent_close(nb_child, fd, i);
    }
}