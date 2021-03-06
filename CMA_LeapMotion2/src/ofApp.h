#pragma once

#include "ofMain.h"
#include "ofxLeapMotion2.h"

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
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
    void exit();
    
    ofxLeapMotion leap;
    vector <ofxLeapMotionSimpleHand> simpleHands; //„Ç∑„É≥„Éó„É´„Å™„Åù„ÅÆ„É¢„Éá„É´„ÅÆvectorÈÖçÂàó
    
    ofEasyCam cam; //easyCam„ÅÆ„Ç§„É≥„Çπ„Çø„É≥„Çπ
    
    vector <ofVec3f> fingerPos; //指や関節の位置を保存するvector配列
    
};
