#pragma once

#include "ofxCv.h"
#include "ofMain.h"
#include "ofxOMXVideoGrabber.h"
#include "ofxOpenCv.h"

class ofApp : public ofBaseApp {

	public:

		void setup();
		void update();
		void draw();
    
		void keyPressed(int key);

		ofxCv::ContourFinder contourFinder;
		
		ofxOMXVideoGrabber videoGrabber;
		ofxOMXCameraSettings settings;
		
		bool detected, cycleMode, drawContours;
		int elapsed, lastCapture, capCounter, imCntr;
		
		int w, h, vW, vH, thresholdValue, minArea, maxArea;
		float alpha, drawScale;
		
		cv::Mat bgMat, frameMat, accumMat, accumMatScaled, diffMat, greyMat, alpha255, thresh, imgSwitch;
		
		ofPixels previous;
		ofImage backgroundOutputImage, diff, diff1;
		
		ofPath path;
		ofFbo fbo;
		
		//Custom variables for on screen string and font.
        string msg;
        ofTrueTypeFont font;
        
        //New serial object.
        ofSerial serial;
        
        //int for storing the byte data from Arduino.
		int byteData, distBlur;

};

