#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
	try {
		Bureaucrat bur = Bureaucrat("BUR", 120);
		Form form1 = Form("Form1", 140);
		Form form2 = Form("Form2", 110);

		bur.signForm(form1);
		bur.signForm(form2);
		bur.signForm(form2);
		bur.signForm(form1);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}