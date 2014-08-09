//
//  BirdSighting.m
//  BirdWatching
//
//  Created by TAE on 2014/08/03.
//  Copyright (c) 2014年 TAEKO AKATSUKA. All rights reserved.
//

#import "BirdSighting.h"

@implementation BirdSighting

-(id)initWithName:(NSString *)name location:(NSString *)location date:(NSDate *)date

{
    self = [super init];
    if (self) {
        _name = name;
        _location = location;
        _date = date;
        return self;
    }
    return nil;
}

@end
