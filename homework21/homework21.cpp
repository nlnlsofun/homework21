#include <iostream>
#include <iomanip> 
#include <limits>  

int main() {
    const int N = 10;
    float input[N];
    float max = std::numeric_limits<float>::min();
    float min = std::numeric_limits<float>::max();


    for (int i = 0; i < N; i++) {
        std::cin >> input[i];

        if (input[i] > max) {
            max = input[i];
        }
        if (input[i] < min) {
            min = input[i];
        }
    }


    std::cout << std::fixed << std::setprecision(2) << max << " " << min << std::endl;

    return 0;
}
