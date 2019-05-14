#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <signal.h>

int parar = 1;
void sigint_handler(int sig)
{
	printf("Ahhh! SIGINT! %d\n",sig);
  parar = 0;
}

int main(void)
{
	char s[200];
	struct sigaction sa;

	sa.sa_handler = sigint_handler;
	sa.sa_flags = 0; // or SA_RESTART
	sigemptyset(&sa.sa_mask);

	if (sigaction(SIGINT, &sa, NULL) == -1) {
		perror("sigaction");
		exit(1);
	}

	printf("Enter a string:\n");
  while(parar);
  scanf("%s",s);
	printf("You entered: %s\n", s);

	return 0;
}
