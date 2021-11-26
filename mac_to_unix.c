#include "types.h"
#include "user.h"
#include "fcntl.h"

void convert(char *s) {
	int i;
	for(i=0;s[i]!='\0';i++) {
		if(s[i]=='\r')
			s[i]='\n';
	}
}

int main(int argc, char *argv[]) {
	int macfd = open(argv[1], O_RDONLY);
	char buf[1];
	//int ufd = open(argv[2], O_WRONLY|O_CREATE);
	int n;
	while((n=read(macfd, buf, sizeof(buf)))>0) {
		printf(1, "%s\n", buf);
		convert(buf);
		printf(1, "%s\n", buf);
	}
	exit();
}
