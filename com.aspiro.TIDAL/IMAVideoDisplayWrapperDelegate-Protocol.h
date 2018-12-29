//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IMAVideoDisplayWrapper;

@protocol IMAVideoDisplayWrapperDelegate <NSObject>
- (_Bool)videoDisplayWrapperShouldPlayAd:(IMAVideoDisplayWrapper *)arg1;
- (void)videoDisplayWrapperDidStartBuffering:(IMAVideoDisplayWrapper *)arg1;
- (void)videoDisplayWrapperPlaybackReady:(IMAVideoDisplayWrapper *)arg1;
- (void)videoDisplayWrapperDidLoad:(IMAVideoDisplayWrapper *)arg1;
- (void)videoDisplayWrapperDidResume:(IMAVideoDisplayWrapper *)arg1;
- (void)videoDisplayWrapperDidPause:(IMAVideoDisplayWrapper *)arg1;
- (void)videoDisplayWrapper:(IMAVideoDisplayWrapper *)arg1 didBufferToMediaTime:(double)arg2;
- (void)videoDisplayWrapper:(IMAVideoDisplayWrapper *)arg1 didProgressWithMediaTime:(double)arg2 totalTime:(double)arg3;
@end
