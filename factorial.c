#include "types.h"
#include "user.h"

int main(int argc, char *argv[]) {
	int n = atoi(argv[1]);
	if(n<1)
		exit();
	int i, p=1;
	for(i=1;i<=n;i++)
		p = p*i;
	printf(1, "%d\n", p);
	exit();
}
