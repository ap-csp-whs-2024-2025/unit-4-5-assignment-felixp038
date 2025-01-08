[![Open in Codespaces](https://classroom.github.com/assets/launch-codespace-2972f46106e565e64193e422d61a12cf1da4916b45550586e14ef0a7c637dd04.svg)](https://classroom.github.com/open-in-codespaces?assignment_repo_id=17651047)
# unit-4-5-assignment

## To compile code
All code must be compiled before you can run it.  To compile means that you are converting your C++ code into a language that the computer can understand (e.g., binary).  To compile C++ code, run the following command in a terminal:
```
g++ fileName.cpp -o outFileName
```
This tells the C++ compiler to compile your file named `fileName.cpp`, and output it (`-o`) as a file named `outFileName`.

## To run code
After you have compiled the code, run your output file by running
```
./outFileName
```

## Compile and Run Example
Suppose I have a file named `classwork.cpp`.  I compile and run the file by doing
```
g++ classwork.cpp -o output
./output
```

# Instructions
Do the following in the file named `homework.cpp`

## Task 1
Create a list (vector) of ints, doubles, and strings.  Make sure each list has at least 5 elements in it.

## Task 2
Manually display the elements at index 0, 2, and 4 of your list of ints.

## Task 3
Use the provided `displayList()` procedure to display your list of strings.  Then, append your name to the list of strings using the `push_back()` procedure, and display it again.

## Task 4
Use the provided `displayList()` procedure to display your list of doubles.  Then, remove the last element of the list using the `pop_back()` procedure, and display it again.
