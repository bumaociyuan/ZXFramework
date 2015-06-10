//
//  UIImage+fixOrientation.h
//  crmZztx
//
//  Created by zx on 9/15/14.
//  Copyright (c) 2014 zztx All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (fixOrientation)

- (UIImage *)fixOrientation:(UIImage *)srcImg;
+ (UIImage *)fixOrientation:(UIImage *)srcImg;

@end
