
#include <process_copy.h>

int PRAM_CHECK(const char* src, int pronum, int argc) {
    if (argc < 3) return 0;
    if (pronum < 5 || pronum > 100) return 0;
    if (access(src, F_OK) != 0) return 0;
    return 1;
};
