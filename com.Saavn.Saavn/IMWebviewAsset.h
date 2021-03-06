//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMAsset.h"

#import "IMConfigDelegate-Protocol.h"
#import "IMRenderViewDelegate-Protocol.h"

@class IMAdsConfig, IMRenderView, IMVastCompanion, NSArray, NSDictionary, NSString;

@interface IMWebviewAsset : IMAsset <IMRenderViewDelegate, IMConfigDelegate>
{
    _Bool _shouldPreload;
    _Bool _isWaitingForWebViewToLoad;
    int _displayedScreens;
    IMRenderView *_renderView;
    NSString *_dataType;
    IMAdsConfig *_config;
    IMVastCompanion *_companion;
    NSArray *_companionErrorTrackers;
    NSString *_companionValue;
    unsigned long long _foundResourceType;
    NSDictionary *_companionExtensionTrackers;
}

@property _Bool isWaitingForWebViewToLoad; // @synthesize isWaitingForWebViewToLoad=_isWaitingForWebViewToLoad;
@property(nonatomic) int displayedScreens; // @synthesize displayedScreens=_displayedScreens;
@property(retain, nonatomic) NSDictionary *companionExtensionTrackers; // @synthesize companionExtensionTrackers=_companionExtensionTrackers;
@property(nonatomic) unsigned long long foundResourceType; // @synthesize foundResourceType=_foundResourceType;
@property(retain, nonatomic) NSString *companionValue; // @synthesize companionValue=_companionValue;
@property(retain, nonatomic) NSArray *companionErrorTrackers; // @synthesize companionErrorTrackers=_companionErrorTrackers;
@property(retain, nonatomic) IMVastCompanion *companion; // @synthesize companion=_companion;
@property(retain, nonatomic) IMAdsConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) NSString *dataType; // @synthesize dataType=_dataType;
@property(retain, nonatomic) IMRenderView *renderView; // @synthesize renderView=_renderView;
@property(nonatomic) _Bool shouldPreload; // @synthesize shouldPreload=_shouldPreload;
- (void).cxx_destruct;
- (void)imRenderViewDidInteractWithParams:(id)arg1 onRenderView:(id)arg2;
- (void)imRenderViewAdWillLeaveApplication:(id)arg1;
- (void)imRenderViewDidDismissScreen:(id)arg1;
- (void)imRenderViewWillDismissScreeen:(id)arg1;
- (void)imRenderViewDidPresentScreen:(id)arg1;
- (void)imRenderViewWillPresentScreen:(id)arg1;
- (void)imRenderViewFireAdFailed:(id)arg1;
- (void)imRenderViewFireAdReady:(id)arg1;
- (void)imRenderViewFireSkipForWebView:(id)arg1 onScheme:(id)arg2;
- (void)imRenderView:(id)arg1 showEndCardForWebVideoOnScheme:(id)arg2;
- (id)imRenderViewFetchBlob:(id)arg1;
- (_Bool)imRenderView:(id)arg1 saveBlob:(id)arg2;
- (void)imRenderView:(id)arg1 setCloseEndCardTracker:(id)arg2;
- (void)imRenderViewAdWasInteracted:(id)arg1;
- (void)imRenderView:(id)arg1 failedToLoad:(id)arg2;
- (void)imRenderViewFinishedLoading:(id)arg1;
- (void)imRenderViewStartedLoading:(id)arg1;
- (void)imRenderViewAppearOnScreen:(id)arg1;
- (void)fireSkipEventToWebView;
- (void)fireCloseEventToWebView;
- (void)fireReplayEventToWebView;
- (id)urlByReplacingCacheBustingMacro:(id)arg1;
- (void)fireCompanionViewTrackers;
- (void)configUpdated:(id)arg1;
- (void)fireTelemetryEventForAutoRedirectionForCommand:(id)arg1;
- (_Bool)shouldAllowAutoRedirectionForUserClickedOnRenderView:(_Bool)arg1;
- (id)webviewBgColor;
- (long long)webViewPreference;
- (void)sendCallbackForAssetFailed;
- (void)startLoadingWebview;
- (id)sendMalformedDictionary;
- (id)createViewWithProperties:(id)arg1;
- (void)recycleView;
- (void)updatePropertiesOnView;
- (void)fetchAssetResources;
- (id)buildAssetViewWithScale:(double)arg1;
- (id)initWithJson:(id)arg1 withStyles:(id)arg2 atJPath:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

