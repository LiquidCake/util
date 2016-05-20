#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main(int argc, char *argv[]) {

    if (sizeof(argv) / sizeof(char) != 1) {
        printf("Usage: pt <pytho script path>\n");
    }

    printf("Python shell started\n");

    const char *shell_cmd = "python ";

    //size_t shell_cmd_len = strlen(shell_cmd);
    //size_t path_len = strlen(script_path);

    //char *command = (char*) malloc(shell_cmd_len + path_len);
    //strncat(command, shell_cmd, shell_cmd_len);
    //strncat(command, script_path, path_len);

    char buffer[1024] = "";
    char *p_buffer = buffer;

    strcat(buffer, shell_cmd);
    strcat(buffer, argv[1]);
    
    system(p_buffer);
}

