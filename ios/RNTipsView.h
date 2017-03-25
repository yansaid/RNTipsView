//
//  RNTipsView.h
//  RNTipsView
//
//  Created by yan on 2017/3/24.
//  Copyright © 2017年 Facebook. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface RNTipsView : UIView

- (NSData *)exportWithRect:(CGRect)rect;
- (void)clear;

@end