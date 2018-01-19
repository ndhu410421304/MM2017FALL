// 410421304_multimedia_hw3.cpp: 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include <opencv2/opencv.hpp>
#include <iostream>
#include <stdio.h>
#include <opencv\cxcore.h>
#include <opencv\highgui.h>
#include "math.h"


using namespace cv;
using namespace std;


int main()
{
	Mat i1 = imread("i1.pgm");
	Mat i2 = imread("i2.pgm");

	int i1cols = i1.cols;
	int i1rows = i1.rows;
	
	printf("rows:%d\n", i1rows);
	printf("cols:%d\n", i1cols);

	imshow("target", i1);
	imshow("reference", i2);
	
	cvWaitKey();
}

