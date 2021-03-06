//
//  UIViewController+addChildViewControllerWithFrame.h
//  crmZztx
//
//  Created by zx on 11/20/14.
//  Copyright (c) 2014 zztx All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIViewController (addChildViewControllerWithFrame)
- (void)addChildViewController:(UIViewController *)childController frame:(CGRect)frame;
- (void)addChildViewController:(UIViewController *)childController operation:(void(^)(UIViewController *parentControler, UIViewController *childController))operation;
@end
