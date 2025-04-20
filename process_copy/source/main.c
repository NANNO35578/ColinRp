#include <process_copy.h>

int main(int argc, char const *argv[]) {
    int blockSize, pronum;
    if (argc == 3) {
        // printf("t1\n");
        pronum = 5;
    } else{
        // printf("t2\n");
        pronum = atoi(argv[3]);
    }

        // printf("t3\n");
    if (PRAM_CHECK(argv[1], pronum, argc) == 0) exit(1);
        // printf("t4\n");
    blockSize = BLOCK_CUR(argv[1], pronum);
        // printf("t5\n");
    PROCESS_CREATE(argv[1], argv[2], blockSize, pronum);

    return 0;
}
