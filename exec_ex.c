#include "types.h"
#include "user.h"

int main(int argc, char *argv[]) {
	printf(1, "MESSAGE: hello\n");
	argv[0]="ls";
	exec("ls", argv);
	exit();
}
