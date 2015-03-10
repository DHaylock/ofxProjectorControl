//--------------------------------------------------------------
//* Name: ofxProjectorControl.cpp
//* Author: David Haylock
//* Creation Date: 06-08-2014
//--------------------------------------------------------------
#include "ofxProjectorControl.h"
#include <sys/ioctl.h>

//--------------------------------------------------------------
void ofxProjectorControl::openConnection(string port, int baud)
{
    ofSerial::setup(port, baud);
    ofSerial::listDevices();
}
//--------------------------------------------------------------
void ofxProjectorControl::close()
{
    ofSerial::close();
}
//--------------------------------------------------------------
bool ofxProjectorControl::isConnected()
{
    return ofSerial::isInitialized();
}
//--------------------------------------------------------------
void ofxProjectorControl::projectorOn()
{
    unsigned char command[COMMAND_LENGTH] = POWER_ON;
    ofSerial::writeBytes(command,COMMAND_LENGTH);
    cout << "Power On: Serial Command " << POWER_ON << endl;
}
//--------------------------------------------------------------
void ofxProjectorControl::projectorOff()
{
    unsigned char command[COMMAND_LENGTH] = POWER_OFF;
    ofSerial::writeBytes(command,COMMAND_LENGTH);
    cout << "Power Off: Serial Command " << POWER_OFF << endl;
}
//--------------------------------------------------------------
void ofxProjectorControl::keystone()
{
    unsigned char command[COMMAND_LENGTH] = KEYSTONE;
    ofSerial::writeBytes(command,COMMAND_LENGTH);
       cout << "Keystone: Serial Command " << KEYSTONE << endl;
}
//--------------------------------------------------------------
void ofxProjectorControl::mute()
{
    unsigned char command[COMMAND_LENGTH] = MUTE;
    ofSerial::writeBytes(command,COMMAND_LENGTH);
    cout << "MUTE: Serial Command " << MUTE << endl;
}
//--------------------------------------------------------------
void ofxProjectorControl::freeze()
{
    unsigned char command[COMMAND_LENGTH] = FREEZE;
    ofSerial::writeBytes(command,COMMAND_LENGTH);
    cout << "Freeze: Serial Command " << FREEZE << endl;
}
//--------------------------------------------------------------
void ofxProjectorControl::menu()
{
    unsigned char command[COMMAND_LENGTH] = MENU;
    ofSerial::writeBytes(command,COMMAND_LENGTH);
    cout << "Menu: Serial Command " << MENU << endl;
}
//--------------------------------------------------------------
void ofxProjectorControl::up()
{
    unsigned char command[COMMAND_LENGTH] = UP;
    ofSerial::writeBytes(command,COMMAND_LENGTH);
    cout << "Up: Serial Command " << UP << endl;
}
//--------------------------------------------------------------
void ofxProjectorControl::down()
{
    unsigned char command[COMMAND_LENGTH] = DOWN;
    ofSerial::writeBytes(command,COMMAND_LENGTH);
    cout << "Down: Serial Command " << DOWN << endl;
}
//--------------------------------------------------------------
void ofxProjectorControl::left()
{
    unsigned char command[COMMAND_LENGTH] = LEFT;
    ofSerial::writeBytes(command,COMMAND_LENGTH);
    cout << "Left: Serial Command " << LEFT << endl;
}
//--------------------------------------------------------------
void ofxProjectorControl::right()
{
    unsigned char command[COMMAND_LENGTH] = RIGHT;
    ofSerial::writeBytes(command,COMMAND_LENGTH);
    cout << "Right: Serial Command " << RIGHT << endl;
}
//--------------------------------------------------------------
void ofxProjectorControl::SelectANRGB()
{
    unsigned char command[COMMAND_LENGTH] = SELECT_AN_RGB_D_SUB;
    ofSerial::writeBytes(command,COMMAND_LENGTH);
    cout << "Select Analogue RGB: Serial Command " << SELECT_AN_RGB_D_SUB << endl;
}
//--------------------------------------------------------------
void ofxProjectorControl::SelectDRGB()
{
    unsigned char command[COMMAND_LENGTH] = SELECT_D_RGB;
    ofSerial::writeBytes(command,COMMAND_LENGTH);
    cout << "Select Digital RGB: Serial Command " << SELECT_D_RGB << endl;
}
//--------------------------------------------------------------
void ofxProjectorControl::SelectPBPR()
{
    unsigned char command[COMMAND_LENGTH] = SELECT_PBPR;
    ofSerial::writeBytes(command,COMMAND_LENGTH);
    cout << "Select PBPR: Serial Command " << SELECT_PBPR << endl;
}
//--------------------------------------------------------------
void ofxProjectorControl::SelectComposite()
{
    unsigned char command[COMMAND_LENGTH] = SELECT_COMPOSITE;
    ofSerial::writeBytes(command,COMMAND_LENGTH);
    cout << "Select Composite: Serial Command " << SELECT_COMPOSITE << endl;
}
//--------------------------------------------------------------
void ofxProjectorControl::SelectComponent()
{
    unsigned char command[COMMAND_LENGTH] = SELECT_COMPONENT;
    ofSerial::writeBytes(command,COMMAND_LENGTH);
    cout << "Select Component: Serial Command " << SELECT_COMPONENT << endl;
}
//--------------------------------------------------------------
void ofxProjectorControl::selectAspect1()
{
    unsigned char command[COMMAND_LENGTH] = ASPECT_RATIO_16_9;
    ofSerial::writeBytes(command,COMMAND_LENGTH);
    cout << "Select 16:9 Aspect Ratio: Serial Command " << ASPECT_RATIO_16_9 << endl;
}
//--------------------------------------------------------------
void ofxProjectorControl::selectAspect2()
{
    unsigned char command[COMMAND_LENGTH] = ASPECT_RATIO_4_3;
    ofSerial::writeBytes(command,COMMAND_LENGTH);
    cout << "Select 4:3 Aspect Ratio: Serial Command " << ASPECT_RATIO_4_3 << endl;
}
//--------------------------------------------------------------
void ofxProjectorControl::volUp()
{
    unsigned char command[COMMAND_LENGTH] = VOLUME_UP;
    ofSerial::writeBytes(command,COMMAND_LENGTH);
    cout << "Volume Up: Serial Command " << VOLUME_UP << endl;
}
//--------------------------------------------------------------
void ofxProjectorControl::volDown()
{
    unsigned char command[COMMAND_LENGTH] = VOLUME_DOWN;
    ofSerial::writeBytes(command,COMMAND_LENGTH);
    cout << "Volume Down: Serial Command " << VOLUME_DOWN << endl;
}
//--------------------------------------------------------------
void ofxProjectorControl::brightness()
{
    unsigned char command[COMMAND_LENGTH] =  BRIGHTNESS;
    ofSerial::writeBytes(command,COMMAND_LENGTH);
    cout << "Brightness: Serial Command " << BRIGHTNESS << endl;
}
//--------------------------------------------------------------
void ofxProjectorControl::contrast()
{
    unsigned char command[COMMAND_LENGTH] = CONTRAST;
    ofSerial::writeBytes(command,COMMAND_LENGTH);
    cout << "Contrast: Serial Command " << CONTRAST << endl;
}
//--------------------------------------------------------------
void ofxProjectorControl::colorTemp()
{
    unsigned char command[COMMAND_LENGTH] = COLOR_TEMPERATURE;
    ofSerial::writeBytes(command,COMMAND_LENGTH);
    cout << "Color Temp: Serial Command " << COLOR_TEMPERATURE << endl;
}
//--------------------------------------------------------------
void ofxProjectorControl::hide()
{
    unsigned char command[COMMAND_LENGTH] = HIDE;
    ofSerial::writeBytes(command,COMMAND_LENGTH);
    cout << "Hide: Serial Command " << HIDE << endl;
}
//--------------------------------------------------------------
void ofxProjectorControl::SelectInput()
{
    unsigned char command[COMMAND_LENGTH] = SELECT_INPUT;
    ofSerial::writeBytes(command,COMMAND_LENGTH);
    cout << "Select Input: Serial Command " << SELECT_INPUT << endl;
}
//--------------------------------------------------------------
void ofxProjectorControl::colorSatAdjustment()
{
    unsigned char command[COMMAND_LENGTH] = COLOUR_SATURATION_ADJUSTMENT;
    ofSerial::writeBytes(command,COMMAND_LENGTH);
    cout << "Color Satuaration Adjustments: Serial Command " << COLOUR_SATURATION_ADJUSTMENT << endl;
}
//--------------------------------------------------------------
void ofxProjectorControl::hueAdjustment()
{
    unsigned char command[COMMAND_LENGTH] = HUE_ADJUSTMENT;
    ofSerial::writeBytes(command,COMMAND_LENGTH);
    cout << "Hue Adjustments: Serial Command " << HUE_ADJUSTMENT << endl;
}
//--------------------------------------------------------------
void ofxProjectorControl::sharpnessAdjustment()
{
    unsigned char command[COMMAND_LENGTH] = SHARPNESS_ADJUSTMENT;
    ofSerial::writeBytes(command,COMMAND_LENGTH);
    cout << "Sharpness Adjustments: Serial Command " << SHARPNESS_ADJUSTMENT << endl;
}
//--------------------------------------------------------------
string ofxProjectorControl::getProjectorName()
{
    unsigned char command[COMMAND_LENGTH] = QUERY_MODEL_NAME;
    ofSerial::writeBytes(command,COMMAND_LENGTH);
    cout << "Asking for the Projector's name" << endl;
}
//--------------------------------------------------------------
string ofxProjectorControl::getNativeDisplay()
{
    unsigned char command[COMMAND_LENGTH] = QUERY_NATIVE_DISPLAY_RESOLUTION;
    ofSerial::writeBytes(command,COMMAND_LENGTH);
    cout << "Asking for the Projector's Display Parameters" << endl;
}
//--------------------------------------------------------------
string ofxProjectorControl::getCompanyName()
{
    unsigned char command[COMMAND_LENGTH] = QUERY_COMPANY_NAME;
    ofSerial::writeBytes(command,COMMAND_LENGTH);
    cout << "Asking for the Projector's Manufacturer" << endl;
}
//--------------------------------------------------------------
void ofxProjectorControl::keystoneUp()
{
    unsigned char command[COMMAND_LENGTH] = KEYSTONE_UP;
    ofSerial::writeBytes(command,COMMAND_LENGTH);
    cout << "Keystone Up: Serial Command " << KEYSTONE_UP << endl;
}
//--------------------------------------------------------------
void ofxProjectorControl::keystoneDown()
{
    unsigned char command[COMMAND_LENGTH] = KEYSTONE_DOWN;
    ofSerial::writeBytes(command,COMMAND_LENGTH);
    cout << "Keystone Down: Serial Command " << KEYSTONE_DOWN << endl;
}
//--------------------------------------------------------------
void ofxProjectorControl::zoom()
{
    unsigned char command[COMMAND_LENGTH] = ZOOM;
    ofSerial::writeBytes(command,COMMAND_LENGTH);
    cout << "Zoom: Serial Command " << ZOOM << endl;
}
//--------------------------------------------------------------
void ofxProjectorControl::colorRGB()
{
    unsigned char command[COMMAND_LENGTH] = COLOR_RGB;
    ofSerial::writeBytes(command,COMMAND_LENGTH);
    cout << "Color RGB: Serial Command " << COLOR_RGB << endl;
}
//--------------------------------------------------------------
void ofxProjectorControl::language()
{
    unsigned char command[COMMAND_LENGTH] = LANGUAGE;
    ofSerial::writeBytes(command,COMMAND_LENGTH);
    cout << "Language: Serial Command " << LANGUAGE << endl;
}
//--------------------------------------------------------------
void ofxProjectorControl::selectHDMIInput()
{
    unsigned char command[COMMAND_LENGTH] = SELECT_HDMI_INPUT;
    ofSerial::writeBytes(command,COMMAND_LENGTH);
    cout << "Select HDMI Input: Serial Command " << SELECT_HDMI_INPUT << endl;
}
//--------------------------------------------------------------
void ofxProjectorControl::turnOnCamera()
{
    unsigned int state = TIOCM_DTR;
    ioctl(fd, TIOCMSET, &state);
    cout << "Turned camera on" << endl;
}
//--------------------------------------------------------------
void ofxProjectorControl::turnOffCamera()
{
    unsigned int state = ~TIOCM_DTR;
    ioctl(fd, TIOCMSET, &state);
    cout << "Turned camera off" << endl;
}
