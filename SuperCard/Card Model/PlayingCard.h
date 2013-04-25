//
//  PlayingCard.h
//  Machismo
//
//  Created by Marcelo Mazzotti on 20/4/13.
//  Copyright (c) 2013 Marcelo Mazzotti. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSArray *)rankStrings;
+ (NSUInteger)maxRank;

@end
