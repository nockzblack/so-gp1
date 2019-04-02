#include "types.h"
#include "date.h"
#include "user.h"

int main (int argc, char **argv) {
	struct rtcdate r;
	
	date(&r);
	// imprimir la fecha
	printf(1, " %d/%d/%d %d:%d:%d \n", r.month, r.day, r.year, r.hour, r.minute, r.second);
	exit();
}

