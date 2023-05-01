#ifndef PIPEX_H
# define PIPEX_H
/* perror */
# include <stdio.h> 
/* open */
# include <fcntl.h>
/* dup2, close, STDIN_FILENO, fork, access */
# include <unistd.h> 
/* free, exit */
# include <stdlib.h>
/* waitpid */
# include <sys/wait.h>
/* pid_t */
# include <sys/types.h>
/* libft.h */
# include "../libft/libft.h"

typedef struct t_data {
    int (*fd)[2];
    pid_t *pid;
    int nb_child;
}               t_data;

void    exec_process(int pos_child, int (*fd)[2], pid_t  *pid);
void pipe_and_fork(int (*fd)[2], pid_t  *pid, int i);

void child(int nb_child, int i, int (*fd)[2]);
void first_child(int i, int (*fd)[2]);
void middle_child(int i, int (*fd)[2]);
void last_child(int i, int (*fd)[2]);

void parent_close(int nb_child, int (*fd)[2], int i);

#endif