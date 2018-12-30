//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface UIView (Glow)
- (void)stopGlowingAnimated:(_Bool)arg1;
- (void)startGlowingAnimated:(_Bool)arg1;
- (void)startGlowing;
- (void)glowOnce;
- (void)glowOnceAtLocation:(struct CGPoint)arg1 inView:(id)arg2;
- (void)startGlowingWithColor:(id)arg1 fromIntensity:(double)arg2 toIntensity:(double)arg3 radius:(double)arg4 overdub:(unsigned long long)arg5 animated:(_Bool)arg6 repeat:(_Bool)arg7;
- (void)startGlowingWithColor:(id)arg1 intensity:(double)arg2 animated:(_Bool)arg3;
- (void)setGlowView:(id)arg1;
@property(readonly, nonatomic) UIView *glowView;
@end
