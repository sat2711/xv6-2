#include "types.h"
#include "user.h"

int main(int argc, char *argv[]) {
	int n = atoi(argv[1]);
	int a = 1732*n*n/4000;
	printf(1, "%d\n", a);
	exit();
}
