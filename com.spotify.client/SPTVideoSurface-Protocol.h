//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CALayer, NSString;

@protocol SPTVideoSurface <NSObject>
@property(nonatomic) long long priority;
@property(readonly, nonatomic) CALayer *playerLayer;
@property(readonly, nonatomic, getter=isFullscreen) _Bool fullscreen;
@property(readonly, nonatomic) NSString *identifier;
@property(nonatomic) __weak id <SPTVideoSurfaceDelegate> delegate;
@property(readonly, nonatomic) struct CGRect videoRect;
@property(nonatomic) long long gravity;
@property(nonatomic, getter=isEnabled) _Bool enabled;
@property(readonly, nonatomic, getter=isAttached) _Bool attached;
- (void)setGravity:(long long)arg1 animated:(_Bool)arg2;
@end

