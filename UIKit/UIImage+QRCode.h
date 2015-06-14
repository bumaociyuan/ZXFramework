//
//  UIImage+QRCode.h
//  crmZztx
//
//  Created by zx on 6/9/15.
//  Copyright (c) 2015 zztx. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (QRCode)
+ (UIImage *)QRCodeImageWithString:(NSString *)string scale:(CGFloat)scale;
@end
