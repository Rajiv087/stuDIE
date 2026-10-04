import random
# choices = ['snake' , 'water' , 'gun']
# p = 0
# c = 0
# for i in range(5):
#     player_input = input("snake , water or gun ?: ")
#     computer_input = random.choice(choices)
#     print('YOU:     ',player_input)
#     print('COMPUTER:',computer_input)
    
#     if player_input == 'snake':
#         if computer_input == 'snake':
#             print("DRAW")
#             print('Player:   ',p)
#             print('Computer: ',c)
#         if computer_input == 'water':
#             print("YOU WON")
#             p+=1 
#             print('Player:   ',p)
#             print('Computer: ',c)
#         if computer_input == 'gun':
#             print("YOU LOST")
#             c+=1
#             print('Player:   ',p)
#             print('Computer: ',c)
    
#     if player_input == 'water':
#         if computer_input == 'snake':
#             print("YOU LOST")
#             c+=1
#             print('Player:   ',p)
#             print('Computer: ',c)
#         if computer_input == 'water':
#             print("DRAW")
#             print('Player:   ',p)
#             print('Computer: ',c)

#         if computer_input == 'gun':
#             print("YOU WON")
#             p+=1
#             print('Player:   ',p)
#             print('Computer: ',c)
            

#     if player_input=='gun':
#         if computer_input =='snake':
#             print("YOU WON")
#             p+=1
#             print('Player:   ',p)
#             print('Computer: ',c)       
#         if computer_input =='water':
#             print('YOU LOST')
#             c+=1
#             print('Player:   ',p)
#             print('Computer: ',c)
#         if computer_input =='gun':
#             print("DRAW") 
#             print('Player:   ',p)
#             print('Computer: ',c)


# if p>c:
#     print("\nYOU WON THE GAME")
# elif p==c:
#     print("\nIT'S A DRAW")
# else: 
#     print("\nYOU LOST THE GAME")


## Rock , Paper , Scissors 
import random
choices = ('r','p','s')

def get_usr_choice():
    while True:
        usr_input = input("Rock , paper or scissors? (r,p,s): ").lower()
        if usr_input in choices:
            return usr_input
        else:
            print("Invalid Choice")

def display_choice(usr_input,comp_choice):
    print(f"You chose {usr_input}")
    print(f"Computer chose {comp_choice}")

def determine_winner(usr_input,comp_choice):
        if usr_input == comp_choice :
            print("TIE!")
        elif (
            (usr_input == 'r' and comp_choice == 's') or 
            (usr_input == 'p' and comp_choice == 'r') or 
            (usr_input == 's' and comp_choice == 'p')) : 
                print ("You win ")
        else: 
            print("You lose ")

def play_game():
    while True:
        usr_input = get_usr_choice()
        comp_choice = random.choice(choices)
        
        display_choice(usr_input,comp_choice)
        determine_winner(usr_input,comp_choice)

        should_continue = input("continue (y/n): ").lower()
        if should_continue == 'n':
            break

play_game()


if __name__  == "__main__"

