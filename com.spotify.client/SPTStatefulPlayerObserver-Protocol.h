//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSNumber, SPTStatefulPlayer;

@protocol SPTStatefulPlayerObserver <NSObject>
- (void)playerDidFinishUpdating:(SPTStatefulPlayer *)arg1;
- (void)playerDidUpdatePlaybackControls:(SPTStatefulPlayer *)arg1;
- (void)playerDidUpdateTrackPosition:(SPTStatefulPlayer *)arg1;
- (void)player:(SPTStatefulPlayer *)arg1 didMoveToRelativeTrack:(NSNumber *)arg2;
@end

