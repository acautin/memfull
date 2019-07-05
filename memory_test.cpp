#include <iostream>
#include <vector>

void log(const char *);
char *allocate(size_t);

int main() {
    unsigned size_mb;
    std::cout << "Please enter the block size (in MB): ";
    std::cin >> size_mb;
    size_t block_size = 1024 * 1024 * size_mb;
    int input_char;

    std::vector<char *> blocks;

    char *block;

    while (true) {
        std::cout << "Enter '+' to allocate and '-' to release a block of memory" << std::endl;
        do {
            input_char = getchar();
            switch (input_char) {
            case '-':
                free(blocks.back());
                blocks.pop_back();
                log("released a block of memory");
                break;
            case '+':
                block = allocate(block_size);
                if(block != nullptr) {
                    blocks.push_back(block);
                }
                break;
            }
        } while (input_char != '+' && input_char != '-');
    }
    return 0;
}

void log(const char *line) { std::cout << line << std::endl; }

char *allocate(size_t block_size) {
    log("Reserving a block of memory");
    char *block = (char *)malloc(block_size);
    if (block == nullptr) {
        log("Failed to allocate memory");
    } else{
        log("Memory allocated, filling with random characters");
        for (size_t i = 0; i < block_size; ++i) {
            block[i] = rand() % 256;
        }
    }
    return block;
}
