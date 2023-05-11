#include "main.h"
#define BUFFER_SIZE 1024
int main()
{
	int source_fd, dest_fd;
	ssize_t bytes_written, bytes_read;
	char buffer[BUFFER_SIZE];

	source_fd = open("xyz.txt", O_RDONLY);
	if (source_fd == -1)
	{
		perror("Error opening source file");
		return (1);
	}

	dest_fd = open("copy1.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (dest_fd == -1)
	{
		perror("Error opening destination file");
		close(source_fd);
		return (1);
	}

	bytes_read = read(source_fd, buffer, sizeof(buffer));
	while (bytes_read > 0)
	{
		write(dest_fd, buffer, bytes_read);

		if (bytes_read != bytes_written)
		{
			perror("Error writing to destination file");
			close(source_fd);
			close(dest_fd);
			return (1);
		}
	}
	if (bytes_read == -1)
	{
		perror("Error reading from source file");
		close(source_fd);
		close(dest_fd);
		return (1);
	}
	close(source_fd);
	close(dest_fd);
	return (0);
}
