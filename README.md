# 🚀 Rocket Assembly: Assemble Your Way to the Stars!

Welcome to Rocket Assembly, the most interstellar assembly project in the galaxy. With Rocket Assembly, you can create stellar programs using nothing but assembly language. Whether you're an old-school programmer who misses the good ol' days or a brave adventurer looking to explore new frontiers, Rocket Assembly is your spaceship. Strap in, and get ready to take off!

## 🛠️ Setting Up Your Mission Control Center

1. **Install YASM**: We'll be using YASM which is a complete rewrite of the Netwide Assembler (NASM), an open-source assembler that many consider the standard for x86-64 assembly on Unix. Install it with the following commands:

   On Ubuntu:
   ```
   sudo apt-get update
   sudo apt-get install yasm
   ```
   
   On macOS:
   ```
   brew install yasm
   ```

2. **Clone This Repository**: Grab a local copy of the mission control center (aka this repository) to your computer using git:
   ```
   git clone https://github.com/SJ-Jordaan/rocket-assembly.git
   cd rocket-assembly
   ```

3. **Explore the Folders**: Venture through the following key directories:
    - `src`: This is your launchpad. All your assembly code files (.asm) live here.
    - `inc`: This is your toolbox. It contains all your include files (.inc) with macros and system call numbers.
    - `obj`: This is where all the assembled object files (.o) will be placed, ready to be linked into an executable.
    - `bin`: This is your spaceship. This is where your final executable files will be placed, ready for launch!

## 📝 Writing Your First Space Program

Ready to write your first assembly space program? Here's how you do it:

1. **Create a New Assembly File**: In the `src` folder, create a new file with the `.asm` extension. For example: `nano src/hello.asm`

2. **Write Your Assembly Code**: Start writing your assembly code. For example:
    ```
    %include "../inc/macros.inc"

    section .data
    hello db 'Hello, world!', 0

    section .text
    global _start
    _start:
        output hello, 13
        mov eax, 60
        xor edi, edi
        syscall
    ```

3. **Build Your Program**: Back in the root directory, use `make` to compile your assembly code:
    ```
    make
    ```

4. **Launch Your Program**: Run your new program from the root directory:
    ```
    make run
    ```

And voila! You've just launched your first assembly space program! 🚀

## 🎉 Celebrate and Keep Exploring

Congrats, Astronaut! You're now a certified assembly space explorer. Keep writing more assembly code, launching more programs, and reaching for the stars. Who knows what new galaxies you'll discover?

Remember: Assembly might seem like a wild, unfamiliar planet at first, but with practice and exploration, you'll soon be calling it home. 

Happy Assembling, and may your registers never overflow! 🚀
