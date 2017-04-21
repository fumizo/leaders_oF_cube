#pragma once

#include "ofMain.h"
#include "ofxGui.h"

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
    void rgbChanged(int & r);
    void hsvChanged(int & g);
    
    int h, s, v = 255;
    int r, g, b = 255;
    
    ofxPanel rgb1, rgb2, rgb3, rgb4, rgb5, rgb6;
    ofxPanel hsv1, hsv2, hsv3, hsv4, hsv5, hsv6;
    ofxIntSlider one1, one2, one3, two1, two2, two3;
    ofxIntSlider three1, three2, three3, four1, four2, four3;
    ofxIntSlider five1, five2, five3, six1, six2, six3;
    ofxIntSlider hone1, hone2, hone3, htwo1, htwo2, htwo3;
    ofxIntSlider hthree1, hthree2, hthree3, hfour1, hfour2, hfour3;
    ofxIntSlider hfive1, hfive2, hfive3, hsix1, hsix2, hsix3;
    
    bool changingRgb, changingHsv = false;
    
    ofEasyCam camera;
};
