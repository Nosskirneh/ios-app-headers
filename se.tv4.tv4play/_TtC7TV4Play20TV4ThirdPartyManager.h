//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TV4BurtManagerDelegate-Protocol.h"

@interface _TtC7TV4Play20TV4ThirdPartyManager : NSObject <TV4BurtManagerDelegate>
{
    // Error parsing type: , name: burtManager
    // Error parsing type: , name: bbManager
    // Error parsing type: , name: ganManager
    // Error parsing type: , name: sifoManager
}

+ (id)sharedManager;
- (CDUnknownBlockType).cxx_destruct;
- (void)didReceiveBurtSegments:(id)arg1;
- (id)genreWithPlayableAsset:(id)arg1 atIndex:(long long)arg2;
- (id)convertToAsciiFromUnicodeStringWithUnicodeString:(id)arg1;
- (void)trackPlayableAssetStarted:(id)arg1;
- (void)trackPageview:(id)arg1;
- (void)onBufferingEnd:(double)arg1;
- (void)onBufferingStart:(double)arg1 isSeeking:(_Bool)arg2;
- (void)onFinished;
- (void)onPlayingAd:(id)arg1 withMovie:(id)arg2 isPreroll:(_Bool)arg3;
- (void)onPlaying:(id)arg1 userType:(id)arg2;
- (void)onPlayerClosed;
- (void)setupSifo;
- (void)trackEvent:(id)arg1 action:(id)arg2 label:(id)arg3 value:(long long)arg4;
- (void)trackEvent:(id)arg1 action:(id)arg2 label:(id)arg3 customDimensionIndexes:(id)arg4 customValues:(id)arg5;
- (void)trackEvent:(id)arg1 action:(id)arg2 label:(id)arg3;
- (void)trackProgramPushEventWithAction:(id)arg1 label:(id)arg2 deliveryId:(id)arg3 programNid:(id)arg4;
- (void)trackNewsPushEventWithAction:(id)arg1 label:(id)arg2 assetId:(id)arg3;
- (void)getServerTime:(CDUnknownBlockType)arg1;
- (void)startGAWithAccountId:(id)arg1 hardware:(id)arg2 iosVersion:(id)arg3 appVersion:(id)arg4;
- (id)getBonnierBroadcastingManager;
- (id)getBurtManager;
- (id)init;

@end
