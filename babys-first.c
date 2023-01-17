#include <stdio.h>

int getPass(char *b)
{

	if (b[0] == 'c') {
	if (b[1] == 'a') {
	if (b[2] == 'n') {
	if (b[3] == '_') {
	if (b[4] == 'y') {
	if (b[5] == 'a') {
	if (b[6] == '_') {
	if (b[7] == 'd') {
	if (b[8] == 'i') {
	if (b[9] == 'g') {
	if (b[10] == '_') {
	if (b[11] == 'i') {
	if (b[12] == 't') {
	if (b[13] == '?') {
		return 1;
	}
	}
	}
	}
	}
	}
	}
	}
	}
	}
	}
	}
	}
	}
	return 0;
}
int main(int argc, char **argv)
{
	char buffer[64];

	printf("Welcome to your first crackme problem!\n");
	printf("What is the password?: ");
	scanf("%64s", buffer);

	if (getPass(buffer))
	{
		printf("That is correct!\n");
	}
}
