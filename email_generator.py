import random

def generate_email(firstname, lastname):
    
    #list of common email address
    providers=["yahoo.com","gmail.com","hotmail.com","outlook.com"]
    #generating a random number between 100 and 999
    provider_number= random.randint(100,999)
    #randomly selecting a provider
    providers=random.choice(providers)
    #format for email address
    email= f"{firstname.upper()}.{lastname.lower()}{provider_number}@{providers}"
    
    return email

def main():
    #Test the email generator
    first_name = input("Enter your first name:")
    last_name = input("Enter your last name: ")
    
    email=generate_email(first_name, last_name)
    
    print("Generate Email address", email)
    
if __name__ == "__main__":
    main()