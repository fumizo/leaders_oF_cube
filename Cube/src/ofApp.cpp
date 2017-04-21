#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    backGroundImage.load("gray.png");
    
    ofBackground(0);
    ofSetFrameRate(60);
    ofSetVerticalSync(true); //画面の垂直同期をONに、素早い動きをした際にちらつくのを防ぐ
    ofEnableAlphaBlending(); //透明度
    
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2); //座標を画面の中心に移動

//    ofToggleFullscreen(); //フルスクリーンにする
    
    boxSize = 15; //boxの大きさ
    
    for (int i=0; i<NUM; i++) {
        //boxの位置をランダムに指定
        mBox[i].setPosition(ofRandom(-500,500), ofRandom(-500,500), ofRandom(-500,500));
        //ofrandom(最小値,最大値)
        mBox[i].set(boxSize); //boxのサイズを15にする
    }
    
    time = 0;
    
    sound.load("YoungFutura.mp3"); //音楽読み込み
    sound.setVolume(1.0);
    sound.play();
}

//--------------------------------------------------------------
void ofApp::update(){

    randomColor = ofColor(0); // c is black
    colorA = 100 + 60*sin(ofMap(time, 0, 10000, 0, 2*PI));
    randomColor.setHsb(colorA, 255, 255);
    if (!pause) time += 20;


    ofPushMatrix();
    ofSetFrameRate(40);
    volume = ofSoundGetSpectrum(1); //音量を取得
    mainBoxSize = volume[0]*1300;
    ofPopMatrix();
    
    randomCircle();
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    //画像を背景に
    backGroundImage.draw(0, 0, ofGetWidth(), ofGetHeight());
    
    vec.set(mouseX-p.x, mouseY-p.y); //マウスの速度を保存
    cam.begin();
    
    ofPushMatrix(); //保存
    
    ofRotateY(ofGetFrameNum()); //Y軸を軸にして回転 ofGetFrameNumを入れることで回転し続ける
    ofRotateX(30);
//    ofSetColor(100, 200, 255);
    int alpha = abs(vec.x) + abs(vec.y); //x軸方向の速度 + Y軸方向の速度
//    ofSetColor(100, 200, 255, 255 - alpha); //abs__絶対値を返す
    
//    colorA = 100 + 60*sin(ofMap(time, 0, 10000, 0, 2*PI));
//    randomColor.setHsb(10, 10, 10);
    
    
    for (int i=0; i<NUM; i++) {
        ofSetColor(ofRandom(0, 50), ofRandom(0, 255), ofRandom(0, 150));
        mBox[i].draw();
    }
    
    ofPopMatrix(); //再現
    
    
    ofSetColor(255, 255, 255, (ofGetFrameNum()*6)%120);
    //frameNumは現在までのフレーム数、120で割った余は0-119だから、透明度alphaがそれになる

    box.setPosition(0, 0, 0); //boxの位置を画面の中心に
    ofRotateX(ofGetFrameNum());
    ofRotateY(-60);
    box.set(mainBoxSize); //boxの大きさ
    box.draw(); //boxを描画
    
    ofSetColor(255);
    box.drawWireframe(); //ワイヤーフレームを描画
    
    cam.end();
    
    p.x = mouseX; //前のマウスのx座標を保存
    p.y = mouseY; //前のマウスのy座標を保存

}

//--------------------------------------------------------------
void ofApp::randomCircle(){
    randomCircleSize = ofRandom(10, 20);
    randomCircleAlpha = 255;
    ofDrawCircle(ofRandom(0, ofGetWidth()), ofRandom(0, ofGetHeight()), randomCircleSize);
    ofSetColor(ofRandom(0, 0), ofRandom(0, 255), ofRandom(0, 255));
    
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
