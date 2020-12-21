#include "./vec3.h"
#include "./color.h"

#include <iostream>
#include <iomanip>

int main() {
    const int width = 256;
    const int height = 256;
    
    std::cout << "P3\n" << width << ' ' << height << "\n255\n";

    for(int i = height - 1; i >= 0; i--) {
        // Status bar
        std::cerr << std::fixed << std::setprecision(1) << double(height - 1 - i) / height * 100 << "% done\n";

        for(int j = 0; j < width; j++) {
            color pixel_color(double(j) / (width - 1), double(i) / (height - 1), 0.25);
            write_color(std::cout, pixel_color);
        }
    }
    std::cerr << "Done!\n";
    return 0;
}
