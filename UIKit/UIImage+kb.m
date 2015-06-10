//
//  UIImage+kb.m
//  crmZztx
//
//  Created by zx on 9/15/14.
//  Copyright (c) 2014 zztx All rights reserved.
//

#import "UIImage+kb.h"

@implementation UIImage (kb)
- (NSInteger)kb {
     NSData* data = UIImagePNGRepresentation(self);
    return data.length/1024;
}
@end
