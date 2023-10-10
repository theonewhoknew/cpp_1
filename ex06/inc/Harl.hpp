#ifndef HARL_H
# define HARL_H
# include <string>
# define EXIT_SUCCESS 0

class Harl
{
private:

	void debug(void);
	void info(void);
	void warning(void);
	void error(void);

public:

	Harl(void);
	~Harl(void);
	void complain(std::string level);
};

#endif