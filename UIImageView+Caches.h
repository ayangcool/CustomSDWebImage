//
//  UIImageView+Caches.h
//  ZYImageCache
//
//  Created by wxg on 14-8-26.
//  Copyright (c) 2014年 ZY. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ZYImageManager.h"

@interface UIImageView (Caches)

- (void)setImageWithURLString:(NSString *)urlString;

- (void)setImageWithURLString:(NSString *)urlString placeholder:(UIImage *)image;

@end
