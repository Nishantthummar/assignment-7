#include <stdio.h>
#include <stdarg.h>
//void minprintf(char *fmt, ...);
/* minprintf: minimal printf with variable argument list */
void minprintf(char *fmt, ...)
{

	va_list ap; /* points to each unnamed arg in turn */
	char *p, *sval, cval, *temp; //added by me cval & *temp
	int ival;
	long int ldval;
	double dval;
	unsigned long int ulval;
	va_start(ap, fmt); /* make ap point to 1st unnamed arg */

	for (p = fmt; *p; p++) {
		if (*p != '%') {
			putchar(*p);
			continue;
		}
	switch (*++p) {
		case 'd':
			ival = va_arg(ap, int);
			printf("%d", ival);
			break;
		case 'f':
			dval = va_arg(ap, double);
			printf("%f", dval);
			break;
		case 's':
			for (sval = va_arg(ap, char *); *sval; sval++)
				putchar(*sval);
			break;
		case 'c': //added
			cval = va_arg(ap, int);
			printf("%c", cval);
			break;
	/*	case 'l': //added
			ldval = va_arg(ap, long);
			printf("%ld", ldval);
			break;*/
		case 'l': //added
			if(*++p == 'u') {
			ulval = va_arg(ap, unsigned long int);
			printf("%lu", ulval);
			printf("\nif ");
			}
			else {
				ldval = va_arg(ap, long);
				printf("%ld", ldval);
				break;
			}
			break;
		default:
			putchar(*p);
			break;
		}
	}
	va_end(ap); /* clean up when done */
}


void main() {
       	long int a= 18446744;
	char b= 'n';
	int x[3] = { 3,2,1};
	minprintf("\n\t%c ",b );
	minprintf("%l", a);
}

