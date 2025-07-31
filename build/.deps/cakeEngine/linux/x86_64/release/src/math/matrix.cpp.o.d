{
    depfiles_gcc = "matrix.o: src/math/matrix.cpp\
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
    },
    files = {
        "src/math/matrix.cpp"
    }
}