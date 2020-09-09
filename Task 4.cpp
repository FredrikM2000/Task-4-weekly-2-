#include <iostream>

int main()
{
    for (int i = 5;i <= 50;i++) {
        if (i % 5 == 0) {
            std::cout << "[" << i << "]";
        }
    }
}

