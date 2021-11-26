#include "types.h"
#include "user.h"
#include "stat.h"
#include "fcntl.h"

int main(int argc, char *argv[]) {
	argv[0] = "ls";
	argv[1] = ">hello";
	exec("ls", argv);
	exit();
}
