#include <iostream>

int roll(int sides) {
    return 1 + ((double) rand()) / RAND_MAX * sides;
}

int main(int argc, char** argv) {

    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <dice...>" << std::endl;
        return 1;
    }

    srand(time(NULL));

    for (int i = 1; i < argc; ++i) {
        
        try {
            int sides = std::stoi(argv[i]);

            if (sides <= 0) {
                std::cerr << "E: Dice must have a positive number of sides." << std::endl;
                return 1;
            }

            int result = roll(sides);
            std::cout << "Die #" << i << "\t(" << sides << " sides)\t" << result << std::endl;

        }
        catch (std::exception& e) {
            std::cerr << "E: Invalid argument: " << argv[i] << std::endl;
            return 1;
        }
    }

    return 0;

}