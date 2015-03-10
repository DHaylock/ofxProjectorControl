//--------------------------------------------------------------
//* Name: ofxProjectorControl.h
//* Author: David Haylock
//* Creation Date: 06-08-2014
//--------------------------------------------------------------

#include "ofMain.h"

//--------------------------------------------------------------
//* PROJECTOR SERIAL COMMANDS For ACER Projectors
//--------------------------------------------------------------
#define POWER_ON "* 0 IR 001\r"
#define POWER_OFF "* 0 IR 002\r"
#define KEYSTONE "* 0 IR 004\r"
#define MUTE "* 0 IR 006\r"
#define FREEZE "* 0 IR 007\r"
#define MENU "* 0 IR 008\r"
#define UP "* 0 IR 009\r"
#define DOWN "* 0 IR 010\r"
#define RIGHT "* 0 IR 011\r"
#define LEFT "* 0 IR 012\r"
#define RE_SYNC "* 0 IR 014\r"
#define SELECT_AN_RGB_D_SUB "* 0 IR 015\r"
#define SELECT_D_RGB  "* 0 IR 016\r"
#define SELECT_PBPR "* 0 IR 017\r"
#define SELECT_S_VIDEO "* 0 IR 018\r"
#define SELECT_COMPOSITE "* 0 IR 019\r"
#define SELECT_COMPONENT "* 0 IR 020\r"
#define ASPECT_RATIO_16_9 "* 0 IR 021\r"
#define ASPECT_RATIO_4_3 "* 0 IR 022\r"
#define VOLUME_UP "* 0 IR 023\r"
#define VOLUME_DOWN "* 0 IR 024\r"
#define BRIGHTNESS "* 0 IR 025\r"
#define CONTRAST "* 0 IR 026\r"
#define COLOR_TEMPERATURE "* 0 IR 027\r"
#define HIDE "* 0 IR 030\r"
#define SELECT_INPUT "* 0 IR 031\r"
#define COLOUR_SATURATION_ADJUSTMENT "* 0 IR 032\r"
#define HUE_ADJUSTMENT "* 0 IR 033\r"
#define SHARPNESS_ADJUSTMENT "* 0 IR 034\r"
#define QUERY_MODEL_NAME "* 0 IR 035\r"
#define QUERY_NATIVE_DISPLAY_RESOLUTION "* 0 IR 036\r"
#define QUERY_COMPANY_NAME "* 0 IR 037\r"
#define KEYSTONE_UP "* 0 IR 042\r"
#define KEYSTONE_DOWN "* 0 IR 043\r"
#define ZOOM "* 0 IR 046\r"
#define E_KEY "* 0 IR 047\r"
#define COLOR_RGB "* 0 IR 048\r"
#define LANGUAGE "* 0 IR 049\r"
#define SELECT_HDMI_INPUT "* 0 IR 050\r"

#define COMMAND_LENGTH 13

#define BAUD 9600
#define PORT "tty.usbserial-A702WZAS"

class ofxProjectorControl : public ofSerial {
    
public:
    
    // Standard Serial Commands
    void openConnection(string port, int baud = BAUD);
    void close();
    bool isConnected();
    bool hasSentCommand();
    void listenForReturn();
    
    // Projector Commands
    void projectorOn();
    void projectorOff();
    void keystone();
    void mute();
    void freeze();
    void menu();
    void up();
    void down();
    void left();
    void right();
    void reSync();
    void SelectANRGB();
    void SelectDRGB();
    void SelectPBPR();
    void SelectComposite();
    void SelectComponent();
    // 16:9
    void selectAspect1();
    // 4:3
    void selectAspect2();
    void volUp();
    void volDown();
    void brightness();
    void contrast();
    void colorTemp();
    void hide();
    void SelectInput();
    void colorSatAdjustment();
    void hueAdjustment();
    void sharpnessAdjustment();
    string getProjectorName();
    string getNativeDisplay();
    string getCompanyName();
    void keystoneUp();
    void keystoneDown();
    void zoom();
    void eKey();
    void colorRGB();
    void language();
    void selectHDMIInput();

    void turnOnCamera();
    void turnOffCamera();
};
