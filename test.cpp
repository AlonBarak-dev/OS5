#include "stack.hpp"
#include <iostream>
#include <string.h>
#include <assert.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>


int main(){


    pid_t pid;
    pid = fork();
    // in case of an error while creating a new process
    if (pid < 0)
    {
        printf("failed to create a new Child");
        exit(-1);
    }
    else if (pid != 0)
    {
        // let the parent procees to run the server
        system("./server");
    }
    else{
        // child process creats new clients
        sleep(2);
        for (size_t i = 0; i < 3; i++)
        {
            pid_t pid_c;
            pid_c = fork(); // new process

            if (pid_c < 0)
            {
                printf("failed to create a new client");
                exit(-1);
            }
            else if(pid_c == 0){
                system("./client 127.0.0.1 < test.txt");   // creates new client in child process
            }
            
        }
        exit(0);
        
    }
    

    return 0;
}