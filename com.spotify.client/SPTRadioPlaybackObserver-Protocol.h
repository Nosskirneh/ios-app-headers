//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, SPTRadioPlaybackService, SPTRadioStation;

@protocol SPTRadioPlaybackObserver <NSObject>

@optional
- (void)radioPlaybackService:(SPTRadioPlaybackService *)arg1 error:(NSError *)arg2;
- (void)radioPlaybackService:(SPTRadioPlaybackService *)arg1 didUpdateTracksForStation:(SPTRadioStation *)arg2;
- (void)radioPlaybackServiceCurrentTrackChanged:(SPTRadioPlaybackService *)arg1;
- (void)radioPlaybackService:(SPTRadioPlaybackService *)arg1 playbackStateChanged:(unsigned long long)arg2;
@end

