#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main(int argc, char *argv[]) {
    
    if (argc != 2) {
        printf("Usage: pt <python script path>\n");
        exit(0);
    }

    printf("Python shell started\n");

    const char *shell_cmd = "python ";

    char buffer[1024] = "";
    char *p_buffer = buffer;

    strcat(buffer, shell_cmd);
    strcat(buffer, argv[1]);
    
    system(p_buffer);
}

