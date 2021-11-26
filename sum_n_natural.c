#include "types.h"
#include "user.h"

int main(int argc, char *argv[]) {
	int n = atoi(argv[1]);
	printf(1, "%d\n", (n*(n+1))/2);
	exit();
}
