#pragma once
#include"Header.h"
class AudioMixer {
public:
	AudioMixer() = default;
	~AudioMixer() = default;
	void SetMastervolumen(float volumen) {
		std::cout << " [mixerAudio]Estableciendo volumen maestro a: " << volumen << "\n";

	}
	void PlayChanel(int channel) {
		std::cout << "[mixerAudio]Reproduciendo canal: " << channel << "\n";
	}
};