//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, VCEBridge, VCEDiscover, VCEMeta, VCENativeBridge, VCEState;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SCORVCE : NSObject
{
    NSObject<OS_dispatch_source> *_timerCookieValTick;
    NSObject<OS_dispatch_queue> *_serialQueueCSVCE;
    NSObject<OS_dispatch_queue> *_serialQueueCookieValTick;
    NSObject<OS_dispatch_queue> *_serialQueueHitTestTick;
    Class _wkWebView;
    VCEDiscover *_vceDiscover;
    VCEState *_vceState;
    VCEMeta *_vceMeta;
    VCEBridge *_vceBridge;
    VCENativeBridge *_vceNativeBridge;
    NSMapTable *_vcMapTable;
}

+ (_Bool)initialized;
+ (_Bool)enabled;
+ (void)disable;
+ (id)sdkVersion;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMapTable *vcMapTable; // @synthesize vcMapTable=_vcMapTable;
@property(retain, nonatomic) VCENativeBridge *vceNativeBridge; // @synthesize vceNativeBridge=_vceNativeBridge;
@property(retain, nonatomic) VCEBridge *vceBridge; // @synthesize vceBridge=_vceBridge;
@property(retain, nonatomic) VCEMeta *vceMeta; // @synthesize vceMeta=_vceMeta;
@property(retain, nonatomic) VCEState *vceState; // @synthesize vceState=_vceState;
@property(retain, nonatomic) VCEDiscover *vceDiscover; // @synthesize vceDiscover=_vceDiscover;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cleanAdView:(id)arg1;
- (id)uniqueID;
- (void)updateMetaInfoShouldReconnect:(_Bool)arg1 shouldUpdatePartnerID:(_Bool)arg2 shouldUpdateAPIMethodNumber:(_Bool)arg3 checkforIDFAUpdate:(_Bool)arg4;
- (void)reConnect;
- (void)willTerminate:(id)arg1;
- (void)didBecomeActive:(id)arg1;
- (void)willResignActive:(id)arg1;
- (void)willEnterForeground:(id)arg1;
- (void)didEnterBackground:(id)arg1;
- (void)registerForNotifications;
- (void)deFocus:(id)arg1;
- (void)reFocus:(id)arg1;
- (void)cookieValTick;
- (_Bool)checkForAdViewName:(id)arg1;
- (void)trackDiscAdView:(id)arg1;
- (void)checkAdView:(id)arg1;
- (void)checkPendingAdViews;
- (void)checkAlert:(_Bool)arg1;
- (void)checkFocus;
- (_Bool)autoDiscoveryOn;
- (void)stopTick;
- (void)startTick;
- (void)stopTrackingNativeView:(id)arg1;
- (void)trackNativeView:(id)arg1 forEventName:(id)arg2 withEventURL:(id)arg3 withParamsDict:(id)arg4;
- (void)trackNativeView:(id)arg1 withTrackingURL:(id)arg2 withEventName:(id)arg3 isVideo:(_Bool)arg4 withParamsDict:(id)arg5;
- (void)trackNativeView:(id)arg1 withTrackingURL:(id)arg2;
- (void)checkForNativeScript;
- (void)dictForAdView:(id)arg1 andVC:(id)arg2;
- (void)trackForView:(id)arg1;
- (void)trackForView:(id)arg1 withAPIMethodNumber:(id)arg2;
- (void)trackAdViewArray:(id)arg1;
- (void)trackAdView:(id)arg1;
- (void)loadNativeVCEScript;
- (void)loadGGScript;
- (void)createSharedCookie;
- (void)nativeTrack;
- (void)manualTrack;
- (id)init;
- (void)appendPublisherID:(id)arg1;
- (void)appendPartnerID:(id)arg1;
- (id)hitTestQueue;
- (id)csVCEQueue;
- (id)initPrivate;
- (void)discoverAndTrackAdViewLocal;
- (void)discoverAndTrackAdClassNames:(id)arg1;
- (void)discoverAndTrackAds;
- (void)addPublisherID:(id)arg1;
- (void)addPartnerID:(id)arg1;

@end

