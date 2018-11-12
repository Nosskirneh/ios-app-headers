//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SPTPlayerState, SPTPlayerTrack, UIImage;

@protocol SPTNowPlayingInfoCenterArtworkDecorator <NSObject>
- (UIImage *)decoratedArtwork:(UIImage *)arg1 forTrack:(SPTPlayerTrack *)arg2 state:(SPTPlayerState *)arg3;
- (_Bool)shouldDecorateArtworkForTrack:(SPTPlayerTrack *)arg1 state:(SPTPlayerState *)arg2;
@end

