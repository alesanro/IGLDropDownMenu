//
//  IGLDropDownItem.h
//  IGLDropDownMenuDemo
//
//  Created by Galvin Li on 8/30/14.
//  Copyright (c) 2014 Galvin Li. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface IGLDropDownItem : UIControl

@property (nonatomic, assign) NSInteger index;
@property (nonatomic, strong) UIImage *iconImage;
@property (nonatomic, strong) id object;
@property (nonatomic, copy) NSString *text;

@property (nonatomic, strong, readonly) UILabel *textLabel;

@property (nonatomic, assign) CGFloat paddingLeft;

@property (nonatomic, assign) BOOL useShaow;

@property (nonatomic, strong) UIColor *bgColor;

@property (nonatomic, strong) UIColor *textColor;

@property (nonatomic, strong) UIFont *textFont;

- (id)copyWithZone:(NSZone *)zone;

@end
