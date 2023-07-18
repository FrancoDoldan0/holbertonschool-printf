#ifndef MAIN_H
#define MAIN_H

/**
 * struct toprint - Type of argument and function associated info
 * @letter : type of argument (format[i + 1])
 * @f : function associated
 */

typedef struct toprint
	{
		char *letter;
		int (*f)(va_list vargs);
	} toprint_t;

/* functions */
int _printf(const char *format, ...);
int _putchar(char);
int print_c(va_list vargs);
int print_s(va_list vargs);
int print_prc(va_list vargs);
int print_di(va_list vargs);
int elegir_funcion(va_list vargs, char letter);

#endif /* MAIN_H */
