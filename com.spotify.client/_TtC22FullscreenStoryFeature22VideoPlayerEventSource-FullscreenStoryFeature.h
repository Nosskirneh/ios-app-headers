//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC22FullscreenStoryFeature22VideoPlayerEventSource.h"

#import "BMEventObserver-Protocol.h"

@interface _TtC22FullscreenStoryFeature22VideoPlayerEventSource (FullscreenStoryFeature) <BMEventObserver>
- (void)didChangeSurface:(id)arg1 atPosition:(double)arg2 timestamp:(double)arg3;
- (void)didEndPlaybackWithReason:(long long)arg1 atPosition:(double)arg2 timestamp:(double)arg3;
- (void)didBecomeReadyAtPosition:(double)arg1 timestamp:(double)arg2;
- (void)didFailWithRecoverableError:(id)arg1 atPosition:(double)arg2 timestamp:(double)arg3;
- (void)didFailWithFatalError:(id)arg1 atPosition:(double)arg2 timestamp:(double)arg3;
@end

