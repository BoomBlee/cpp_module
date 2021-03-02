
#include "ShrubberyCreationForm.hpp"

std::string const ShrubberyCreationForm::tree[3] = {
"                 __..-----')\n"
"       ,.--._ .-'_..--...-'\n"
"      '-\"'. _/_ /  ..--''\"\"'-.\n"
"      _.--\"\"...:._:(_ ..:\"::. \\\n"
"   .-' ..::--\"\"_(##)#)\"':. \\ \\)    \\ _|_ /\n"
"  /_:-:'/  :__(##)##)    ): )   '-./'   '\\.-'\n"
"  \"  / |  :' :/\"\"\\///)  /:.'    --(       )--\n"
"    / :( :( :(   (#//)  \"       .-'\\.___./'-.\n"
"   / :/|\\ :\\_:\\   \\#//\\            /  |  \\\n"
"   |:/ | \"\"--':\\   (#//)              '\n"
"   \\/  \\ :|  \\ :\\  (#//)\n"
"        \\:\\   '.':. \\#//\\\n"
"         ':|    \"--'(#///)\n"
"                    (#///)\n"
"                    (#///)\n"
"                     \\#///\\\n"
"                     (##///)\n"
"                     (##///)\n"
"                     (##///)\n"
"                     (##///)\n"
"                      \\##///\\\n"
"                      (###///)\n"
"                      (sjw////)__...-----....__\n"
"                      (#/::'''                 \"\"--.._\n"
"                 __..-'''                             \"-._\n"
"         __..--\"\"                                         '._\n"
"___..--\"\"                                                    \"-..____\n"
"  (_ \"\"---....___                                     __...--\"\" _)\n"
"    \"\"\"--...  ___\"\"\"\"\"-----......._______......----\"\"\"     --\"\"\"\n"
"                  \"\"\"\"       ---.....   ___....----",

"                                               .\n"
"                                    .         ;  \n"
"       .              .              ;%     ;;   \n"
"         ,           ,                :;%  %;   \n"
"          :         ;                   :;%;'     .,   \n"
" ,.        %;     %;            ;        %;'    ,;\n"
"   ;       ;%;  %%;        ,     %;    ;%;    ,%'\n"
"    %;       %;%;      ,  ;       %;  ;%;   ,%;' \n"
"     ;%;      %;        ;%;        % ;%;  ,%;'\n"
"      `%;.     ;%;     %;'         `;%%;.%;'\n"
"       `:;%.    ;%%. %@;        %; ;@%;%'\n"
"          `:%;.  :;bd%;          %;@%;'\n"
"            `@%:.  :;%.         ;@@%;'   \n"
"              `@%.  `;@%.      ;@@%;      \n"   
"                `@%%. `@%%    ;@@%;        \n"
"                  ;@%. :@%%  %@@%;       \n"
"                    %@bd%%%bd%%:;     \n"
"                      #@%%%%%:;;\n"
"                      %@@%%%::;\n"
"                      %@@@%(o);  . '         \n"
"                      %@@@o%;:(.,'         \n"
"                  `.. %@@@o%::;         \n"
"                     `)@@@o%::;         \n"
"                      %@@(o)::;        \n"
"                     .%@@@@%::;         \n"
"                     ;%@@@@%::;.          \n"
"                    ;%@@@@%%:;;;. \n"
"                ...;%@@@@@%%:;;;;,..    \n",

"               ,@@@@@@@,\n\
       ,,,.   ,@@@@@@/@@,  .oo8888o.\n\
    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n\
   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n\
   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n\
   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n\
   `&%\\ ` /%&'    |.|        \\ '|8'\n\
       |o|        | |         | |\n\
       |.|        | |         | |\n\
    \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_ "
};

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : Form("ShrubberyCreationForm", 145, 137), target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}


const char* ShrubberyCreationForm::openFileException::what() const throw() {
	return "openFileException";
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {

	checkBureaucrat(executor);

	std::fstream fd;
	std::string nameFile = target + "_shrubbery";

	fd.open(nameFile, std::ios::out);
	if (!fd.is_open())
		throw openFileException();
	fd << tree[rand() % 3];
	fd.close();
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj) {
	Form::operator=(obj);
	return *this;
}
