#include "get_next_line.h"
#include <stdio.h>

/* comment the one you want to test. make sure the other 4 are not commented. */
#define READ_FROM_FILE
#define READ_FROM_STDIN
#define READ_FROM_STDIN_FILE
// #define READ_FROM_BINARY_FILE
#define READ_FROM_FILES_COMBINED

#ifndef READ_FROM_FILE
int		main(void)
{
	int	fd;
	char	*line;

	fd = open("file7", O_RDONLY);
	while (get_next_line(fd, &line) > 0)
	{
		printf("LINIE =%s\n", line);
	}
	close(fd);
	return (0);
}
#endif

#ifndef READ_FROM_STDIN
int	main(int argc, char **argv)
{
	int	fd;
	char	*line;

	if (argc < 1)
		return (0);
	*argv = NULL;
	fd = 0;
	while (get_next_line(fd, &line) > 0)
	{
		printf("LINIE =%s\n", line);
	}
	close(fd);
	return (0);
}
#endif

#ifndef READ_FROM_STDIN_FILE
int	main(int argc, char **argv)
{
	int	fd;
	char	*line;
	int	i;

	if (argc < 2)
	{
		printf("usage: ./test_gnl file1 file2 etc.\n");
		return (0);
	}
	i = 1;
	while (i < argc)
	{
		printf("%s:\n", argv[i]);
		fd = open(argv[i], O_RDONLY);
		while (get_next_line(fd, &line) > 0)
		{
			printf("LINIE =%s\n", line);
		}
		close(fd);
		i++;
	}
	return (0);
}
#endif

#ifndef READ_FROM_FILES_COMBINED
int	main(int argc, char **argv)
{
	int		fd[10];
	char	*line;
	int		i;

	if (argc < 2)
	{
		printf("usage: ./test_gnl file1 file2 etc.\n");
		return (0);
	}
	fd[0] = -1;

	i = 1;
	while (i < argc)
	{
		fd[i] = open(argv[i], O_RDONLY);
		printf("fd[%d] =%d\n", i, fd[i]);
		i++;
	}

	if (get_next_line(fd[1], &line) > 0)
	printf("linia 1 din %s =%s\n", argv[1], line);
	if (get_next_line(fd[2], &line) > 0)
	printf("linia 1 din %s =%s\n", argv[2], line);
	if (get_next_line(fd[3], &line) > 0)
	printf("linia 1 din %s =%s\n", argv[3], line);
	if (get_next_line(fd[2], &line) > 0)
	printf("linia 2 din %s =%s\n", argv[2], line);
	if (get_next_line(fd[3], &line) > 0)
	printf("linia 2 din %s =%s\n", argv[3], line);
	if (get_next_line(fd[1], &line) > 0)
	printf("linia 2 din %s =%s\n", argv[1], line);
	if (get_next_line(fd[2], &line) > 0)
	printf("linia 3 din %s =%s\n", argv[2], line);

	i = 1;
	while (i < argc)
		{
			close(fd[i]);
			i++;
		}
	return (0);
}	
#endif

#ifndef READ_FROM_BINARY_FILE
int		main()
{
	int		fd;
	char	*line;

	line = (char*)malloc(sizeof(*line));
	fd = open("file2.bin", O_RDONLY);
	get_next_line(fd, &line);
	close(fd);

	ft_putnbr(*(int*)line); // chr * to int *, than get value

	return (0);
}
#endif
