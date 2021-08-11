# raylib vscode project template for linux (2021)

### What you will need

- gdb `sudo apt install gdb`
- clang `sudo apt install clang`
- raylib

---

### Make file properties you will need to change

- `PROJECT_NAME` defualt is _game_
- `COMPILER_PATH` defualt is _/usr/bin/clang_
- `BUILD_MODE` defualt _RELEASE_
- `CC` (C compiler) defualt clang
- `OBJS` defualt _src/main.c_ (this is for your main file)

---

### c_cpp_properties

- `includePath` defualt _~/Documents/raylib/src/\*\*_ this is the location of where raylib is installed
