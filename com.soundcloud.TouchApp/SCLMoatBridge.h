//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSHashTable, NSMutableArray;

@interface SCLMoatBridge : NSObject
{
    _Bool _webViewLoaded;
    _Bool _beganBridgeInitialization;
    int _hasNativeAds;
    NSHashTable *_trackers;
    NSDate *_creationTime;
    NSHashTable *_trackersWithNewAdRequested;
    NSMutableArray *_trackersWithStartRequested;
    NSMutableArray *_pendingJSCommands;
}

+ (id)getLocationJSONDict;
+ (void)insertLocationIntoRectsJSONDict:(id)arg1;
@property(retain) NSMutableArray *pendingJSCommands; // @synthesize pendingJSCommands=_pendingJSCommands;
@property _Bool beganBridgeInitialization; // @synthesize beganBridgeInitialization=_beganBridgeInitialization;
@property(retain) NSMutableArray *trackersWithStartRequested; // @synthesize trackersWithStartRequested=_trackersWithStartRequested;
@property(retain) NSHashTable *trackersWithNewAdRequested; // @synthesize trackersWithNewAdRequested=_trackersWithNewAdRequested;
@property _Bool webViewLoaded; // @synthesize webViewLoaded=_webViewLoaded;
@property(retain, nonatomic) NSDate *creationTime; // @synthesize creationTime=_creationTime;
@property(nonatomic) int hasNativeAds; // @synthesize hasNativeAds=_hasNativeAds;
@property(retain) NSHashTable *trackers; // @synthesize trackers=_trackers;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stopViewabilityLoopNotifications;
- (void)stopMetadataLoopNotifications;
- (void)stopJSLoopNotifications;
- (void)resendMetadata:(id)arg1;
- (void)sendViewabilityInfo:(id)arg1;
- (void)handleJSResponse:(id)arg1;
- (void)checkAndSendJS:(id)arg1;
- (void)markImpressionEndForTracker:(id)arg1;
- (void)markImpressionStartForTracker:(id)arg1;
- (void)markNewAd:(id)arg1;
- (void)markMoatActive;
- (id)getJSEnvString;
- (id)getMetadata;
- (id)getBasicMetadata;
- (void)sendUserInteractionEvent:(id)arg1;
- (void)webViewFinishedLoading;
- (void)stopTrackingImpression:(id)arg1;
- (void)startTrackingImpression:(id)arg1;
- (void)addTracker:(id)arg1;
- (id)initWithWebView:(id)arg1 forNativeAds:(_Bool)arg2;

@end
