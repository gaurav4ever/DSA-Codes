#include <stdio.h>
#include <unistd.h>
 
// Child process
void child()
{
    int i;
    for (i = 0; i < 50; i++)
        printf("I am child %d\n", i);
}
 
// Parent process
void parent()
{
    int i;
    for (i = 0; i < 50; i++)
        printf("I am Parent %d\n", i);
}
 
// Driver code
int main()
{
    pid_t pid = fork();
 
    // fork() error
    if (pid < 0)
        printf("Fork Failed");
 
    // child
    else if (pid == 0)
        child();
 
    // parent
    else
        parent();
 
    return 0;
}