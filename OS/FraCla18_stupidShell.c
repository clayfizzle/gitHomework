#include <stdio.h>
#include <stdlib.h>

int makeargv(const char *s, const char *delimiters, char ***argvp);

int main(int argc, char *argv[]) {
    char delim[] = " \t";
    int i;
    char **myargv;
    int numtokens;
    char *newargv[] = {"./myecho", "hello", "world", NULL };
    char *newenviron[] = {NULL};
    
    pid_t pid;

    if (argc != 2) {
        fprintf(stderr, "It takes Quotes bro!!! ' ' : %s string\n", argv[0]);
        return 1;
    }
    if ((numtokens = makeargv(argv[1], delim, &myargv)) == -1) {
        fprintf(stderr, "Failed to construct an argument array for %s\n", argv[1]);
        return 1;
    }
    
   // printf("The argument array contains: \n");
   // fprintf(stderr, "Command: %s\n", myargv[0]);
   // fprintf(stderr, "Args: %s\n", myargv[1]);
    
    for(i=0; i<numtokens; i++) 
       // printf("%d: %s\n", i, myargv[i]);
    
    if ((pid = fork()) == 0) {
       // printf("I am the child: %u\n", getpid());
       // printf("Execing the myecho image\n");
        execve(myargv[0], myargv, NULL);
        perror("execve");   /* no return on error */
        exit(EXIT_FAILURE);
    } else {
        printf("I am the parent: %u and my child is: %u\n", getpid(), pid);
        exit(EXIT_SUCCESS);
    } 

    return 0;
}
