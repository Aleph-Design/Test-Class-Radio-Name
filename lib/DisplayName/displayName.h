/*
* Class to display the name of a radio station on a TFT-screen.
* =============================================================
* Input:
* The actual or current radio station index.
* Output:
* The actual or current radio stations name on a TFT-screen.
* Needed:
* - The current radio stations index in the radio stations array.
* - Access to the radio stations array.
* - Access to used fonts.
* - Access to the TFT-screen by means of Bodmer's TFT_eSPI libray.
*/
#if !defined(DISPLAY_NAME_H)
#define DISPLAY_NAME_H

#include <TFT_eSPI.h>
#include <SPIFFS.h>
//#include <radioStats.h>   // Now the error's gone; Yea, also all the rest
#include <radioStats.h>     // Now there's the error; but why?


//   RadioStation *pRadio = &sRadioStation[ConnectRadio::getConnectedIndex()];


class DisplayName
{
    private:
        TFT_eSPI *_pTft;
        uint32_t _radioIndex;
        // RadioStation *_pRadio;        // struct RadioStation


    public:
        DisplayName(TFT_eSPI *pTft, uint32_t radioIndex)
        {
            _pTft = pTft;
            _radioIndex = radioIndex;
            // _pRadio = &sRadioStation[radioIndex];
        }

        /*
        * Destructor is invoked automatically whenever the instance is about 
        * to destroy. It's the last function called before destroy.
        */
        ~DisplayName();

        void displayRadioName(uint32_t radioIndex);
 

};  // end class DisplayName

#endif // DISPLAY_NAME_H
 