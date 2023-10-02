#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/**
 * print_error - Print an error message to stderr and exit.
 * @message: The error message to print.
 */
void print_error(char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(98);
}

/**
 * print_elf_header_info - Print information from the ELF header.
 * @header: Pointer to the ELF header structure.
 */
void print_elf_header_info(Elf64_Ehdr *header)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", header->e_ident[i]);
		if (i < EI_NIDENT - 1)
			printf(" ");
		else
			printf("\n");
	}

printf("  Class: ");
printf("%s\n", (header->e_ident[EI_CLASS] == ELFCLASS64) ? "ELF64" : "ELF32");
printf("  Data: ");
printf("%s\n", (header->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement"
		"little endian" : "2's complement, big endian");
printf("  Version: ");
printf("%d (current)\n", header->e_ident[EI_VERSION]);
printf("  OS/ABI: ");
printf("%d\n", header->e_ident[EI_OSABI]);
printf("  ABI Version: ");
printf("%d\n", header->e_ident[EI_ABIVERSION]);
printf("  Type: ");
printf("%s\n", (header->e_type == ET_EXEC) ?
		"EXEC (Executable file)" : "UNKNOWN");
printf("  Entry point address: ");
printf("%#lx\n", (unsigned long)header->e_entry);
}

/**
 * main - Entry point of the program.
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
		print_error("Usage: elf_header elf_filename");

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		print_error("Error: Unable to open the ELF file");

	if (read(fd, &header, sizeof(header)) != sizeof(header))
		print_error("Error: Unable to read ELF header");

    /*Check if it's a valid ELF file*/
	if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1]
			!= ELFMAG1 ||
	header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
	{
		print_error("Error: Not an ELF file");
	}

	/* Print the ELF header information*/
	printf("ELF Header:\n");
	print_elf_header_info(&header);

	close(fd);
	return (0);
}
