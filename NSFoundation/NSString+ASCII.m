//
//  NSString+ASCII.m
//  crmZztx
//
//  Created by zx on 10/31/14.
//  Copyright (c) 2014 zztx All rights reserved.
//

#import "NSString+ASCII.h"

@implementation NSString (ASCII)

- (NSInteger)ASCIICode {
    NSInteger asciiCode = [self characterAtIndex:0]; // 65
    return asciiCode;
}

+ (NSString *)stringWithASCIICode:(NSInteger)asciiCode {
    NSString *string = [NSString stringWithFormat:@"%c", asciiCode]; // A
    return string;
}
@end
