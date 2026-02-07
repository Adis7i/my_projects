#include <filesystem>
#include <unordered_map>
#include <iostream>
#include <functional>


enum class cmd_type {
    BUILT_IN,
    EXTERNAL
};

struct cmd {
    cmd_type cmdtype;
    std::function<void(const char**, int)> func;
};


void ls(const char** s) {

}

int main() {

}