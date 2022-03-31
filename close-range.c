#include <sys/stat.h>
#include <fcntl.h>
#define __USE_GNU
#include <unistd.h>
#include <errno.h>
#include <stdio.h>

int main(void)
{
	int fd = open("foo.txt", O_RDONLY);
	close_range(fd, fd, 0);
	printf("err=%d\n", errno);
	return 0;
}
