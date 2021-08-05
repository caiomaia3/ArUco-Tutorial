#include <stdio.h>
#include <opencv4/opencv2/opencv.hpp>
#include <opencv4/opencv2/aruco.hpp>

using namespace cv;
void read_markers();


int main(int argc, char** argv )
{
	read_markers();
}




void read_markers() {
	std::string image_path = cv::samples::findFile("../singlemarkersoriginal.jpg");
	cv::Mat inputImage;
	inputImage = cv::imread(image_path,IMREAD_COLOR);
	// cv::aruco::drawMarker(dictionary, 23, 200, markerImage, 1);
	// cv::imwrite("marker23.png", markerImage);
	std::vector<int> markersId;
	std::vector<std::vector<cv::Point2f>> markerCorners, rejectedCandidates;
	cv::Ptr<cv::aruco::DetectorParameters> parameters = cv::aruco::DetectorParameters::create();
	cv::Ptr<cv::aruco::Dictionary> dictionary = cv::aruco::getPredefinedDictionary(cv::aruco::DICT_6X6_250);
	cv::aruco::detectMarkers(inputImage,dictionary,markerCorners,markersId,parameters,rejectedCandidates);
	cv::Mat outputImage = inputImage.clone();
	cv::aruco::drawDetectedMarkers(outputImage,markerCorners,markersId);
	cv::imshow("out", outputImage);
	cv::waitKey(0);
}


void video_detection(){
	cv::VideoCapture inputVideo;
	
}