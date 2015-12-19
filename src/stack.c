/*
 * Stack (LIFO) - Optimized for 8 bits uP
 * Copyright (C) 2015 - Luigi E. Sica Nery
 *
 * This program is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of  MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "../include/stack.h"

void stackInit(stack_t* stck, unsigned char* stckv, unsigned char size) {
    stck->stckv = stckv;
    stck->size = size;
    stck->now = 0;
}

void stackPush(stack_t* stck, unsigned char d){
    stck->stckv[stck->now] = d;
    stck->now++;
}

unsigned char stackPop(stack_t* stck){
    stck->now = stck->now - 1;

    return stck->stckv[stck->now];
}

unsigned char stackTop(stack_t* stck){
    unsigned char prev = stck->now - 1;

    return stck->stckv[prev];
}

unsigned char stackFull(stack_t* stck){
    if(stck->now >= stck->size - 1)
        return 1;
    return 0;
}

unsigned char stackEmpty(stack_t* stck){
    if(stck->now == 0)
        return 1;
    return 0;
}
