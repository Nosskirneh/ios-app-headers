//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIView;
@protocol SPTVideoSurface;

@protocol SPTVideoSurfaceContextDelegate <NSObject>
- (void)videoSurfacePriorityChanged:(UIView<SPTVideoSurface> *)arg1;
- (void)videoSurfaceEligibleForAttachmentChanged:(UIView<SPTVideoSurface> *)arg1;
- (void)videoSurfaceSizeDidChangeWhileAttached:(UIView<SPTVideoSurface> *)arg1;
@end

