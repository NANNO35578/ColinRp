#include <process_copy.h>

int main(int argc, char const *argv[]) {
    int sfd, dfd;
    int pos = atoi(argv[3]);
    int blockSize = atoi(argv[4]);

    if ((sfd = open(argv[1], O_RDONLY)) == -1) perror("open srcfile failed\n");
    if ((dfd = open(argv[2], O_WRONLY | O_CREAT, 0755)) == -1)
        perror("open srcfile failed\n");

    lseek(sfd, pos, SEEK_SET);
    lseek(dfd, pos, SEEK_SET);

    char buffer[blockSize];
    bzero(buffer, sizeof(buffer));
    int len;
    len = read(sfd, buffer, sizeof(buffer));
    write(dfd, buffer, len);
    close(sfd);
    close(dfd);
    return 0;
}
