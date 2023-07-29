#include <opencv2/opencv.hpp>
#include <iostream>

int main() {
    cv::Mat image = cv::imread("/home/pranav8joseph/visu.jpg");
    if (image.empty()) {
        std::cout << "Error: Image not found or cannot be read.\n";
        return -1;
    }

    // Get the image dimensions
    int imageWidth = image.cols;
    int imageHeight = image.rows;

    // Create a window to display the image
    cv::namedWindow("Test Image", cv::WINDOW_NORMAL);

    // Set the window size based on the image dimensions
    cv::resizeWindow("Test Image", imageWidth, imageHeight);

    // Display the image in the window
    cv::imshow("Test Image", image);
    cv::waitKey(0);

    return 0;
}




// #include <opencv2/opencv.hpp>
// #include <iostream>

// int main() {
//     cv::Mat image = cv::imread("/home/pranav8joseph/visu.jpg");
//     if (image.empty()) {
//         std::cout << "Error: Image not found or cannot be read.\n";
//         return -1;
//     }

//     cv::imshow("Test Image", image);
//     cv::waitKey(0);

//     return 0;
// }