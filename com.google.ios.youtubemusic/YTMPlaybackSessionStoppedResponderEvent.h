//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTResponderEvent.h"

@class NSError;

@interface YTMPlaybackSessionStoppedResponderEvent : YTResponderEvent
{
    long long _playbackSessionStopType;
    NSError *_underlyingError;
}

+ (id)playbackSessionStoppedEventWithType:(long long)arg1 underlyingError:(id)arg2 firstResponder:(id)arg3;
@property(readonly, nonatomic) NSError *underlyingError; // @synthesize underlyingError=_underlyingError;
@property(readonly, nonatomic) long long playbackSessionStopType; // @synthesize playbackSessionStopType=_playbackSessionStopType;
- (void).cxx_destruct;
- (id)initWithPlaybackSessionStopType:(long long)arg1 underlyingError:(id)arg2 firstResponder:(id)arg3;

@end

