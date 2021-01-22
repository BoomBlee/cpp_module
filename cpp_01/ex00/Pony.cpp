
Pony::Pony(size_t leg, size_t heads, size_t tails, std::string color) : legs(leg), heads(heads), tails(tails), color(color)
{
	std::cout << "Pony created with " << this->legs << " legs, " << this->heads << " heads, " << this->tails << " tails and " << this->color << " color." << std::endl;
}

Pony::~Pony()
{
	std::cout << "Pony died with " << this->legs << " legs, " << this->heads << " heads, " << this->tails << " tails and " << this->color << " color." << std::endl;
}

void Pony::deleteLeg(){
	this->legs--;
	std::cout << this->legs << "legs left" << std::endl;
}

void Pony::setColor(std::string col){
	color = col;
	std::cout << "New color: " << this->color << std::endl;
}
