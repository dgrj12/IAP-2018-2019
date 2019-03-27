

//
//  IAP.h
//  IAPProjectDevelopmentTest1
//
//  Created by Samuel Hunt on 16/07/2018.
//  Copyright (c) 2018 SJHDevelopment. All rights reserved.
//

#ifndef __IAPProjectDevelopmentTest1__IAP__
#define __IAPProjectDevelopmentTest1__IAP__


#include "AserveComs.h"

//---------------------------------------------------------------------------------
// USER CREATED CLASSES



class IAP : public AserveComs  {
public:
    
    //---------------------------------------------------------------------------------
    // SHARED VARIABLES
    
    IAPSynth synth;
    
    int slider1, slider2, slider3, slider4;
    
    //---------------------------------------------------------------------------------
    // FUNCTIONS
    void run ();

    //---------------------------------------------------------------------------------
    // CALLBACK FUNCTIONS
    
    //void callbackNoteReceived  (int note, int velocity, int channel);
    //void callbackModWheelMoved (int value);
    //void callbackPitchbendWheelMoved (int value);
    void callbackCCValueChanged (int cc, int value);
    
    //void callbackMIDIRecived (MIDI message);
    //void callbackPixelGrid (int x, int y);

private:
    
};

#endif /* defined(__IAPProjectDevelopmentTest1__IAP__) */
