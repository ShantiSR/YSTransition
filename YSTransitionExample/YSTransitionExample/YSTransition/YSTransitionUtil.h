//
//  YSTransitionUtil.h
//  YSTransitionExample
//
//  Created by ysakui on 2013/11/01.
//  Copyright (c) 2013年 YoshimitsuSakui. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, YSTransitionType) {
    YSTransitionTypeFromRight,
    YSTransitionTypeFromLeft,
    YSTransitionTypeFromTop,
    YSTransitionTypeFromBottom,
};

@interface YSTransitionUtil : NSObject

+ (UIImage *)getCaptureOfView:(UIView *)view;
+ (NSString *)convertTransitionType:(YSTransitionType)transitionType;

@end
