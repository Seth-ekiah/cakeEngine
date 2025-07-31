{
    files = {
        "src/core/main.cpp"
    },
    depfiles_gcc = "main.o: src/core/main.cpp src/core/../math/matrix.hpp\
",
    values = {
        "/usr/bin/gcc",
        {
            "-m64",
            "-fvisibility=hidden",
            "-fvisibility-inlines-hidden",
            "-O3",
            "-DNDEBUG"
        }
    }
}