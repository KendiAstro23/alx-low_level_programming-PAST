#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
/**
 * print_error - prints an error message
 * @msg: message to be printed
 * Return: No return
 */
void print_error(const char *msg)
{
	fprintf(stderr, "Error: %s\n", msg);
	exit(98);
}
/**
 * read_elf_header - reads the header
 * @filename: input location
 * Return: No return
 */
void read_elf_header(const char *filename)
{
	int i;
	int fd = open(filename, O_RDONLY);
	Elf32_Ehdr header32;

	if (fd == -1)
	{
		print_error("Unable to open the file");
	}

	if (read(fd, &header32, sizeof(header32)) != sizeof(header32))
	{
		print_error("Unable to read ELF header");
	}
	if (header32.e_ident[EI_MAG0] != ELFMAG0 ||
			header32.e_ident[EI_MAG1] != ELFMAG1 ||
			header32.e_ident[EI_MAG2] != ELFMAG2 ||
			header32.e_ident[EI_MAG3] != ELFMAG3)
	{
		print_error("Not an ELF file");
	}
	printf("ELF Header:\n");
	printf("Magic:");

	for (i = 0; i < EI_NIDENT; ++i)
	{
		printf(" %02x", header32.e_ident[i]);
	}
	printf("\n");
	printf("Class: %s\n", (header32.e_ident[EI_CLASS] == ELFCLASS32)
			? "ELF32" : "ELF64");
	printf("Data: %s\n", (header32.e_ident[EI_DATA] == ELFDATA2LSB) ?
			"2's complement, little endian" : "2's complement, big endian");
	printf("Version: %d (current)\n", header32.e_ident[EI_VERSION]);
	printf("OS/ABI: %d\n", header32.e_ident[EI_OSABI]);
	printf("ABI Version: %d\n", header32.e_ident[EI_ABIVERSION]);
	printf("Type: %d\n", header32.e_type);
	printf("Entry point address: %#lx\n", (unsigned long)header32.e_entry);

	close(fd);
}
/**
 * main - prints the main function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}
	read_elf_header(argv[1]);
	return (0);
}

