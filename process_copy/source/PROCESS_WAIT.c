
#include <process_copy.h>

int PROCESS_WAIT(void) {
    pid_t zpid;
    while ((zpid = waitpid(-1, NULL, WNOHANG)) != -1) {
        if (zpid > 0) {
            printf("parent wait zombie pid%d\n", zpid);
        } else {
            sleep(1);
            printf("parent task...\n");
        }
    }
    return 0;
};