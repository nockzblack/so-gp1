#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char **argv) {
	int num = atoi(argv[1]);
	int i = 0;
	int j = 0;
	int k = 0;
	int result = 0;
	
	for (i = 0; i < num; i++) {
		for (j = 0; j < 2*num; j++) {
			for (k = 0; k < 3*num; k++) {
				
				result = num * j * i;
				printf(1, "Llenar terminal %d", result);
			}
		}
	}
	result = result*num;
	exit();
	
}