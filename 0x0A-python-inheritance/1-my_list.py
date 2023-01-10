#!/usr/bin/python3

'''
My list
'''


class MyList(list):
    '''
    My list object
    '''
    def __init__(self):
        list.__init__(self)

    def print_sorted(self):
        '''
        prints sorted objects
        '''
        sort = self.sort()
        print(sort)
