#ifndef FILEDESC_H
#define FILEDESC_H

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include <errno.h>
#include <elf.h>

#define BUFSIZE 1024

ssize_t read_textfile(const char *filename, size_t letters);

#endif
