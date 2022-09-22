#include <stdio.h>
#include "main.h"

int main(void)
{
 char *str;
 int len;

 str = "The First Ever Of A Kind.";
 len = _strlen(str);
 printf("The string is :%s\n", str);
 printf("Its length is :%d\n", len);
return (0);
}
