#include "libmx.h"

void mx_printint(int n) {
	long m = n;

	if (m < 0) {
		mx_printchar('-');
		m *= -1;
	}
	if (m > 9) {
		mx_printint(m / 10);
		mx_printint(m % 10);
	}
	if (m <= 9) {
		m += '0';
		mx_printchar(m);
	}
}
