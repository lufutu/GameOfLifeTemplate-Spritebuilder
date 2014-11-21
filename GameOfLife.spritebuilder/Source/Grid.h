//
//  Grid.h
//  GameOfLife
//
//  Created by Tu Truong on 11/21/14.
//  Copyright (c) 2014 Apportable. All rights reserved.
//

#import "CCSprite.h"

@interface Grid : CCSprite
@property (nonatomic, assign) int totalAlive;
@property (nonatomic, assign) int generation;
@end
