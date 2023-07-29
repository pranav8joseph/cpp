#include <opencv2/opencv.hpp>
#include <iostream>

int main() {
    cv::Mat image = cv::imread("C:/Users/prana/OneDrive/Desktop/visu.jpg");
    if (image.empty()) {
        std::cout << "Error: Image not found or cannot be read.\n";
        return -1;
    }

    cv::imshow("Test Image", image);
    cv::waitKey(0);

    return 0;
}