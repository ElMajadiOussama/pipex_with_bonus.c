#include "../include/pipex.h"

void parent_close(int nb_child, int (*fd)[2], int i)
{
        if(i == 0)
        {
            close(fd[i][0]);
            close(fd[i][1]);
        }
        else if(i == nb_child - 1)
        {
            close(fd[i - 1][0]);
            close(fd[i][1]);
        }
        else
        {
            close(fd[i - 1][0]);
            close(fd[i][1]);
        }
        exit(EXIT_SUCCESS);
}