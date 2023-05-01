#include "../include/pipex.h"


int main(int ac, char **argv)
{
    int i = 0;
    while (argv[i])
        i++;
    int nb_fork = ac - 1;
    pid_t   pid[nb_fork];
    int fd[nb_fork][2];
    i = 0;
        exec_process(nb_fork, fd, pid);
}