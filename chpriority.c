#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char ** argv) {
	int pid;
	int priority;
	pid = atoi(argv[1]);
	priority = atoi(argv[2]);
	
	
	setpriority(pid, priority);
	
	exit();
}