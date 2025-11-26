#pragma once
#include"Header.h"
class AudioLoader {
public:
	AudioLoader() = default;
	~AudioLoader() = default;

	bool loadSound(const std::string& filePath) {
		// Lógica para cargar el archivo de audio
		std::cout << "Cargando archivo de audio: " << filePath << "\n";
		return true; // Simulación de carga exitosa
	}



};