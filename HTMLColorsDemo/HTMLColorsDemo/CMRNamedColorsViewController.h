//
//  CMRNamedColorsViewController.h
//  HTMLColorsDemo
//
//  Created by James Lawton on 12/10/12.
//  Copyright (c) 2012 James Lawton. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CMRNamedColorsViewController : UITableViewController

@property (nonatomic, copy) void(^colorSelected)(NSString *colorName);

@end
