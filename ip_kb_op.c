#include "types.h"
#include "user.h"

int main() {
	char buf[1024];
	read(0, buf, sizeof(buf));
	write(1, buf, sizeof(buf));
	exit();
}
