#include <stdio.h>

int main()
{
	const char* fileName = "file.txt";
	FILE* file = fopen(fileName, "w");

	if (file == NULL)
	{
		fprintf(stderr, "Cannot open the file.");
		return 1;
	}

	// Working with file

	fclose(file);

	return 0;
}