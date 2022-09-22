#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_isalpha(int carac);
int	ft_isdigit(int carac);
int	ft_isalnum(int carac);
int	ft_isascii(int carac);
int	ft_isprint(int carac);
int	ft_strlen(char *pnt);
int	ft_atoi(const char *str);
int 	ft_strlcpy(char *dst, const char *src, unsigned int dstsize);
void	ft_memset(void *str, int c, unsigned int n);
void	ft_bzero(char *str, int size);
void	ft_memcpy(void *dest, const void *src, unsigned int n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
void	*inverso(char *last_d, const char *last_s, size_t len);



int main()
{
	int a = 1;
	int b = 1;
	int c;
	char x[] = "hola-adios";
	char y[] = "";
	//char z[50];

	a = b;
/*
	//isalpha
	a = ft_isalpha(c);
	b = isalpha(c);
	printf ("isalpha\n");
	printf("my funcion --> %d \n", a);
	printf("funcion origina --> %d \n", b);

	//isdigit
	a = ft_isdigit(c);
	b = isdigit(c);
	printf ("isdigit\n");
	printf("my funcion(%d) --> %d \n", c, a);
	printf("funcion origina(%d) --> %d\n", c, b);

	//isalnum
	a = ft_isalnum(c);
	b = isalnum(c);
	printf ("isdigit\n");
	printf("my funcion(%d) --> %d \n", c, a);
	printf("funcion origina(%d) --> %d\n", c, b);

	//isascii
	a = ft_isascii(c);
	b = isascii(c);
	printf ("isascii\n");
	printf("my funcion(%d) --> %d \n", c, a);
	printf("funcion origina(%d) --> %d\n", c, b);

	//isprint
	a = ft_isprint(c);
	b = isprint(c);
	printf ("isprint\n");
	printf("my funcion(%d) --> %d \n", c, a);
	printf("funcion origina(%d) --> %d\n", c, b);

	//strlen
	a = ft_strlen(p);
	b = strlen(p);
	printf ("strlen\n");
	printf("my funcion --> %d \n", a);
	printf("funcion origina --> %d\n", b);

	//memset
	printf("menset \n");
	a = 5;
	printf("stren original --> %s \n", x);
	ft_memset(x, c, a);
	memset(y, c, a);
	printf("Mi funcion --> %s \n", x);
	printf("funcion original --> %s \n", y);
	return (0);

	//bzero
	printf("bzero \n");
	a = 5;
	printf("stren original --> %s \n", x);
	ft_bzero(x, a);
	bzero(y, a);
	printf("Mi funcion -->");

	write(1, x, 10);
	write(1, "\n", 1);
	printf("funcion original --> %s \n", y);
	write(1, y, 10);

	//memcpy
	printf("MEMCOPY\n");
	memcpy(y, x, 1);
	printf("funcion original --> %s \n", y);
	return (0);

	//memcoy
	printf("mencpy \n");
	a = 5;
	printf("stren original --> %s \n", x);
	ft_memcpy(x, c, a);
	memcpy(y, c, a);
	printf("Mi funcion --> %s \n", x);
	printf("funcion original --> %s \n", y);

	int	t;
	int	k;
	char	w[] = "7";
	t = atoi(w);
	printf("%d \n", t);
	k = ft_atoi(w);
	printf("%d", k);

	//strcopy
	c = ft_strlcpy(x, y, 3);
	printf("%s", x);

	//strncpm
	c = ft_strncmp("test\66", "test\65", 5);
	printf("%d", c);


	char *r;
	///r = ft_strnstr("lorem ipsum dolor sit amet", "", 10);
	r = strnstr("lorem ipsum dolor sit amet", "", 10);
	printf("%s", r);
	*/

  	return (0);

}
