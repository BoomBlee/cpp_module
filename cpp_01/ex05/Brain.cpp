
Brain::Brain(/* args */)
{
}

Brain::~Brain()
{
}

std::string Brain::identify() const{
	std::stringstream s;

	s << std::hex << std::uppercase << std::showbase << (size_t)this;
	return s.str();
}