#include "types.h"
#include "user.h"

int main(int argc, char *argv[]) {
	int a = atoi(argv[1]), b = atoi(argv[2]);
	printf(1, "Quotient: %d\tRemainder: %d\n", a/b, a%b);
	exit();
}
