# **Get Next Line - 42 School Project**
### **Project Outline**
This project is a part of the 42 School curriculum. The main goal of the project was to create a function that reads a file and returns the next line on each subsequent call. The function is designed to be used in a loop, which will then read the text available on a file descriptor one line at a time until the end of the text, regardless of the size of either the text or one of its lines.

The project is composed of three main files:

1. **'get_next_line.c'**: This is the main file that contains the get_next_line function.
2. **'get_next_line.h'**: This is the header file that contains the prototypes of the functions used.
3. **'get_next_line_utils.c'**: This file contains the auxiliary functions that are used in the main function.

### **How the Code Works**
The ```get_next_line``` function reads a file and returns the next line from the file descriptor. It uses a static variable ```st_save``` to keep track of what it read from the file but did not return in the previous call.

The function ```ft_read_st_save``` is used to read from the file descriptor into a buffer, and then append the buffer to ```st_save``` until a newline character is found or the end of the file is reached.

The function ```ft_get_line``` is used to extract a line from ```st_save```. It allocates memory for the line and copies characters from ```st_save``` until a newline character or the end of the string is reached.

The function ```ft_st_save``` is used to update ```st_save``` by removing the line that was just read.

## **Usage**
To use this function, include the get_next_line.h header file in your program, and then call the get_next_line function with a file descriptor as the argument. The function will return the next line from the file descriptor on each subsequent call, until there are no more lines to return.

## **Note**
This project uses some functions from the libft library, a project at 42 school where students create their own library of useful functions in C. The Makefile is used to compile the library with the project files.
