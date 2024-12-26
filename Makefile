# Makefile for your project

# 编译器
CC = gcc

# 编译选项
CFLAGS = -I./src/include -Wall -Wextra

# 目标文件
TARGET = ./target/db

# 源文件
SRCS = ./src/db.c ./src/parser.c ./src/table.c ./src/reader.c ./src/actuator.c

# 对应的对象文件
OBJS = $(SRCS:.c=.o)

# 生成目标
all: $(TARGET)

# 链接目标文件，生成可执行文件
$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

# 编译 .c 文件为 .o 文件
%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@

# 清理生成的文件
clean:
	rm -f $(OBJS) $(TARGET)
clobj:
	rm -f $(OBJS)

# 伪目标，避免与文件名冲突
.PHONY: all clean clobj
