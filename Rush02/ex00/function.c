#include <unistd.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int     i;
    int     j;
    int     k;
    char    *strjoin;

    if (!s1 || !s2)
		return (NULL);
    strjoin = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!strjoin)
		return (NULL);
    i = 0;
    k = 0;
    while (s1[i])
        strjoin[k++] = s1[i++];
    j = 0;
    while (s2[j])
        strjoin[k++] = s2[j++];
    strjoin[k] = '\0';
	return (strjoin);
}