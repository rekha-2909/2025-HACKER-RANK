if __name__ == '__main__':
    alist = []
    for i in range(int(input())):
        name = input()
        score = float(input())
        alist.append([name, score])
    
    # Find the second-highest score
    second_highest = sorted(set([score for name, score in alist]))[1]
    
    # Find all names with the second-highest score and sort them
    result = sorted([name for name, score in alist if score == second_highest])
    
    # Print the results
    print('\n'.join(result))
