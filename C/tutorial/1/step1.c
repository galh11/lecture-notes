#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void sortContactsByLastName(contact** contacts, int size)
{
    if(size == 2)
    {
        if(strcomp(cotacts[0]->last_name, contacts[1]->last.name) == 1)
        {
            swap(contacts, contacts + 1)
        }
        return;
    }

    sortContactsByLastName(contacts, size/2);
    sortContactsByLastName(contacts + size/2 + 1, size/2 - 1);
    
}

void mergeSort()

int main(void)
{
    
    return 0;
}