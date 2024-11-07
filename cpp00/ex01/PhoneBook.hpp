#ifndef PHONEBOOK_H
# define PHONEBOOK_H

class PhoneBook
{
	public:
	
				PhoneBook(void);
				~PhoneBook(void);
		void	new_contact(void);
		void	display_contact(void);
	
	private:

		Contact contact[8];
		int		current_number;
		int		nb_of_contact;
};

#endif
