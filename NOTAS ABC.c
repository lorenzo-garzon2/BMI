#include <stdio.h>

int main(int argc, char *argv[]) {
	unsigned nota;
	printf("ingrese la nota en formato numerico: ");
	scanf("%u", &nota);
	if (nota >= 90) {
		printf("Su nota es A");
	}
	else if (nota >= 80) {
		printf("Su nota es B");
	}
	else if (nota >= 70) {
		printf("Su nota es C");
	}
	else if (nota >= 60) {
		printf("Su nota es D");
	}
	else {
		printf("Su nota es F");
	}
	return 0;
}

