#include"Header.h"

#include"programingPa/strategy/IAattackStrategy.h"
#include"programingPa/strategy/MeleeAttack.h"
#include"programingPa/strategy/MagicAttack.h"
#include"programingPa/strategy/Player-strategy.h"
#include"programingPa/strategy/RangesAttack.h"
#include"programingPa/Fecade/AudioFecade.h"


int main() {

	Player player;
	player.SetAttackStrategy(std::make_unique<MeleeAttack>());
	int damage = player.Attack(50);
	std::cout << "ataque cuerpo a cuerpo: " << damage << "\n";
	player.SetAttackStrategy(std::make_unique<MagicAttack>());
	damage = player.Attack(50);
	std::cout << "ataque magico: " << damage << "\n";
	player.SetAttackStrategy(std::make_unique<RangesAttack>());
	damage = player.Attack(50);
	std::cout << "ataque distancia: " << damage << "\n";

	std::cout << "\n";
	
	AudioFacade audio;
	audio.initialize();
	audio.playBackgroundMusic("musica_fondo.mp3");
	audio.setMasterVolume(0.5f);
	audio.enableReverb(false);


	
	return 0;
}
