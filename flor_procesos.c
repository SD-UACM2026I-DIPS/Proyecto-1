#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
    int t, p;
    pid_t tallo, flor, petalo;

    printf("Proceso raiz: %d\n", getpid());

    for (t = 0; t < 7; t++){
        tallo = fork();

        if (tallo != 0){
            
            printf("Tallo_padre %d saliendo con t=%d\n", getpid(), t);
            break; // para frenar ejecucion de proceso padre del tallo, quien continua es el hijo
        }
        else{
            
            printf("Tallo_hijo: %d de padre: %d con t=%d\n", getpid(), getppid(), t);
            
            if (t >= 4){
                
                // Al crear el proceso flor creará sus procesos petalo inmediatamente
                flor = fork();

                if (flor == 0){
                    
                    printf("Flor_hijo: %d de padre: %d con t=%d\n", getpid(), getppid(), t);
                    
                    for(p = 0; p < 5; p++){
        
                        petalo = fork();

                        if(petalo == 0){
                            printf("Petalo_hijo: %d de padre: %d\n", getpid(), getppid());
                            break;
                        }
                    }
                    
                    break;
                }
            }
        }
    }

    sleep(600); // Tiempo en segundos (600s = 10 min)
    return 0;
}