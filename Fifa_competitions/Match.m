//
//  Match.m
//  Fifa_competitions
//
//  Created by Andy Chikalo on 11/18/16.
//  Copyright © 2016 ios.dev. All rights reserved.
//

#import "Match.h"

@implementation Match

+ (NSDictionary *)defaultPropertyValues {
    return @{@"homeGoals" : @(-1), @"awayGoals": @(-1), @"played": @(false), @"statsFlag" : @(false)};
}

+ (NSString *)primaryKey {
    return @"id";
}

@end
