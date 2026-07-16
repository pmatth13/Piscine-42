#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

char	*ft_strjoin(char *s1, char *s2);
int ft_strlen(char *str);

int main(int argc, char **argv)
{
    char    *dict_path;
    int     fd;
    char    buf[20];
    int     r;
    char *tmp;
    char *dict_content;

    if (argc < 2 || argc > 3)
        return (0);
    if (argc == 2)
        dict_path = "numbers.dict";
    else if (argc == 3)
        dict_path = argv[1];


    fd = open(dict_path, O_RDONLY);
    if (fd == -1)
    {
        write(1, "Dict Error\n", 11);
        return (1);
    }
    dict_content = ft_strjoin("", "");
    if (!dict_content)
        return (1);
    while ((r = read(fd, buf, 10)) > 0)
    {
        buf[r] = '\0';
        tmp = ft_strjoin(dict_content, buf);
        free(dict_content);
        dict_content = tmp;
    }

    close(fd);

    write(1, dict_content, ft_strlen(dict_content));
    write(1, "\n", 1);
}