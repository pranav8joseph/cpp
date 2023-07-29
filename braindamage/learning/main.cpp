#include <iostream>
#include <opencv2/opencv.hpp>
#include <ctime>

int main() {
    // Replace 'OBS_NINJA_URL' with the actual URL of the video feed from OBS.Ninja
    std::string videoUrl = "https://vdo.ninja/?view=yebu48u&label=hello";


    // Create a window to display the video
    cv::namedWindow("Video", cv::WINDOW_AUTOSIZE);

    // Open the video stream from OBS.Ninja using the FFMPEG backend
    cv::VideoCapture cap(videoUrl, cv::CAP_FFMPEG);
    if (!cap.isOpened()) {
        std::cerr << "Error: Could not open video stream from OBS.Ninja." << std::endl;
        return 1;
    }

    while (true) {
        cv::Mat frame;
        cap >> frame; // Read a frame from the video stream

        if (frame.empty()) {
            std::cerr << "Error: Video stream from OBS.Ninja ended unexpectedly." << std::endl;
            break;
        }

        // Your OpenCV processing on 'frame' goes here
        // Example: cv::imshow("Video", frame);

        char key = cv::waitKey(1);
        if (key == 27) { // Press 'Esc' to exit
            break;
        }
    }

    // Release the video capture and close the OpenCV window
    cap.release();
    cv::destroyAllWindows();
    return 0;
}


















// // https://vdo.ninja/?view=yebu48u&label=hello

// #include <iostream>
// #include <opencv2/opencv.hpp>

// int main() {
//     // Replace 'OBS_NINJA_URL' with the actual URL of the video feed from OBS.Ninja
//     std::string videoUrl = "https://vdo.ninja/?view=yebu48u&label=hello";

//     // Open the video stream from OBS.Ninja
//     cv::VideoCapture cap(videoUrl);
//     if (!cap.isOpened()) {
//         std::cerr << "Error: Could not open video stream from OBS.Ninja." << std::endl;
//         return 1;
//     }

//     // Create a window to display the video
//     cv::namedWindow("Video", cv::WINDOW_AUTOSIZE);

//     while (true) {
//         cv::Mat frame;
//         cap >> frame; // Read a frame from the video stream

//         if (frame.empty()) {
//             std::cerr << "Error: Video stream from OBS.Ninja ended unexpectedly." << std::endl;
//             break;
//         }

//         // Your OpenCV processing on 'frame' goes here
//         // Example: cv::imshow("Video", frame);

//         char key = cv::waitKey(1);
//         if (key == 27) { // Press 'Esc' to exit
//             break;
//         }
//     }

//     // Release the video capture and close the OpenCV window
//     cap.release();
//     cv::destroyAllWindows();
//     return 0;
// }