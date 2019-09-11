//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTRadioTestManager-Protocol.h"

@class NSString;
@protocol SPTAbbaService, SPTFeatureFlagFactory, SPTFeatureFlagSignal, SPTLegacyFeatureFlag, SPTLocalSettings, SPTProductState;

@interface SPTRadioTestManagerImplementation : NSObject <SPTRadioTestManager>
{
    _Bool contextMenuPlaylistRadioHidden;
    _Bool radioContextMenuUsingFormatListLinks;
    _Bool userOnFreeProduct;
    id <SPTAbbaService> _abbaService;
    id <SPTProductState> _productState;
    id <SPTLocalSettings> _localSettings;
    id <SPTFeatureFlagFactory> _featureFlagFactory;
    id <SPTLegacyFeatureFlag> _dailyMixCollectionFlag;
    id <SPTLegacyFeatureFlag> _infinitePlaybackFlag;
    id <SPTLegacyFeatureFlag> _uriTransitionFlag;
    id <SPTFeatureFlagSignal> _radioContextMenuFormatlistLinksObserver;
    id <SPTFeatureFlagSignal> _contextMenuPlaylistRadioHiddenObserver;
    id <SPTFeatureFlagSignal> _freeTierEnabledSignal;
}

@property(retain, nonatomic) id <SPTFeatureFlagSignal> freeTierEnabledSignal; // @synthesize freeTierEnabledSignal=_freeTierEnabledSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> contextMenuPlaylistRadioHiddenObserver; // @synthesize contextMenuPlaylistRadioHiddenObserver=_contextMenuPlaylistRadioHiddenObserver;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> radioContextMenuFormatlistLinksObserver; // @synthesize radioContextMenuFormatlistLinksObserver=_radioContextMenuFormatlistLinksObserver;
@property(retain, nonatomic) id <SPTLegacyFeatureFlag> uriTransitionFlag; // @synthesize uriTransitionFlag=_uriTransitionFlag;
@property(retain, nonatomic) id <SPTLegacyFeatureFlag> infinitePlaybackFlag; // @synthesize infinitePlaybackFlag=_infinitePlaybackFlag;
@property(retain, nonatomic) id <SPTLegacyFeatureFlag> dailyMixCollectionFlag; // @synthesize dailyMixCollectionFlag=_dailyMixCollectionFlag;
@property(readonly, nonatomic) id <SPTFeatureFlagFactory> featureFlagFactory; // @synthesize featureFlagFactory=_featureFlagFactory;
@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(readonly, nonatomic) __weak id <SPTAbbaService> abbaService; // @synthesize abbaService=_abbaService;
@property(nonatomic, getter=isUserOnFreeProduct) _Bool userOnFreeProduct; // @synthesize userOnFreeProduct;
@property(nonatomic, getter=isRadioContextMenuUsingFormatListLinks) _Bool radioContextMenuUsingFormatListLinks; // @synthesize radioContextMenuUsingFormatListLinks;
@property(nonatomic, getter=isContextMenuPlaylistRadioHidden) _Bool contextMenuPlaylistRadioHidden; // @synthesize contextMenuPlaylistRadioHidden;
- (void).cxx_destruct;
- (_Bool)isNPTUser;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)configureContextMenuPlaylistRadioHiddenFlag;
- (void)configureContextMenuLinksFlag;
@property(readonly, nonatomic, getter=isRadioURITransitionEnabled) _Bool radioURITransitionEnabled;
@property(readonly, nonatomic, getter=isInfinitePlaybackEnabled) _Bool infinitePlaybackEnabled;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled;
- (void)dealloc;
- (id)initWithAbbaFeature:(id)arg1 productState:(id)arg2 localSettings:(id)arg3 freeTierEnabledSignal:(id)arg4 featureFlagFactory:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

