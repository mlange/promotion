#include <stdio.h>

int main(int argc, char *argv[])
{
    char temp[200];

    if (-1 < sizeof(temp))
	printf("-1 < 200\n");
    else
	printf("-1 > 200\n");

    exit(0);
}

