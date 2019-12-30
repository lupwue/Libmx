#include "libmx.h"

int mx_file_len(const char *file) {
    int count = 0;
    char buffer;
    int fd = open(file,  O_RDONLY);

    while (read(fd, &buffer, 1))
        count++;     
    close(fd);
    return count;
}
