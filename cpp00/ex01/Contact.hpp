#ifndef CONTACT_H
# define CONTACT_H

class Contact
{
	public:
	
		Contact(void);
		~Contact(void);
		void		set_first_name(std::string);
		void		set_last_name(std::string);
		void		set_nickname(std::string);
		void		set_phone_number(std::string);
		void		set_darkest_secret(std::string);
		std::string get_first_name();
		std::string get_last_name();
		std::string get_nickname();
		std::string get_phone_number();
		std::string get_darkest_secret();

	private:

		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
};

#endif
