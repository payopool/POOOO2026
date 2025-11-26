#pragma once
#include"Header.h";
class AudioEffectProcess {
public:
	AudioEffectProcess() = default;
	~AudioEffectProcess() = default;
	void SetRevertEneble( bool enable){
		std::cout << "[AudioEffectProcess]Efecto de reverberacion: " << (enable ? "Habilitado" : "Deshabilitado") << "\n";

	}
private:
};