//
//  NSObject+isEqual.h
//  crmZztx
//
//  Created by zx on 10/9/14.
//  Copyright (c) 2014 zztx All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (isEqual)
/**
 *  判断obj 相等//---NSNumber和NSString可以比较intValue
 *
 *  @param object NSNumber, NSString, NSDictionary, NSArray,
 *
 *  @return isEqual
 */
- (BOOL)zx_isEqual:(id)object;
@end
