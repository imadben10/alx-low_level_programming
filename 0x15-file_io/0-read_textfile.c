#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
/**
* read_textfile - reads a text file and prints it to the POSIX stdout
* @filename: the name of the file to read
* @letters: the number of letters it should read and print
* Return: the actual number of letters it could read and print or 0 on failure
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t bytes_read, bytes_written;
char *buffer;
if (!filename)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buffer = malloc(letters * sizeof(char));
if (!buffer)
{
close(fd);
return (0);
}
bytes_read = read(fd, buffer, letters);
if (bytes_read == -1)
{
free(buffer);
close(fd);
return (0);
}
bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
if (bytes_written == -1 || bytes_written != bytes_read)
{
free(buffer);
close(fd);
return (0);
}

free(buffer);
close(fd);
return (bytes_written);
}