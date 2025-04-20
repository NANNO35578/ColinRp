#include <process_copy.h>

int BLOCK_CUR(const char* src, int pronum) {
    int fd=open(src,O_RDONLY);
        //printf("t6\n");
    int fileSize=lseek(fd,0,SEEK_END);//!------------------------------------------------------------------------------------------
        //printf("t7 %d %d\n",fileSize,fileSize / pronum + (fileSize % pronum != 0));
    return fileSize / pronum + (fileSize % pronum != 0);
};