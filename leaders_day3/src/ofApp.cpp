#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    //円を100個の点によって書く_滑らか
    ofSetCircleResolution(100);
    
    x = 100;
    y = 100;
    
    x2 = ofGetWidth()-100;
    y2 = ofGetHeight()-100;

    xx = 5;
    yy = 5;
    
    mode = 0;
}

//--------------------------------------------------------------
void ofApp::update(){
    x = x + xx;
    y = y + yy;
    
    if (x < 100 || ofGetWidth()-100 < x){
        //100は半径, ||...または
        xx *= -1;
    }
    if (y < 100 || ofGetHeight()-100 < y){
        yy *= -1;
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(0);
    ofSetColor(255);
    ofSetLineWidth(1);
    
    for (int i = 1; i <= 5; i++) {
        ofDrawLine( 0, 128*i, 1024, 128*i);
    }
    for (int i = 1; i <= 7; i++) {
        ofDrawLine( 128*i, 0, 128*i, 768);
    }
    
    ofPushMatrix(); //保存する
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofRotate(45);
    
    ofSetColor(0, 255, 0);
    ofDrawRectangle(-150, -150, 300, 300);
    ofPopMatrix(); //保存したものを復元する
    
    ofDrawRectangle(0, 0, 300, 400);
    
    /*
    if (mode%2 == 0) {
        ofBackground(0, 0, 0);
    }
    if (mode%2 == 1) {
        ofBackground(255, 0, 0);
    }

//    ofBackground(200, 200, 200);
    ofSetColor(255);

     
    ofSetColor(230, 130, 80);
    ofDrawCircle(x, y, 100);
    
    ofSetColor(255);
    ofDrawCircle(x2, y2, 100);
     */

    
    /*
     int blockSize = 1024/8;
     

     
    ofSetColor(230, 130, 80);
    ofDrawCircle(blockSize*3, blockSize*2.5, blockSize/3*2);
    ofSetColor(255, 80, 60);
    ofDrawEllipse(blockSize, blockSize*3, blockSize/3*4, blockSize*5.5);
    ofSetColor(100, 100, 200);
    ofDrawTriangle(blockSize*2.3, blockSize*2, blockSize*2.3, blockSize*3.7, blockSize*3.7, blockSize*3.7);
    ofSetColor(10, 150, 150);
    ofFill();
    ofDrawRectangle(blockSize*4, blockSize*2, blockSize*2, blockSize*2);
     */

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == 'a') {
        xx *=2; //aを触ると早くなる
        yy *= 2;
    }
    
    if (key == 'b') {
        xx /= 2; //bを触ると遅くなる
        yy /= 2;
    }
    

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
    mode +=1;
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
