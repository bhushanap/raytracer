#include <iostream>

int main()

{
    const int image_width = 500;
    const int image_height = 500;

    std::cout << "P3\n" << image_width << ' ' << image_height << "\n255\n";

    for (int j = 0; j<image_height; ++j){
        for (int i=0; i<image_width; ++i){
            auto r = double(i) / (image_width-1);
            auto g = double(j) / (image_height-1);
            auto b = 0.25;

            int ir = static_cast<int>(255*r);
            int ig = static_cast<int>(255*g);
            int ib = static_cast<int>(255*b);

            std::cout << ir << ' ' << ig << ' ' << ib << '\n';
        }
    }
}