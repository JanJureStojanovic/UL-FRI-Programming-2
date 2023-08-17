# Programming 2
This repository serves as a comprehensive collection of code and projects related to the "Programming 2" course offered at the ISRM and FRI undergraduate programs of University of Ljubljana.

## Folder structure
```
.
├── home_work
├── lab_exercices
├── lectures
├── revision
├── README.md
└── ...

```

- `home_work`:
    Contains this years home work assignments that I rarely did
- `lab_exercices`:
    Contains this years laboratoy exercices for each week
- `lectures`:
    Contains a summary in a README.md file of everything we learned
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
