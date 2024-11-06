#ifndef CONTACT_H
# define CONTACT_H

class Contact
{
	public:
	
		Contact(void);
		~Contact(void);
		std::string get_name();
		void	set_name(std::string);

	private:

		std::string first_name;
};

#endif
