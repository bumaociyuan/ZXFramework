//
//  UITableViewCell+IsChecked.m
//  crmZztx
//
//  Created by zx on 6/15/15.
//  Copyright (c) 2015 zztx. All rights reserved.
//

#import "UITableViewCell+IsChecked.h"

@implementation UITableViewCell (IsChecked)

- (void)setChecked:(BOOL)checked {
    self.accessoryType = checked ? UITableViewCellAccessoryCheckmark : UITableViewCellAccessoryNone;
}

- (BOOL)isChecked {
    return self.accessoryType == UITableViewCellAccessoryCheckmark;
}

@end
