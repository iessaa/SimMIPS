# SimMIPS

## What is SimMIPS?

SimMIPS is a simulator for the MIPS 1 ISA written in C++.

The project started as part of our second year Computer Architecture coursework as students studying Electronic and Information Engineering at Imperial College London.

Since then, we have continued to work on the project, fixing errors and adding more features.

This was a collaboration between:

### Archibald Crichton

github: [ALGCDG](https://github.com/ALGCDG)

personal website: https://www.doc.ic.ac.uk/~ac11018/

### Jonathan Paynter

github: [jrpdotjpg](https://github.com/jrpdotjpg)

personal website:

## Build and use instructions

To build the simulator, run the following command:

`make simulator`

This produces a binary file bin/mips_simulator 

The simulator runs MIPS 1 binary code. To run the binary, we pass its file path as an argument.

for example, if I wished to run a file bin/binary.mips.bin, I would write the following command 

`bin/mips_simulator bin/binary.mips.bin`

## Simulator

The program simulates a MIPS 1 device with simple text input ouput. 

To see the full list of implemented instructions, look [here](instructions.md)

### Memory Map

| Memory Regions| Offset     | Length    |  Permission  |
| ------------- |:----------:| ---------:|-------------:|
| NULL          | 0x00000000 | 0x4       |      X       |
| Instruction   | 0x10000000 | 0x1000000 |      RX      |
| Data          | 0x20000000 | 0x4000000 |      RW      |
| Getc          | 0x30000000 |    0x4    |      R       |
| Putc          | 0x30000004 |    0x4    |      W       |

`
X : Execute permission
R : Read permission
W : Write permission
`

Text inputs and outputs are memory mapped with the getc and putc addresses.

## Testbench

The testbench is a collection of MIPS assembly and C code snippets. A bashscript file then compiles these, runs them with the simulator and compares both the expected text output and return code with a reference.

The compilation process uses mips-linux-gnu-gcc and mips-linux-gnu-as. These must both be installed to create the testbench.

### Memory Drivers

Something we are particularly proud of is the memory drivers Archie wrote. This allowed us to write more advanced tests far more easily.
Good learning experience.

## What has changed since the coursework?

Our professor's assessment was very possitive, and only reported 4 minor errors.

- BGEZAL - our simulator linked conditionally.
- LB - Confused Error Code, returning invalid instruction instead of invalid memory access when reading NULL address
- LBU - Confused Error Code,  returning invalid instruction instead of invalid memory access when reading NULL address
- LH - Don't know yet

## What next?

- Fix the minor errors
- Implement Floating Point registers and instructions
- Implement Coprocessor support
- Implement a region of memory for MMIO of Graphical output
- Audio output
- Interpreted Mode
