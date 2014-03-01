//
//  UIImage+TintColor.h
//  NewsBoard
//
//  Created by Peter Liu on 13-9-4.
//  Copyright (c) 2013年 NetEase.com, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (TintColor)

- (UIImage *)imageTintedWithColor:(UIColor *)color;
- (UIImage *)imageTintedWithColor:(UIColor *)color fraction:(CGFloat)fraction;

@end
