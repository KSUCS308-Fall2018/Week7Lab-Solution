//
//  types.h
//  Week 7 
//
//  Created by Ashley Coleman on 7/5/18.
//  Copyright © 2018 Ashley Coleman. All rights reserved.
//

#ifndef types_h
#define types_h

typedef struct LinkedList {
    enum { Integer, Character, Float } type;
    union {
        int i;
        char c;
        float f;
    } value;
    struct LinkedList * next;
} LinkedList;

typedef enum { FALSE, TRUE } bool;

#endif /* types_h */
