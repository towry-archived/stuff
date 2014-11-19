#include <stdio.h>
#include <string.h>
#include <unistd.h>

#define METHOD_MAP(XX) 			\
	XX(0, DELETE, 	DELETE) 	\
	XX(2, GET,		GET)		\

enum http_method
{
#define XX(num, name, string) HTTP_##name = num,
	METHOD_MAP(XX)
#undef XX
};

int
main()
{
	enum http_method m;

	printf("%d\n", HTTP_DELETE);

	m = HTTP_GET;

	printf("%d\n", m);

}