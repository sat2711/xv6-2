#include "types.h"
#include "user.h"

int main(int argc, char *argv[]) {
	char buf[1024];
	read(0, buf, sizeof(buf));
	int i, v=0;
	for(i=0;buf[i]!='\0';i++){
		if(buf[i]=='a' || buf[i]=='e' || buf[i]=='i' || buf[i]=='o' || buf[i]=='u')
			v++;
	}
	printf(1, "%d\n", v);
	exit();
}
