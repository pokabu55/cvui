#include <opencv2/opencv.hpp>

#define CVUI_IMPLEMENTATION 
#include "cvui.h"

// ウィンドウの名前
#define WINDOW_NAME "CVUI Hello World!"

int main(void)
{
	cv::Mat frame = cv::Mat(200, 500, CV_8UC3);
	int count = 0;

	// OpenCVのウィンドウ名とそれをcvuiに教えてる
	cv::namedWindow(WINDOW_NAME);
	cvui::init(WINDOW_NAME);

	while (true) {
		// ウィンドウを埋める色 B, G, R
		frame = cv::Scalar(49, 52, 49);

		// ウィンドウ中のボタンの表示位置 左上原点
		if (cvui::button(frame, 110, 80, "Hello, world!")) {
			// The button was clicked, so let's increment our counter.
			count++;
		}

		// ウィンドウのテキスト表示位置、サイズ、色
		cvui::printf(frame, 250, 90, 0.4, 0xff0000, "Button click count: %d", count);

		// 表示のアップデート
		cvui::update();

		// 表示
		cv::imshow(WINDOW_NAME, frame);

		// ESCキーで終了
		if (cv::waitKey(20) == 27) {
			break;
		}
	}
	return 0;
}
