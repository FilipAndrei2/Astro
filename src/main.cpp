#include <iostream>

#include "core/global.hpp"

namespace Filip {
    int Main(int argc, char** args)
    {
        std::cout << "Salut din Filip main!" << std::endl;
        return EXIT_SUCCESS;
    }
}

int main(int argc, char** args)
{
    return Filip::Main(argc, args);
}