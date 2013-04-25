//
//  Card.m
//  Machismo
//
//  Created by Marcelo Mazzotti on 20/4/13.
//  Copyright (c) 2013 Marcelo Mazzotti. All rights reserved.
//

#import "Card.h"

@implementation Card

- (int)match:(NSArray *)otherCards
{
    int score = 0;
    
    for (Card *card in otherCards) {
        if ([card.contents isEqualToString:self.contents]) {
            score = 1;
        }
    }
    
    return score;
}

@end
