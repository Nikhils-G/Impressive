#include <conio.h>
#include "inc/fmod.h"

FSOUND_SAMPLE* handle;

int main ()
{
   // init FMOD sound system
   FSOUND_Init (44100, 32, 0);

   // load and play mp3
   handle=FSOUND_Sample_Load (0,"evarevaro.mp3",0, 0, 0);
   FSOUND_PlaySound (0,handle);

   // wait until the users hits a key to end the app
   while (!_kbhit())
   {
   }

   // clean up
   FSOUND_Sample_Free (handle);
   FSOUND_Close();
}
