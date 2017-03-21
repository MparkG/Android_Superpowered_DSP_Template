#ifndef Header_SuperpoweredExample
#define Header_SuperpoweredExample

#include <math.h>
#include <pthread.h>

#include "SuperpoweredRenderer.h"
#include <SuperpoweredAdvancedAudioPlayer.h>
#include <AndroidIO/SuperpoweredAndroidAudioIO.h>


class SuperpoweredRenderer {
public:

	SuperpoweredRenderer(unsigned int samplerate, unsigned int buffersize, const char *path, int fileLength);
	~SuperpoweredRenderer();

	bool process(short int *output, unsigned int numberOfSamples);
	void onPlayPause(bool play);

private:
    SuperpoweredAndroidAudioIO *audioSystem;
    SuperpoweredAdvancedAudioPlayer *playerA;
    float *stereoBuffer;
};

#endif
