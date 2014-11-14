#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    private:
        ofVideoGrabber 	videoStream;
        unsigned char ** videoData;
        unsigned char ** slitData;
        int numberOfFramesToRecord;
        int maximumNumberOfFramesToRecord;
        int numberRecorded;
        ofTexture delayed;
        ofTexture * videoTextures;
        unsigned char * slitXAxis;
        ofTexture slitTexture;
        bool reverse;
        struct Portion ** Portions;
        int maximumNumberOfPortions;
        int imageWidth, imageHeight, imageColors;
        int portionWidth, portionHeight, portionModulus;
        float zoom;
        int numberOfPortions;
        ofTrueTypeFont Verdana;
};
