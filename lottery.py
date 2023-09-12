import random
from colorama import*

#TODO: save random numbers as lists and compare either each element of that
# lists and lists itself

def run_lottery():

    # lotto set
    random_num = random.sample(range(1,35), 5)
    plus_random_num = random.randint(1,4)
    print(random_num, Fore.RED + str(plus_random_num), Style.RESET_ALL)

    # my set
    my_random_num = random.sample(range(1,35), 5)
    plus_my_random_num = random.randint(1,4)
    print(Fore.GREEN + str(my_random_num), Style.RESET_ALL, 
    Fore.RED + str(plus_my_random_num), Style.RESET_ALL)

    print("---------------------------|")

# below you can specify how many lotteries you want to run 
x = 0
number_of_lotteries = int(input("Type how many times lottery should run: "))
while x < number_of_lotteries:
    x += 1
    run_lottery()    