#include <stdio.h>
#include <pthread.h>
#include <time.h>
#include <semaphore.h>
#include <unistd.h>
#include <stdlib.h>


#define NUM_PHILOSOPHERS 10000
#define NUM_FORKS 10000


sem_t forks[NUM_FORKS];


long randomInRange(int start, int final) {
	return start + random() % (final - start);
}

void * life(void * td) {
	long id = (long)td;
	
	srandom((id +1) * time(NULL));

	printf("Soy el filosofo %ld\n", id);
	while(1) {
		//pensar
		printf("%ld> voy a pensar\n", id);
		sleep(randomInRange(5,10));
		printf("%ld> Tengo hambre\n", id);
		if(id % 2 == 0) {
			sem_wait(&forks[id]); // decrementando el semaforo
			sem_wait(&forks[(id+1)%NUM_PHILOSOPHERS]);
		} else {
			sem_wait(&forks[(id+1)%NUM_PHILOSOPHERS]);
			sem_wait(&forks[id]); // decrementando el semaforo
		}
		
		// comer
		printf("%ld> Voy a comer\n", id);
		sleep(randomInRange(2,6));
		sem_post(&forks[id]);
		sem_post(&forks[(id+1)%NUM_PHILOSOPHERS]);
	}
}

int main() {
	pthread_t philosophers[NUM_PHILOSOPHERS];
	long t;
	for (t=0; t< NUM_FORKS; t++) {
		sem_init(&forks[t], 0,1);
	}
	
	for (t=0; t< NUM_PHILOSOPHERS; t++) {
		pthread_create(&philosophers[t], NULL, life, (void *) t);
	}
	
	pthread_exit(NULL);
}