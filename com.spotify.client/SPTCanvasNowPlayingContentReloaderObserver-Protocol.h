//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SPTPlayerTrack;

@protocol SPTCanvasNowPlayingContentReloaderObserver <NSObject>

@optional
- (void)didProvideContentForTrack:(SPTPlayerTrack *)arg1;
- (void)didFailToProvideContentForTrack:(SPTPlayerTrack *)arg1;
- (void)contentNeedsReloadForTrack:(SPTPlayerTrack *)arg1;
@end

