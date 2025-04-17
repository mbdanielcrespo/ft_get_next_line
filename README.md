# 📚 Get Next Line

![42 Badge](https://img.shields.io/badge/42-Get_Next_Line-brightgreen)
![Score](https://img.shields.io/badge/Score-115%2F100-success)
![Language](https://img.shields.io/badge/Language-C-blue)
![Status](https://img.shields.io/badge/Status-Completed-success)

<p align="center">
  <img src="https://raw.githubusercontent.com/byaliego/42-project-badges/main/badges/get_next_linem.png" alt="Get Next Line Badge" width="150" height="150">
</p>

## 📝 Introduction

Get Next Line (GNL) is a crucial project at 42 School that challenges students to implement a function capable of reading a line from a file descriptor. This seemingly simple task introduces fundamental concepts in file I/O operations, memory management, and static variables in C.

> "Reading a line from a fd is way too tedious" - This project solves that problem by creating a convenient function you'll likely use in many future projects.

This function will be an essential tool throughout your journey at 42, as it enables reading from files, standard input, or even network connections line by line.

## 🎯 Project Objectives

- Create a function that returns a line read from a file descriptor
- Learn about static variables in C
- Understand file descriptors and basic I/O operations
- Master dynamic memory allocation and management
- Implement buffer handling for efficient file reading
- Develop code that works regardless of buffer size

## 🛠️ Implementation Details

### Core Function

```c
char *get_next_line(int fd);
```

Returns a line read from a file descriptor, with the newline character included.

### Files Structure

| File | Description |
|----------|-------------|
| **get_next_line.c** | Main function implementation |
| **get_next_line.h** | Header with function prototypes and definitions |
| **get_next_line_utils.c** | Helper functions for the main implementation |

### Key Components

| Function | Description |
|----------|-------------|
| **get_next_line** | Main function that returns the next line from a file descriptor |
| **ft_read_st_save** | Reads from file descriptor into buffer and appends to static variable |
| **ft_get_line** | Extracts a line from the saved content |
| **ft_st_save** | Updates the static variable by removing the line just extracted |

## 💡 How It Works

1. **File Reading Process:**
   - The function reads `BUFFER_SIZE` bytes at a time from the file descriptor
   - Content is stored in a static variable to persist between function calls
   - Reading continues until a newline character is found or EOF is reached

2. **Line Extraction:**
   - When a newline is found, the function extracts everything up to and including the newline
   - The extracted line is returned to the caller
   - Remaining content stays in the static variable for the next call

3. **Memory Management:**
   - Dynamic memory allocation for the buffer and returned line
   - Careful freeing of memory to avoid leaks
   - Handling of edge cases (empty file, read errors, etc.)

## 🧪 Testing

The function was tested with:
- Various buffer sizes
- Multiple file descriptors simultaneously
- Binary files, empty files, and large text files
- Standard input and custom file descriptors

## 📋 Skills Developed

- File I/O operations in C
- Static variables and their appropriate use cases
- Dynamic memory allocation and management
- Buffer manipulation techniques
- Defensive programming and error handling
- Writing clean, maintainable code

---

<div align="center">
  
  ### 📊 Project Stats
  
  | Metric | Value |
  |--------|-------|
  | Final Score | 100/100 |
  | Functions Implemented | 4 |
  | Lines of Code | ~150 |
  | Completion Time | 1 week |
  
</div>

<p align="center">
  <img src="https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white" alt="C">
  <img src="https://img.shields.io/badge/42-000000?style=for-the-badge&logo=42&logoColor=white" alt="42">
</p>
