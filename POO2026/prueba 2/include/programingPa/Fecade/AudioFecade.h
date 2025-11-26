#pragma once
#include"Header.h"
#include"programingPa/Fecade/audioLoader.h"
#include"programingPa/Fecade/AudioMixer.h"
#include"programingPa/Fecade/AudioEffectProcess.h"
class
  AudioFacade {
public:
  AudioFacade() = default;
  ~AudioFacade() = default;

  void
    initialize() {
    std::cout << "[AudioFacade] Inicializando sistema de audio..." << std::endl;
    // Lógica de inicialización real iría aquí
    mixer.SetMastervolumen(0.8f);
    effects.SetRevertEneble(true);
  }

  void
    playBackgroundMusic(const std::string& musicPath) {
    std::cout << "[AudioFacade] Solicitando reproduccion de musica de fondo..." << std::endl;

    if (loader.loadSound(musicPath)) {
      const int musicChannelId = 0; // Canal reservado para música
      mixer.PlayChanel(musicChannelId);
    }
    else {
      std::cerr << "[AudioFacade] Error al cargar la musica: " << musicPath << std::endl;
    }
  }

  void
    setMasterVolume(float volume) {
    mixer.SetMastervolumen(volume);
  }

  void enableReverb(bool enabled) {
    effects.SetRevertEneble(enabled);
  }

	
private:
	AudioLoader loader;
	AudioMixer mixer;
	AudioEffectProcess effects;

};