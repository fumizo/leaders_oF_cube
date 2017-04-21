#include "ofApp.h"

float move_x; //円のx座標
float move_y; //円のy座標

float speed_x;
float speed_y;

float color_r;
float color_g;
float color_b;

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0, 0, 0);
//    ofSetColor(25, 135, 233); //青
    
    ofSetFrameRate(60);
    ofSetCircleResolution(50);
    
    move_x = 100;
    move_y = 200;
    
    speed_x = 10;
    speed_y = 10;
    
    color_r = 0;
    color_g = 0;
    color_b = 0;

}

//--------------------------------------------------------------
void ofApp::update(){
    
    move_x = move_x + speed_x ;
    move_y = move_y + speed_y ;
    
    color_r = move_x* 255/ofGetWidth();
    color_g = move_y* 255/ofGetHeight();
    color_b = move_x* 255/ofGetWidth();
    

    if (move_y > ofGetHeight() -50 ) {
        speed_y = speed_y * -1;
    }
    if (move_y < 0 +50) {
        speed_y = speed_y * -1;
    }
    if (move_x > ofGetWidth() -50) {
        speed_x = speed_x * -1;
    }
    if (move_x < 0 +50) {
        speed_x = speed_x * -1;
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(color_r, color_g, color_b);
    ofDrawCircle(move_x, move_y, 50);
    
    /*
    ofSetColor(30, 140, 230, 100); //青
    ofDrawLine(100, 100, 800, 600);
    //スタートx,y , ゴールのx,y
    
    ofSetColor(30, 130, 50, 150); //緑
    ofDrawRectangle(200, 300, 300, 300);
    //左上のx,y ,四角形の幅,高さ
    
    ofSetColor(240, 200, 50, 125); //黄
    ofDrawCircle(700, 200, 100);
    //中心のx,y , 半径の長さ
    
    ofSetColor(210, 25, 20, 120); //赤
    ofDrawTriangle(600, 600, 700, 400, 900, 700);
    //点1のx,y , 点2のx,y , 点3のx,y
     */
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

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
