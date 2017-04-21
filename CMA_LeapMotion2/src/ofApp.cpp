#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    //画面の初期設定
    ofSetVerticalSync(true);
    
    //カメラの初期設定
    cam.setOrientation(ofPoint(-20, 0, 0));
    
    //GL設定
    glEnable(GL_DEPTH_TEST); //深さを有効に
    glEnable(GL_NORMALIZE); //法線ベクトルの自動正動化
    
    //Leap Motion開始
    leap.open();
    

}

//--------------------------------------------------------------
void ofApp::update(){
    
    simpleHands = leap.getSimpleHands(); //検出されたての数だけofxLeapMotionSimpleHandsのvector配列に追加
    
    if ( leap.isFrameNew() && simpleHands.size() ) {
        fingerPos.clear();
        
        leap.setMappingX(-230, 230, -ofGetWidth()/2, ofGetWidth()/2);
        leap.setMappingY(90, 490, -ofGetHeight()/2, ofGetHeight()/2);
        leap.setMappingZ(-150, 150, -200, 200);
        
        fingerType fingerTypes[] = {THUMB, INDEX, MIDDLE, RING, PINKY};
        
        for (int i = 0; i<simpleHands.size(); i++) {
            for (int f=0; f<5; f++) {
                ofPoint mcp = simpleHands[i].fingers[ fingerTypes[f] ].mcp;
                fingerPos.push_back(mcp);
                
                ofPoint pip = simpleHands[i].fingers[ fingerTypes[f] ].pip;
                fingerPos.push_back(pip);
                
                ofPoint dip = simpleHands[i].fingers[ fingerTypes[f] ].dip;
                fingerPos.push_back(dip);
                
                ofPoint tip = simpleHands[i].fingers[ fingerTypes[f] ].tip;
                fingerPos.push_back(tip);
            }
        }
    }
    leap.markFrameAsOld();

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(0);
    cam.begin();
    for (int i = 0; i < simpleHands.size(); i++) {
        for (int f =0; f <5; f++) {
            ofSetColor(255);
            ofDrawSphere(fingerPos.at(20*i+4*f+0), 10); //mcpての最も中心線
            
            ofSetColor(200);
            ofDrawSphere(fingerPos.at(20*i+4*f+0), 10); //pip 手の二番目の中心線
            
            ofSetColor(155);
            ofDrawSphere(fingerPos.at(20*i+4*f+2), 10); //dip ての指先の一歩手前
            
            ofSetColor(100);
            ofDrawSphere(fingerPos.at(20*i+4*f+0), 10); //tip 手の指先
            
            ofDrawLine(fingerPos.at(20*i+4*f+0), fingerPos.at(20*i+4*f+1));
            ofDrawLine(fingerPos.at(20*i+4*f+1), fingerPos.at(20*i+4*f+2));
            ofDrawLine(fingerPos.at(20*i+4*f+2), fingerPos.at(20*i+4*f+3));
        }
    }
}

//--------------------------------------------------------------
void ofApp::exit(){
    
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
