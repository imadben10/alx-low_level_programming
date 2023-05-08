#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
/**
* append_text_to_file - appends text at the end of a file
* @filename: the name of the file
* @text_content: the NULL terminated string to add at the end of the file
* Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
ssize_t bytes_written;
size_t content_length;
if (!filename)
return (-1);
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);
if (!text_content)
{
close(fd);
return (1);
}
content_length = strlen(text_content);
bytes_written = write(fd, text_content, content_length);
if (bytes_written == -1)
{
close(fd);
return (-1);
}
close(fd);
return (1);
}
