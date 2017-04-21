#include "ofApp.h"
#define BOX_SIZE 100

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetLogLevel(OF_LOG_VERBOSE);
    
    rgb1.setup();
    rgb1.setSize(200, 18);
    rgb1.setPosition(ofPoint(0, 0));
    rgb1.add(one1.setup("Red", 255, 0, 255));
    rgb1.add(one2.setup("Green", 0, 0, 255));
    rgb1.add(one3.setup("Blue", 0, 0, 255));
    
    rgb2.setup();
    rgb2.setSize(200, 18);
    rgb2.setPosition(ofPoint(0, 80));
    rgb2.add(two1.setup("Red", 0, 0, 255));
    rgb2.add(two2.setup("Green", 255, 0, 255));
    rgb2.add(two3.setup("Blue", 0, 0, 255));
    
    rgb3.setup();
    rgb3.setSize(200, 18);
    rgb3.setPosition(ofPoint(0, 160));
    rgb3.add(three1.setup("Red", 0, 0, 255));
    rgb3.add(three2.setup("Green", 0, 0, 255));
    rgb3.add(three3.setup("Blue", 255, 0, 255));
    
    rgb4.setup();
    rgb4.setSize(200, 18);
    rgb4.setPosition(ofPoint(0, 240));
    rgb4.add(four1.setup("Red", 255, 0, 255));
    rgb4.add(four2.setup("Green", 255, 0, 255));
    rgb4.add(four3.setup("Blue", 0, 0, 255));
    
    rgb5.setup();
    rgb5.setSize(200, 18);
    rgb5.setPosition(ofPoint(0, 320));
    rgb5.add(five1.setup("Red", 255, 0, 255));
    rgb5.add(five2.setup("Green", 0, 0, 255));
    rgb5.add(five3.setup("Blue", 255, 0, 255));
    
    rgb6.setup();
    rgb6.setSize(200, 18);
    rgb6.setPosition(ofPoint(0, 400));
    rgb6.add(six1.setup("Red", 0, 0, 255));
    rgb6.add(six2.setup("Green", 255, 0, 255));
    rgb6.add(six3.setup("Blue", 255, 0, 255));
    
    hsv1.setup();
    hsv1.setSize(200, 18);
    hsv1.setPosition(ofPoint(ofGetWidth()-200, 0));
    hsv1.add(hone1.setup("Hue", 255, 0, 255));
    hsv1.add(hone2.setup("Saturation", 0, 0, 255));
    hsv1.add(hone3.setup("Brightness", 0, 0, 255));
    
    hsv2.setup();
    hsv2.setSize(200, 18);
    hsv2.setPosition(ofPoint(ofGetWidth()-200, 80));
    hsv2.add(htwo1.setup("Hue", 0, 0, 255));
    hsv2.add(htwo2.setup("Saturation", 255, 0, 255));
    hsv2.add(htwo3.setup("Brightness", 0, 0, 255));
    
    hsv3.setup();
    hsv3.setSize(200, 18);
    hsv3.setPosition(ofPoint(ofGetWidth()-200, 160));
    hsv3.add(hthree1.setup("Hue", 0, 0, 255));
    hsv3.add(hthree2.setup("Saturation", 0, 0, 255));
    hsv3.add(hthree3.setup("Brightness", 255, 0, 255));
    
    hsv4.setup();
    hsv4.setSize(200, 18);
    hsv4.setPosition(ofPoint(ofGetWidth()-200, 240));
    hsv4.add(hfour1.setup("Hue", 255, 0, 255));
    hsv4.add(hfour2.setup("Saturation", 255, 0, 255));
    hsv4.add(hfour3.setup("Brightness", 0, 0, 255));
    
    hsv5.setup();
    hsv5.setSize(200, 18);
    hsv5.setPosition(ofPoint(ofGetWidth()-200, 320));
    hsv5.add(hfive1.setup("Hue", 255, 0, 255));
    hsv5.add(hfive2.setup("Saturation", 0, 0, 255));
    hsv5.add(hfive3.setup("Brightness", 255, 0, 255));
    
    hsv6.setup();
    hsv6.setSize(200, 18);
    hsv6.setPosition(ofPoint(ofGetWidth()-200, 400));
    hsv6.add(hsix1.setup("Hue", 0, 0, 255));
    hsv6.add(hsix2.setup("Saturation", 255, 0, 255));
    hsv6.add(hsix3.setup("Brightness", 255, 0, 255));
    
    one1.addListener(this, &ofApp::rgbChanged);
    one2.addListener(this, &ofApp::rgbChanged);
    one3.addListener(this, &ofApp::rgbChanged);
    two1.addListener(this, &ofApp::rgbChanged);
    two2.addListener(this, &ofApp::rgbChanged);
    two3.addListener(this, &ofApp::rgbChanged);
    three1.addListener(this, &ofApp::rgbChanged);
    three2.addListener(this, &ofApp::rgbChanged);
    three3.addListener(this, &ofApp::rgbChanged);
    four1.addListener(this, &ofApp::rgbChanged);
    four2.addListener(this, &ofApp::rgbChanged);
    four3.addListener(this, &ofApp::rgbChanged);
    five1.addListener(this, &ofApp::rgbChanged);
    five2.addListener(this, &ofApp::rgbChanged);
    five3.addListener(this, &ofApp::rgbChanged);
    six1.addListener(this, &ofApp::rgbChanged);
    six2.addListener(this, &ofApp::rgbChanged);
    six3.addListener(this, &ofApp::rgbChanged);
    
    hone1.addListener(this, &ofApp::hsvChanged);
    hone2.addListener(this, &ofApp::hsvChanged);
    hone3.addListener(this, &ofApp::hsvChanged);
    
    htwo1.addListener(this, &ofApp::hsvChanged);
    htwo2.addListener(this, &ofApp::hsvChanged);
    htwo3.addListener(this, &ofApp::hsvChanged);
    
    hthree1.addListener(this, &ofApp::hsvChanged);
    hthree2.addListener(this, &ofApp::hsvChanged);
    hthree3.addListener(this, &ofApp::hsvChanged);
    
    hfour1.addListener(this, &ofApp::hsvChanged);
    hfour2.addListener(this, &ofApp::hsvChanged);
    hfour3.addListener(this, &ofApp::hsvChanged);
    
    hfive1.addListener(this, &ofApp::hsvChanged);
    hfive2.addListener(this, &ofApp::hsvChanged);
    hfive3.addListener(this, &ofApp::hsvChanged);
    
    hsix1.addListener(this, &ofApp::hsvChanged);
    hsix2.addListener(this, &ofApp::hsvChanged);
    hsix3.addListener(this, &ofApp::hsvChanged);
    
    
}

//--------------------------------------------------------------
void ofApp::update(){
    //one1.addListener(this, &testApp::rgbChanged);
}

void ofApp::rgbChanged(int & data){
    
    if (changingHsv) return;
    
    changingRgb = true;
    
    ofColor color1;
    color1.set(one1, one2, one3);
    hone1 = color1.getHue();
    hone2 = color1.getSaturation();
    hone3 = color1.getBrightness();
    
    
    ofColor color2;
    color2.set(two1, two2, two3);
    htwo1 = color2.getHue();
    htwo2 = color2.getSaturation();
    htwo3 = color2.getBrightness();
    
    
    ofColor color3;
    color3.set(three1, three2, three3);
    hthree1 = color3.getHue();
    hthree2 = color3.getSaturation();
    hthree3 = color3.getBrightness();
    
    
    ofColor color4;
    color4.set(four1, four2, four3);
    hfour1 = color4.getHue();
    hfour2 = color4.getSaturation();
    hfour3 = color4.getBrightness();
    
    
    ofColor color5;
    color5.set(five1, five2, five3);
    hfive1 = color5.getHue();
    hfive2 = color5.getSaturation();
    hfive3 = color5.getBrightness();
    
    
    ofColor color6;
    color6.set(six1, six2, six3);
    hsix1 = color6.getHue();
    hsix2 = color6.getSaturation();
    hsix3 = color6.getBrightness();
    
    changingRgb = false;
}

void ofApp::hsvChanged(int & data){
    
    if (changingRgb) return;
    
    changingHsv = true;
    
    ofColor color1;
    color1.setHsb(hone1, hone2, hone3);
    one1 = color1.r;
    one2 = color1.g;
    one3 = color1.b;
    
    ofColor color2;
    color2.setHsb(htwo1, htwo2, htwo3);
    two1 = color2.r;
    two2 = color2.g;
    two3 = color2.b;
    
    ofColor color3;
    color3.setHsb(hthree1, hthree2, hthree3);
    three1 = color3.r;
    three2 = color3.g;
    three3 = color3.b;
    
    ofColor color4;
    color4.setHsb(hfour1, hfour2, hfour3);
    four1 = color4.r;
    four2 = color4.g;
    four3 = color4.b;
    
    ofColor color5;
    color5.setHsb(hfive1, hfive2, hfive3);
    five1 = color5.r;
    five2 = color5.g;
    five3 = color5.b;
    
    ofColor color6;
    color6.setHsb(hsix1, hsix2, hsix3);
    six1 = color6.r;
    six2 = color6.g;
    six3 = color6.b;
    
    changingHsv = true;
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(0);
    
    ofPushMatrix();
    
    ofSetColor(255, 255, 255, 255);
    ofDrawLine(200, 40, 250, 40);
    ofDrawLine(200, 120, 250, 120);
    ofDrawLine(200, 200, 250, 200);
    ofDrawLine(200, 280, 250, 280);
    ofDrawLine(200, 360, 250, 360);
    ofDrawLine(200, 440, 250, 440);
    
    ofSetColor(one1, one2, one3);
    ofDrawLine(ofVec3f(250, 40), camera.worldToScreen(ofVec3f(0, 0, BOX_SIZE/2)));
    ofDrawLine(ofVec3f(ofGetWidth()-250, 40), camera.worldToScreen(ofVec3f(0, 0, BOX_SIZE/2)));
    ofSetColor(two1, two2, two3);
    ofDrawLine(ofVec3f(250, 120), camera.worldToScreen(ofVec3f(0, 0, -BOX_SIZE/2)));
    ofDrawLine(ofVec3f(ofGetWidth()-250, 120), camera.worldToScreen(ofVec3f(0, 0, -BOX_SIZE/2)));
    ofSetColor(three1, three2, three3);
    ofDrawLine(ofVec3f(250, 200), camera.worldToScreen(ofVec3f(0, -BOX_SIZE/2, 0)));
    ofDrawLine(ofVec3f(ofGetWidth()-250, 200), camera.worldToScreen(ofVec3f(0, -BOX_SIZE/2, 0)));
    ofSetColor(four1, four2, four3);
    ofDrawLine(ofVec3f(250, 280), camera.worldToScreen(ofVec3f(0, BOX_SIZE/2, 0)));
    ofDrawLine(ofVec3f(ofGetWidth()-250, 280), camera.worldToScreen(ofVec3f(0, BOX_SIZE/2, 0)));
    ofSetColor(five1, five2, five3);
    ofDrawLine(ofVec3f(250, 360), camera.worldToScreen(ofVec3f(BOX_SIZE/2, 0, 0)));
    ofDrawLine(ofVec3f(ofGetWidth()-250, 360), camera.worldToScreen(ofVec3f(BOX_SIZE/2, 0, 0)));
    ofSetColor(six1, six2, six3);
    ofDrawLine(ofVec3f(250, 440), camera.worldToScreen(ofVec3f(-BOX_SIZE/2, 0, 0)));
    ofDrawLine(ofVec3f(ofGetWidth()-250, 440), camera.worldToScreen(ofVec3f(-BOX_SIZE/2, 0, 0)));
    
    
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2, 0);
    camera.begin();
    
    ofEnableDepthTest();
    
    ofSetColor(one1, one2, one3);
    ofDrawRectangle(-BOX_SIZE/2, -BOX_SIZE/2, BOX_SIZE/2, BOX_SIZE, BOX_SIZE);
    ofSetColor(two1, two2, two3);
    ofDrawRectangle(-BOX_SIZE/2, -BOX_SIZE/2, -BOX_SIZE/2, BOX_SIZE, BOX_SIZE);
    ofRotateX(90);
    ofSetColor(three1, three2, three3);
    ofDrawRectangle(-BOX_SIZE/2, -BOX_SIZE/2, BOX_SIZE/2, BOX_SIZE, BOX_SIZE);
    ofSetColor(four1, four2, four3);
    ofDrawRectangle(-BOX_SIZE/2, -BOX_SIZE/2, -BOX_SIZE/2, BOX_SIZE, BOX_SIZE);
    ofRotateY(90);
    ofSetColor(five1, five2, five3);
    ofDrawRectangle(-BOX_SIZE/2, -BOX_SIZE/2, BOX_SIZE/2, BOX_SIZE, BOX_SIZE);
    ofSetColor(six1, six2, six3);
    ofDrawRectangle(-BOX_SIZE/2, -BOX_SIZE/2, -BOX_SIZE/2, BOX_SIZE, BOX_SIZE);
    
    camera.end();
    
    ofPopMatrix();
    
    ofDisableDepthTest();
    
    ofSetColor(255,255,255,255);
    rgb1.draw();
    rgb2.draw();
    rgb3.draw();
    rgb4.draw();
    rgb5.draw();
    rgb6.draw();
    hsv1.draw();
    hsv2.draw();
    hsv3.draw();
    hsv4.draw();
    hsv5.draw();
    hsv6.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    if (w < 600) {
        ofVec2f windowPosition = ofVec2f(ofGetWindowPositionX(), ofGetWindowPositionY());
        ofSetWindowShape(600, h);
        ofSetWindowPosition(windowPosition.x, windowPosition.y);
    }
    if (h < 400) {
        ofVec2f windowPosition = ofVec2f(ofGetWindowPositionX(), ofGetWindowPositionY());
        ofSetWindowShape(w, 400);
        ofSetWindowPosition(windowPosition.x, windowPosition.y);
    }
    
    //hsvGui.setPosition(ofPoint(w-200, 0));
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){
    
}
