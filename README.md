
# Quadratic Solver 🧮

## Project Name: Quadratic Solver

### Description 📝

Quadratic Solver is an efficient, easy-to-use command-line application designed for solving quadratic equations. It's built for students, educators, and anyone with a need to find roots of quadratic equations quickly. By providing a streamlined process for calculating and displaying solutions, this C program helps demystify quadratic equations for educational and practical purposes.

### Installation Instructions 🔧

#### Pre-requisites:

- GCC compiler
- Make (optional for ease of compilation)

#### Installation Steps:

1. Clone the repository:
```bash
git clone https://github.com/Wal33D/Quadratic-Solver.git
```
2. Navigate to the project directory:
```bash
cd Quadratic-Solver
```
3. Compile the program using the provided Makefile:
```bash
make
```
   Or manually compile:
```bash
gcc -o solveQuad main.c discriminant.c input.c output.c quadSolver.c root.c -lm
```

### Usage 🚀

After compilation, run the program:
```bash
./solveQuad
```
Follow the prompts to enter coefficients (a, b, and c) for your quadratic equation.

### Features ✨

- **Real-time Solutions:** Calculates roots for any given quadratic equation instantly.
- **Simplicity:** Command-line interface for straightforward interaction.
- **Educational Value:** Great for learning and teaching the fundamentals of quadratic equations.

### Configuration ⚙️

The Makefile is configured to compile all necessary files and link the math library using `-lm`. No further configuration is needed.

### Contribution Guidelines 🤝

Contributions are welcome! To contribute:

- Fork the repository.
- Create a feature branch.
- Commit and push your changes.
- Make a pull request.

### License 📜

This project is open-sourced under the MIT License.


QuadSolver
==========

Solves the quadratic equation to a 10E-7 degree of precision.
Problem Statement

Given a quadratic equation as follows:

![alt tag](readme/2.png)


if b*b-4*a*c is non-negative, the roots of the equation can be solved with the following formulae:

![alt tag](readme/1.png)
