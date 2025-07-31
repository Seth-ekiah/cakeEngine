{
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
    depfiles_gcc = "matrix.o: src/math/matrix.cpp src/math/matrix.hpp src/math/vector.hpp\
",
    files = {
        "src/math/matrix.cpp"
    }
}