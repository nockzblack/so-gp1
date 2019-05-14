## Práctica 5

# Objetivo
	Hacer un spike sobre hilos, semáforos y locks. 
	# Herramientas
	+ git
	+ gcc
	
	
	# Conceptos:
	
	+ Hilos
	   + Es un proceso ligero que solo consta de un stack. Y el código y el heap los comparte con el proceso principal.
	   + Pueden ejecutar funciones diferentes.
	
	+ Semáforos:
	   + Es una variable global.
	   + Soporta dos operaciones.
	    ++ Incrementar (sem_post) siempre incrementa en uno.
	    ++ Decrementar (sem_wait) si el valor del semáforo es mayor que 0 decremente si es igual a cero se suspende
	   + Controlar acceso a recursos.
	
	+ Lock.
	    + Es una variable global.
	    + Soporta dos operaciones.
	      ++ lock (bloqueo) adquirir el lock. Si el lock ya está tomando el hilo/proceso se suspende.
	      ++ unlock (desbloquera) liberar el lock.
	    + Secciones críticas.
	
	# ¿Que aprendí?
	
	+ Crear y manejar user threads
	+ Entender e implementar semaforos
	+ Identificar posibles deadlock
	+ Crear numeros random con c
	
	# Url del commit
	https://github.com/nockzblack/so-gp1/commit/1c6222d6ec0879e431b182026eea168f144fbb8c
