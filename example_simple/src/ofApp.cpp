#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
    projector.openConnection("tty.usbserial-A702WZAS",9600);
    ofSleepMillis(1000);
    projector.projectorOn();
}
//--------------------------------------------------------------
void ofApp::exit()
{
    projector.projectorOff();
}
//--------------------------------------------------------------
void ofApp::update()
{
    
}
//--------------------------------------------------------------
void ofApp::draw()
{
    ofBackgroundGradient(ofColor::white, ofColor::gray,OF_GRADIENT_CIRCULAR);
   
    stringstream stringCommands;
    stringCommands << "case 'i': projector.projectorOn();" << endl;
    stringCommands << "case 'o': projector.projectorOff();" << endl;
    stringCommands << "case 'k': projector.keystone();" << endl;
    stringCommands << "case OF_KEY_UP: projector.up();" << endl;
    stringCommands << "case OF_KEY_DOWN: projector.down();" << endl;
    stringCommands << "case OF_KEY_LEFT: projector.left();" << endl;
    stringCommands << "case OF_KEY_RIGHT: projector.right();" << endl;
    stringCommands << "case 'm': projector.mute();" << endl;
    stringCommands << "case 'f': projector.freeze();" << endl;
    stringCommands << "case 'M': projector.menu();" << endl;
    stringCommands << "case 'a': projector.SelectANRGB();" << endl;
    stringCommands << "case 'd': projector.SelectDRGB();" << endl;
    stringCommands << "case 'p': projector.SelectPBPR();" << endl;
    stringCommands << "case 'c': projector.SelectComposite();" << endl;
    stringCommands << "case 'C': projector.SelectComponent();" << endl;
    stringCommands << "case '1': projector.selectAspect1();" << endl;
    stringCommands << "case '2': projector.selectAspect2();" << endl;
    stringCommands << "case '-': projector.volDown();" << endl;
    stringCommands << "case '+': projector.volUp();" << endl;
    stringCommands << "case 'b': projector.brightness();" << endl;
    stringCommands << "case 'B': projector.contrast();" << endl;
    stringCommands << "case 't': projector.colorTemp();" << endl;
    stringCommands << "case 'h': projector.hide();" << endl;
    stringCommands << "case 'S': projector.SelectInput();" << endl;
    stringCommands << "case 'g': projector.hueAdjustment();" << endl;
    stringCommands << "case 'j': projector.colorSatAdjustment();" << endl;
    stringCommands << "case 'l': projector.sharpnessAdjustment();" << endl;
    stringCommands << "case '}': projector.keystoneUp();" << endl;
    stringCommands << "case '{': projector.keystoneDown();" << endl;
    stringCommands << "case 'z': projector.zoom();" << endl;
    stringCommands << "case 'L': projector.language();" << endl;
    stringCommands << "case '|': projector.selectHDMI" << endl;
    
    ofDrawBitmapStringHighlight(stringCommands.str(), 10,10);
    
}
//--------------------------------------------------------------
void ofApp::keyPressed(int key)
{
    switch (key) {
        case 'i':
            projector.projectorOn();
            break;
        case 'o':
            projector.projectorOff();
            break;
        case 'k':
            projector.keystone();
            break;
        case OF_KEY_UP:
            projector.up();
            break;
        case OF_KEY_DOWN:
            projector.down();
            break;
        case OF_KEY_LEFT:
            projector.left();
            break;
        case OF_KEY_RIGHT:
            projector.right();
            break;
        case 'm':
            projector.mute();
            break;
        case 'f':
            projector.freeze();
            break;
        case 'M':
            projector.menu();
            break;
        case 'a':
            projector.SelectANRGB();
            break;
        case 'd':
            projector.SelectDRGB();
            break;
        case 'p':
            projector.SelectPBPR();
            break;
        case 'c':
            projector.SelectComposite();
            break;
        case 'C':
            projector.SelectComponent();
            break;
        case '1':
            projector.selectAspect1();
            break;
        case '2':
            projector.selectAspect2();
            break;
        case '-':
            projector.volDown();
            break;
        case '+':
            projector.volUp();
            break;
        case 'b':
            projector.brightness();
            break;
        case 'B':
            projector.contrast();
            break;
        case 't':
            projector.colorTemp();
            break;
        case 'h':
            projector.hide();
            break;
        case 'S':
            projector.SelectInput();
            break;
        case 'g':
            projector.hueAdjustment();
            break;
        case 'j':
            projector.colorSatAdjustment();
            break;
        case 'l':
            projector.sharpnessAdjustment();
            break;
        case '}':
            projector.keystoneUp();
            break;
        case '{':
            projector.keystoneDown();
            break;
        case 'z':
            projector.zoom();
            break;
        case 'L':
            projector.language();
            break;
        case '|':
            projector.selectHDMIInput();
            break;
    }
}
//--------------------------------------------------------------
void ofApp::keyReleased(int key)
{

}
//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y )
{

}
//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button)
{

}
//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button)
{

}
//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button)
{

}
//--------------------------------------------------------------
void ofApp::windowResized(int w, int h)
{

}
//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg)
{

}
//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo)
{
    
}