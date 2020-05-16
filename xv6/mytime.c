#include "types.h"
#include "stat.h"
#include "user.h"

int 
main(int argc,char *argv[])
{
    int startTicks = uptime();
    if(argv[1]){
    //printf(1,"%s\n",argv[1]);
        int pid = fork();
        if (pid < 0) {
            printf(2, "Error: Invalid PID!\n");
            exit();
        }
        if (pid > 0)
            wait();
        if (pid == 0) {
            if (exec(argv[1], argv + 1) < 0) {
                printf(2, "Error: Exec fails!\n");
                exit();
            }
        }
    }
    int endTicks = uptime();

    int seconds = (endTicks - startTicks)/100;
    int partial_seconds = (endTicks - startTicks)%100;
    printf(1, " Time taken is %d.%d seconds \n.", seconds,partial_seconds);
    
    exit();
}