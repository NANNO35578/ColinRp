
#include <process_copy.h>

int PROCESS_CREATE(const char* src,const char* dest,int blockSize,int pronum){
    int i;
    pid_t pid;
    for(i=0;i<pronum;++i){
        pid=fork();
        if(pid==0)break;
    }

    if (pid > 0) {
        PROCESS_WAIT();
    } else if (pid == 0) {
        int pos;
        pos = i * blockSize;
        char strPos[10];
        char strBlockSize[10];
        sprintf(strPos, "%d", pos);
        sprintf(strBlockSize,"%d",blockSize);

        execl("/home/usr24/colinS4/process_copy/mod/copy", "copy", src, dest, strPos, strBlockSize, NULL);
    } else {
        perror("failed call fork() \n");
    }
    return 0;
};
