
Human::Human()
{
}

Human::~Human()
{
}

const Brain &Human::getBrain(){
	return one;	
}

std::string Human::identify(){
	return one.identify();
}