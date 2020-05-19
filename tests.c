#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

size_t	ft_strlen(const char *s);
ssize_t	ft_write(int fd, const void *buf, size_t count);
ssize_t	ft_read(int fd, void *buf, size_t count);
char	*ft_strcpy(char *dest, const char *src);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strdup(const char *s1);

int main ()
{
    char c = 'a';
    char *s= "Hola";
    int x;
    int y;
	int i;
	int j;

	write(1, "FT_: ", 5);	
    x = ft_write(1, s, 4);
	write(1, "\n", 1);
	write(1, "ORI: ", 5);
    y = write(1, s, 4);
	write(1, "\n", 1);

    printf("FT_: %d\n", x);
    printf("ORI: %d\n", y);

	i = ft_strlen(s);
	j= strlen(s);
	printf("%d%d", i, j);

    return (0);
}
