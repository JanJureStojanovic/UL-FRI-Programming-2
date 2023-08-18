# Programming 2
This repository serves as a comprehensive collection of code and projects related to the "Programming 2" course offered at the ISRM and FRI undergraduate programs of University of Ljubljana.

## Folder structure
```
.
├── home_work
├── lab_exercises
├── lectures
├── revision
├── README.md
└── ...
```

- `home_work`:
    Home work assignments for the year 2022/23
- `lab_exercises`:
    Laboratoy exercices for each week of the semester for the year 2022/23
- `lectures`:
    Holds a summary of everything we learned in a README.md file 
- `revision`:
    Solved old exams and midterms

## Setup 
Every task with a working makefile and test units can be tested using the following sequence of commands:

```c
gcc -o FileName FileName.c
export name=FileName
make test
```

You can also run the program manually using the following sequence of commands:

```c
gcc -o FileName FileName.c
./FileName
```
