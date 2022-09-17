#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>
#include <fcntl.h>

#define	LEN		4096

int
main(
	int		argc,
	char		*argv[])
{
	ssize_t		rd;
	char		buf[LEN] = { 0 };
	int		fd;

	fd = open("./data/print.txt", O_RDONLY);
	if (fd == -1) {
		perror("open");
		exit(EXIT_FAILURE);
	}
	rd = read(fd, buf, LEN);
	if (rd == -1) {
		perror("read");
		exit(EXIT_FAILURE);
	}
	printf("%s", buf);
	exit(EXIT_SUCCESS);
}
