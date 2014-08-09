//
//  BirdSightingDataController.h
//  BirdWatching
//
//  Created by TAE on 2014/08/03.
//  Copyright (c) 2014年 TAEKO AKATSUKA. All rights reserved.
//

#import <Foundation/Foundation.h>

@class BirdSighting;

@interface BirdSightingDataController : NSObject

@property (nonatomic, copy) NSMutableArray *masterBirdSightingList;

- (NSUInteger)countOfList;
- (BirdSighting *)objectInListAtIndex:(NSUInteger)theIndex;
- (void)addBirdSightingWithSighting:(BirdSighting *)sighting;

@end
