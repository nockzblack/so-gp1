#include <stdio.h>
#include <pthread.h>
#define NUM_THREAD 100


long saldo = 1000;
pthread_mutex_t lock;

void * printHello(void * td) {
	long lsaldo;
	printf("Hello World desde el hilo %ld \n", (long) td);
	pthread_mutex_lock(&lock);
	lsaldo = saldo;
	printf("El saldo actual %ld \n", (long) lsaldo);
	saldo =  lsaldo + 100;
	pthread_mutex_unlock(&lock);
}

int main() {
	pthread_t threads[NUM_THREAD];
	long t;
	for (t=0; t< NUM_THREAD; t++) {
		pthread_create(&threads[t], NULL, printHello, (void *) t);
	}
	
	for (t=0; t< NUM_THREAD; t++) {
		pthread_join(threads[t], NULL);
	}

	printf("Saldo final %ld \n", saldo);
	pthread_exit(NULL);
}