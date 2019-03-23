#include "ofMain.h"
#include "ofApp.h"

int main()
{
	ofSetLogLevel(OF_LOG_VERBOSE);
	ofSetupOpenGL(1920, 1280, OF_WINDOW);
	ofHideCursor();
	ofRunApp( new ofApp());
}
