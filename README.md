# Proyecto-1
Programa en C que genera un árbol de procesos haciendo uso de la función fork().

El programa fué compilado y ejecutado haciendo uso del sistema Linux Ubuntu.

## Compilación.
Para compilar el programa abre una terminal en la ruta donde se encuentra el archivo.
El compilador estándar en sistemas Linux para el lenguaje C es gcc y el comando para
realizar la compilación es el siguiente:

gcc flor_procesos.c -o p

## Ejecución.
Para ejecutar el programa usa el siguiente comando:

./p

## Notas adicionales.
Para monitorear la ejecucion del programa has uso del siguiente comando en una ventana de terminal adicional

pstree -p <IDProcesoRaíz>
