#include "main.h"

int _putchar(char c) {
return write(1, &c, 1);
}

int _puts(char *str) {
int i = 0;
while (str[i]) {
_putchar(str[i]);
i++;
}
return i;
}

void integer(int num) {
int divisor = 1;
int numDigits = 0;
if (num < 0) {
_putchar('-');
num = -num;
}
int temp = num;
while (temp > 0) {
temp /= 10;
divisor *= 10;
numDigits++;
}
if (num == 0) {
_putchar('0');
return;
}
while (divisor > 0) {
_putchar((num / divisor) + '0');
num %= divisor;
divisor /= 10;
}
}

int _printf(const char *format, ...) {
int x;
int y = 0;
int v;
va_list print;
va_start(print, format);
if (format == NULL) {
return (-1);
}
for (x = 0; format[x] != '\0'; x++) {
if (format[x] != '%') {
_putchar(format[x]);
} else if (format[x + 1] == 'c') {
_putchar(va_arg(print, int));
x++;
} else if (format[x + 1] == 's') {
char *betty = va_arg(print, char *);
if (betty == NULL) {
betty = "(null)";
}
v = _puts(betty);
x++;
y += (v - 1);
} else if (format[x + 1] == '%') {
_putchar('%');
x++;
} else if ((format[x + 1] == 'd') || (format[x + 1] == 'i')) {
integer(va_arg(print, int));
x++;
} else {
_putchar(format[x]);
}
y++;
}
va_end(print);
return (y);
}

int main() {
_printf("Hello, %s! This is a number: %d%%\n", "World", 42);
return (0);
}
