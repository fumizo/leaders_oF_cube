#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetVerticalSync(true);
    ofBackground(255);
    ofSetLogLevel(OF_LOG_VERBOSE);
    
    midiIn.listPorts(); //コンソールにポートのリストを表示
    midiIn.openPort(0); //ポート番号を指定して開く
    
    midiIn.addListener(this); //opAppをmidiのリスナー登録
    
    //コンソールにどう表示するか
    midiIn.setVerbose(true);
    midiIn.ignoreTypes(false, false, false);
    
    //出力関係 setup
    manager = ofxMidiOutputManager();
    ofSoundStreamSetup(2, 0, this, 44100, 1024, 4);

}

//--------------------------------------------------------------
void ofApp::newMidiMessage( ofxMidiMessage& msg){
    
    midiMessage = msg;
    
    //pitchのところを出力するように
    if (midiMessage.getStatusString(midiMessage.status) == "Note On") {
        manager.willConstBuffer(midiMessage.pitch);
    }
    
}

//--------------------------------------------------------------
void ofApp::audioRequested( float *buf, int bufSize, int nChan){
    manager.constructBuffers(buf, bufSize);
}

//--------------------------------------------------------------
void ofApp::exit(){
    midiIn.closePort();
    midiIn.removeListener(this);
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

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
