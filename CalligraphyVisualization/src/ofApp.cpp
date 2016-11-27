#include "ofApp.h"
#include "ofxTablet.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(0);
    ofEnableDepthTest();
    
    cam.move(0,-600,200);
    cam.lookAt(ofVec3f(0,0,0));
    
    baseNode.setPosition(0, 0, 0);
//    childNode.setParent(baseNode);
//    childNode.setPosition(0, 0, 200);
//    grandChildNode.setParent(childNode);
//    grandChildNode.setPosition(0,50,0);
    
    ofxTablet::start();
    
}

//--------------------------------------------------------------
void ofApp::update(){
    /*
    // pan(): rotate 1 degree on the y axis
    baseNode.pan(1);
    // tilt(): rotate 3 degree on the x axis
    childNode.tilt(3);
    
    line.addVertex(grandChildNode.getGlobalPosition());
    if (line.size() > 500){
        line.getVertices().erase(
                                 line.getVertices().begin()
                                 );
    }
     */
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    cam.begin();
    //uncomment these 3 lines to understand how nodes are moving
    baseNode.draw();
    childNode.draw();
    grandChildNode.draw();
    line.draw();
    cam.end();

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
    
    ofPoint pt;
    pt.set(x,y);
    line.addVertex(pt);

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
