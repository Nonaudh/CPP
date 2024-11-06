#ifndef PHONEBOOK_H
# define PHONEBOOK_H

class PhoneBook
{
	public:
	
				PhoneBook(void);
				~PhoneBook(void);
		void	set_contact(std::string line);
		void	print_contact(void);
	
	private:

		Contact contact[8];
};

#endif
