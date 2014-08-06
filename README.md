ofxProjectorControl
======

A openFrameworks addon for Controlling Acer Projectors through a RS232 Serial Cable

ofxProjectorControl is an addon for openFrameworks (v0.8.0+) that allows users to communicate with Acer projectors within their openFrameworks application.

It is a work in progress and there are still some issues that need to be addressed. However, it works as it stands.

If you would like to contribute to the addon feel free to fork, hack and mod the code.
Also drop me a line and let me know how you end up using the addon.

@david_haylock

## Requirements

- openFrameworks v0.8.0+ 

## What the addon includes

- The ofxProjectorControl class

## Getting Started

- After downloading ofxProjectorControl, place it inside your openFrameworks addon folder.

- Create a new openFrameworks project in Project Generator and select the ofxProjectorControl

- Alternatively you will need to add the addons manually, drag and drop the folders into the addon folder in xCode. Then make sure the paths are linked inside Build Settings. 

- In your ofApp.h or ofApp.h file, link the addon's .h file, by adding  ```#include "ofxProjectorControl.h"``` underneath ```#include "ofMain.h"```.

- Create an ofxProjectorControl object in your .h file

<code>
	ofxProjectorControl projector;
</code>

- Then in the .cpp file setup the Serial line

<code>
	projector.setup("yourSerialPort", 9600);
</code>

- When you close your application ensure you close the controller

<code>
    projector.close();
</code>

- See the examples for more specific details on the commands.

## API

<code>
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
    
    void selectAspect1();
    
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

    void keystoneUp();
    
    void keystoneDown();
    
    void zoom();
    
    void eKey();
    
    void colorRGB();
    
    void language();
    
    void selectHDMIInput();
</code>

- Need to Implement these commands to return Values

<code>
    string getProjectorName();
    
    string getNativeDisplay();
    
    string getCompanyName();
</code>

## Examples

- simple example

## Important 
- Here is the list of Serial commands as provided by Acer
 <a href=http://acer-au.custhelp.com/ci/fattach/get/198628/0/session/L2F2LzEvdGltZS8xNDA3MzE0MTUwL3NpZC9TVkJXRjhfbA==/filename/RS232_commands_P5271_P5290_P5390W_P5271i.pdf'>Acer RS232 Serial Commands</a> 
