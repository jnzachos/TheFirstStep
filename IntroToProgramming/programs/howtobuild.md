# How to build a program

```bash
gcc myprogram.c -o myprogram
```

# Other options 

## Proprocessing
```bash
gcc -E myprogram.c -o myprogram.i
```

## Compilation
```bash
gcc -S myprogram.i -o myprogram.s
```

## Assembly
```bash
gcc -c myprogram.s -o myprogram.o
```

## Linking
```bash
gcc myprogram.o -o myprogram
```
