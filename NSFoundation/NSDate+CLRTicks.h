//
//  NSDate+CLRTicks.h
//  crmZztx
//
//  Created by zx on 6/18/14.
//  Copyright (c) 2014 zztx All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (CLRTicks)
+ (NSDate *)dateWithCLRTicks:(long long)ticks;
+ (long long)ticksWithDate:(NSDate *)date;

- (long long)ticksTime;
@end
