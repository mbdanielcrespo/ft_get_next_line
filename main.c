#include "get_next_line.h"

int main()
{
    int fd;
    char *line;
    int i = 0;

    fd = open("test.txt", O_RDONLY);
    if (fd < 0)
    {
        printf("Error opening the file.\n");
        return (1);
    }

    while ((line = get_next_line(fd)) != NULL)
    {
        printf("Line %d: %s\n", i++, line);
        free(line);
    }

    close(fd);
    return (0);
}