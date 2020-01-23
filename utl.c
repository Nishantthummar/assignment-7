#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main (int argc, char *argv[]) { 
	
	int c;
	char low[5] = "Lower", upe[5] = "Upper";
	if (argc == 3) {

		printf("\nYou choose %s", argv[1]);
		if (strcmp(low, argv[1])) {
			putchar(tolower((int)argv[2]));
		} else if (strcmp(upe, argv[1])) {
			putchar(touperargv[2]));
		} else {
			printf("\nPlease enter valid arg");
		}
	}

	/*while ((c = getchar()) != EOF) {
		putchar(tolower(c));
	}*/
	return 0;
}
