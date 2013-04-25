//
//  PlayingCardView.h
//  SuperCard
//
//  Created by Marcelo Mazzotti on 24/4/13.
//  Copyright (c) 2013 Marcelo Mazzotti. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PlayingCardView : UIView

@property (nonatomic) NSUInteger rank;
@property (nonatomic) NSString *suit;

@property (nonatomic) BOOL faceUP;

- (void)pinch:(UIPinchGestureRecognizer *)gesture;
@end
