//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADNAVPlayerItemProvider-Protocol.h"

@class AVPlayerItem, NSString, NSURL;

@interface GADNNetworkVideoPlayerItem : NSObject <GADNAVPlayerItemProvider>
{
    AVPlayerItem *_playerItem;
    NSURL *_videoURL;
}

- (void).cxx_destruct;
- (id)videoURL;
- (id)playerItem;
- (id)initWithVideoURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
