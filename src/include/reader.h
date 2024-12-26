#ifndef READER_H
#define READER_H
#include <string.h>

// 输入缓冲
typedef struct {
    char *buffer;
    size_t buffer_lenght;
    size_t input_lenght;
} InputBuffer;

// 创建
InputBuffer* new_input_buffer();
// 读取输入
void read_input(InputBuffer *input_buffer);
// 释放资源
void close_input_buffer(InputBuffer *input_buffer);


#endif