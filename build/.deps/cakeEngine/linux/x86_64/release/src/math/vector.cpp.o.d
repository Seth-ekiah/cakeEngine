{
    files = {
        "src/math/vector.cpp"
    },
    depfiles_gcc = "vector.o: src/math/vector.cpp src/math/vector.hpp\
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