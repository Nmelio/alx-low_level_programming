#include "main.h"

/*****************************START OF FUNCTIONS*****************************/

/**
 * os_print - function that prints the Operating sys and ABI of an ELF header
 *
 * @buzz: array of the ELF version
 *
 * Return: void
 */

void os_print(unsigned char *buzz)
{
	printf(" OS/ABI: ");

	if (buzz[EI_OSABI] == ELFOSABI_NONE)
		printf("UNIX - System V\n");
	else if (buzz[EI_OSABI] == ELFOSABI_HPUX)
		printf("UNIX - HP-UX\n");
	else if (buzz[EI_OSABI] == ELFOSABI_NETBSD)
		printf("UNIX - NetBSD\n");
	else if (buzz[EI_OSABI] == ELFOSABI_LINUX)
		printf("UNIX - Linux\n");
	else if (buzz[EI_OSABI] == ELFOSABI_SOLARIS)
		printf("UNIX - Solaris\n");
	else if (buzz[EI_OSABI] == ELFOSABI_IRIX)
		printf("UNIX - IRIX\n");
	else if (buzz[EI_OSABI] == ELFOSABI_FREEBSD)
		printf("UNIX - FreeBSD\n");
	else if (buzz[EI_OSABI] == ELFOSABI_TRU64)
		printf("UNIX - TRU64\n");
	else if (buzz[EI_OSABI] == ELFOSABI_ARM)
		printf("ARM\n");
	else if (buzz[EI_OSABI] == ELFOSABI_STANDALONE)
		printf("Standalone App\n");
	else
		printf("<unknown: %x>\n", buzz[EI_OSABI]);
}




/**
 * data_print - function that prints the ELF header data
 *
 * @buzz: array of the ELF class
 *
 * Return: void
 */

void data_print(unsigned char *buzz)
{
	printf(" Data: ");

	switch (buzz[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", buzz[EI_CLASS]);
	}
}




/**
 * print_magic_num - function that prints the magic numbers of ELF
 *
 * @buzz: array of the ELF numbers
 *
 * Description: Magic numbers are separated by spaces
 */

void print_magic_num(unsigned char *buzz)

{
	int zz = 0;

	printf(" Magic: ");

	while (zz < EI_NIDENT)
	{
		printf("%02x", buzz[zz]);

		if (zz == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
		zz++;
	}
}




/**
 * entry_point_print - prints entry point of the ELF
 *
 * @e_entry: address of the entry point of the ELF
 * @buzz: array containing the class of ELF
 *
 * Return: void
 */

void entry_point_print(unsigned long int e_entry, unsigned char *buzz)
{
	printf(" Entry point address: ");

	if (buzz[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			((e_entry >> 8) & 0xFF00FF);

		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (buzz[EI_CLASS] == ELFCLASS32)
	{
		printf("%#x\n", (unsigned int)e_entry);
	}

	else
	{
		printf("%#lx\n", e_entry);
	}
}




/**
 * elf_check - function that checks whether files are of ELF type
 *
 * @buzz: array of the ELF data
 *
 * Description: If the file is not an ELF file - exit code 98
 */

void elf_check(unsigned char *buzz)
{
	int pp = 0;

	while (pp < 4)
	{
		if (buzz[pp] != 127 &&
		    buzz[pp] != 'E' &&
		    buzz[pp] != 'L' &&
		    buzz[pp] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
		pp++;
	}
}




/**
 * print_version_ELF - function that print the ELF header version
 *
 * @buzz: array of the version of ELF
 *
 * Return: void
 */

void print_version_ELF(unsigned char *buzz)
{
	printf(" Version: %d",
	       buzz[EI_VERSION]);

	if (buzz[EI_VERSION] == EV_CURRENT)
		printf(" (current)\n");
	else
		printf("\n");
}




/**
 * type_print - prints type of an ELF
 *
 * @cuzz: type of ELF
 * @buzz: an array containing the ELF class
 *
 * Return: void
 */

void type_print(unsigned int cuzz, unsigned char *buzz)
{
	if (buzz[EI_DATA] == ELFDATA2MSB)
		cuzz >>= 8;

	printf(" Type: ");

	if (cuzz == ET_NONE)
		printf("NONE (None)\n");
	else if (cuzz == ET_REL)
		printf("REL (Relocatable file)\n");
	else if (cuzz == ET_EXEC)
		printf("EXEC (Executable file)\n");
	else if (cuzz == ET_DYN)
		printf("DYN (Shared object file)\n");
	else if (cuzz == ET_CORE)
		printf("CORE (Core file)\n");
	else
		printf("<unknown: %x>\n", cuzz);

}




/**
 * class_prints_out - function that prints the ELF header class
 *
 * @buzz: array of the ELF class
 *
 * Return: void
 */

void class_prints_out(unsigned char *buzz)
{
	printf(" Class: ");

	if (buzz[EI_CLASS] == ELFCLASSNONE)
		printf("none\n");
	else if (buzz[EI_CLASS] == ELFCLASS32)
		printf("ELF32\n");
	else if (buzz[EI_CLASS] == ELFCLASS64)
		printf("ELF64\n");
	else
		printf("<unknown: %x>\n", buzz[EI_CLASS]);
}




/**
 * closed - function to close ELF files
 *
 * @zzz: file descriptor of the ELF file to be closed
 *
 * Description: If the file cannot be closed - exit code 98
 */
void closed(int zzz)
{
	if (close(zzz) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", zzz);
		exit(98);
	}
}




/**
 * abi_print_out - function that prints ABI version of an ELF header
 *
 * @buzz: array containing the ABI version ofELF
 *
 * Return: void
 */

void abi_print_out(unsigned char *buzz)
{
	printf(" ABI Version: %d\n",
	       buzz[EI_ABIVERSION]);
}

/*****************************END OF FUNCTIONS*****************************/




/**
 * main - program that displays the information contained in the ELF header
 * at the start of an ELF file
 *
 * @argc: number of arguments passed to the program
 * @argv: array of arguments passed to the program
 *
 *
 * Description: If file is not an ELF File or function fails - exit code 98
 *
 * Return: 0
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int as, bs;
	Elf64_Ehdr *cs;

	as = open(argv[1], O_RDONLY);
	if (as == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	cs = malloc(sizeof(Elf64_Ehdr));
	if (cs == NULL)
	{
		closed(as);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	bs = read(as, cs, sizeof(Elf64_Ehdr));
	if (bs == -1)
	{
		free(cs);
		closed(as);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	elf_check(cs->e_ident);
	printf("ELF Header:\n");
	print_magic_num(cs->e_ident);
	class_prints_out(cs->e_ident);
	data_print(cs->e_ident);
	print_version_ELF(cs->e_ident);
	os_print(cs->e_ident);
	abi_print_out(cs->e_ident);
	type_print(cs->e_type, cs->e_ident);
	entry_point_print(cs->e_entry, cs->e_ident);

	free(cs);
	closed(as);
	return (0);
}
