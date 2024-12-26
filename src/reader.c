#include <stdio.h>
#include <stdlib.h>
#include "reader.h"

InputBuffer* new_input_buffer() {
    InputBuffer *inputBuffer = (InputBuffer *) malloc(sizeof(InputBuffer));
    inputBuffer->buffer = NULL;
    inputBuffer->buffer_lenght = 0;
    inputBuffer->input_lenght = 0;
}

void read_input(InputBuffer *input_buffer) {
    size_t bytes_read = getline(&(input_buffer->buffer), &(input_buffer->input_lenght), stdin);
    if (bytes_read <= 0) {
        printf("Error reading input\n");
        exit(EXIT_FAILURE);
    }
    input_buffer->input_lenght = bytes_read - 1;
    input_buffer->buffer[bytes_read - 1] = 0;
    
}

void close_input_buffer(InputBuffer *input_buffer) {
    free(input_buffer->buffer);
    free(input_buffer);
}