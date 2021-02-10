#include "TacticalMarine.hpp"

ISpaceMarine &TacticalMarine::operator=(const TacticalMarine &obj) {
	(void)obj;
	return *this;
}

TacticalMarine::TacticalMarine(const TacticalMarine &obj) {
	*this = obj;
}

// ISpaceMarine* clone(){
// 	// TacticalMarine* clone = new TacticalMarine(this);

// 	return new TacticalMarine(*this);
// }

void TacticalMarine::battleCry() const {
	std::cout << "For the holy PLOT!" << std::endl;
}
void TacticalMarine::rangedAttack() const {
	std::cout << "* attacks with a bolter *" << std::endl;
}
void TacticalMarine::meleeAttack() const {
	std::cout << "* attacks with a chainsword *" << std::endl;
}