//
//  BirdSighting.h
//  BirdWatching
//
//  Created by TAE on 2014/08/03.
//  Copyright (c) 2014年 TAEKO AKATSUKA. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BirdSighting : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *location;
@property (nonatomic, strong) NSDate *date;

- (id)initWithName:(NSString *)name location:(NSString *)location date:(NSDate *)date;

@end
