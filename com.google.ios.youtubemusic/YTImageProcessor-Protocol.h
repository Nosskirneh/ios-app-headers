//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIImage;

@protocol YTImageProcessor <NSObject>

@optional
- (void)didDrawInContext:(struct CGContext *)arg1;
- (void)willDrawInContext:(struct CGContext *)arg1;
- (UIImage *)modifiedImageForImage:(UIImage *)arg1;
- (UIImage *)defaultImage;
@end
