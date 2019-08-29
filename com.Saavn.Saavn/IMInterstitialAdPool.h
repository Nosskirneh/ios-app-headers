//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMAdPool.h"

#import "IMConfigDelegate-Protocol.h"
#import "IMInterstitialAdUnitDelegate-Protocol.h"

@class NSString;

@interface IMInterstitialAdPool : IMAdPool <IMInterstitialAdUnitDelegate, IMConfigDelegate>
{
}

+ (id)getSharedAdPoolForPlacementID:(long long)arg1;
- (id)getAdMetaInfo;
- (void)adUnit:(id)arg1 failedToGetSignalsWithErrorCode:(int)arg2 andDescription:(id)arg3;
- (void)adUnit:(id)arg1 didGetSignals:(id)arg2;
- (void)ad:(id)arg1 didFailToLoadWithErrorCode:(int)arg2 andDescription:(id)arg3;
- (void)adPrefetchComplete:(id)arg1;
- (void)adDidFinishLoad:(id)arg1;
- (void)adIsAvailable:(id)arg1;
- (id)creativeId;
- (void)warmCache;
- (void)registerForAdWithDelegate:(id)arg1;
- (void)getSignalsWithExtras:(id)arg1 withKeywords:(id)arg2 andDelegate:(id)arg3;
- (id)getAdUnitForPlacementID:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

