#include "types.h"
#include "user.h"

int main(int argc, char *argv[]) {
	char buf[1024];
	read(0, buf, sizeof(buf));
	int i;
	for(i=0;buf[i]!='\0';i++)
		buf[i] += 1;
	write(1, buf, strlen(buf));
	exit();
}
