#include "ofMain.h"
#include "ReactickleApp.h"

int main(int argc, char *argv[]) {
	int w=320;
	int h=396;
	int mode=OF_FULLSCREEN;
#if !TARGET_OS_IPHONE
	CGRect thisMonitorArea = CGDisplayBounds(CGMainDisplayID());
	w = CGRectGetWidth(thisMonitorArea);
	h = CGRectGetHeight(thisMonitorArea);
#endif
	ofSetupOpenGL(w,h, mode);			// <-------- setup the GL context
	ofRunApp(new ReactickleApp);
}
