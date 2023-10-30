#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to file
 * @text_content:string to end of file
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist or the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fx, y, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	while (text_content[len])
		len++;

	fx = open(filename, O_WRONLY | O_APPEND);
	if (fx == -1)
		return (-1);

	y = write(fx, text_content, len);

	close(fx);

	if (y == -1)
		return (-1);

	return (1);
}
