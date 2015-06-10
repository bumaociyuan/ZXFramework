//
//  UIScrollView+scrollToBottom.h
//  crmZztx
//
//  Created by zx on 7/1/14.
//  Copyright (c) 2014 zztx All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIScrollView (scrollToBottom)
- (void)scrollToBottom:(BOOL)animated;
- (void)scrollPointToBottom:(CGPoint)point animated:(BOOL)animated;
@end
