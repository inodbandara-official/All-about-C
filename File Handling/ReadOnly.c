// C program to illustrate fopen()

//// Valid mode of operation values in C with their meanings are as follows.
/*
r :-  Searches file. Opens the file for reading only. If the file is opened successfully fopen() loads it into memory and sets up a pointer that points to the first character in it. If the file cannot be opened fopen() returns NULL.

w :-  Searches file. If the file exists already, its contents are overwritten. If the file doesn’t exist, a new file is created. Returns NULL, if unable to open the file. It creates a new file for writing only(no reading).

a :-  Searches file. If the file is opened successfully fopen() loads it into memory and sets up a pointer that points to the last character in it. If the file doesn’t exist, a new file is created. Returns NULL, if unable to open the file. The file is opened only for appending(writing at the end of the file).

r+ :-  Searches file. Opens the file for both reading and writing. If opened successfully, fopen() loads it into memory and sets up a pointer that points to the first character in it. Returns NULL, if unable to open the file.

w+ :-  Searches file. If the file exists, its contents are overwritten. If the file doesn’t exist, a new file is created. Returns NULL, if unable to open the file. The difference between w and w+ is that we can also read the file created using w+.

a+ :-  Searches file. If the file is opened successfully fopen( ) loads it into memory and sets up a pointer that points to the last character in it. If the file doesn’t exist, a new file is created. Returns NULL, if unable to open the file. The file is opened for reading and appending(writing at the end of the file).

rb :-  Open the binary file in read mode. If the file does not exist, the open() function returns NULL.

wb :-  Open the binary file in write mode. As the pointer is set to the start of the file, the contents are overwritten. If the file does not exist, a new file is created.

ab :-  Open the binary file in append mode. The file pointer is set after the last character in the file. A new file is created if no file exists with the name.

rb+ :-  Open the binary file in read and write mode. If the file does not exist, the open() function returns NULL.

wb+ :-  Open the binary file in read and write mode. Contents are overwritten if the file exists. It will be created if the file does not exist.

ab+ :-  Open the binary file in read and append mode. A file will be created if the file does not exist.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	// pointer demo to FILE
	FILE* demo;

	// Creates a file "demo_file" with file access as write-plus mode
	demo = fopen("demo_file.txt", "w+");

	// adds content to the file
	fprintf(demo, "%s %s %s", "This", "is",	"Inod Bandara");

	// closes the file pointed by demo
	fclose(demo);

	return 0;
}
