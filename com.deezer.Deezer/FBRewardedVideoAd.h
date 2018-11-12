//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBDisplayAdControllerDelegate-Protocol.h"

@class FBDisplayAdController, FBRewardedVideoRewardData, NSString;
@protocol FBRewardedVideoAdDelegate;

@interface FBRewardedVideoAd : NSObject <FBDisplayAdControllerDelegate>
{
    _Bool _initialized;
    _Bool _ready;
    NSString *_placementID;
    id <FBRewardedVideoAdDelegate> _delegate;
    FBDisplayAdController *_adController;
    FBRewardedVideoRewardData *_rewardData;
    unsigned long long _showCount;
}

+ (void)initialize;
@property(nonatomic) unsigned long long showCount; // @synthesize showCount=_showCount;
@property(nonatomic, getter=isReady) _Bool ready; // @synthesize ready=_ready;
@property(nonatomic, getter=isInitialized) _Bool initialized; // @synthesize initialized=_initialized;
@property(retain, nonatomic) FBRewardedVideoRewardData *rewardData; // @synthesize rewardData=_rewardData;
@property(retain, nonatomic) FBDisplayAdController *adController; // @synthesize adController=_adController;
@property(nonatomic) __weak id <FBRewardedVideoAdDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *placementID; // @synthesize placementID=_placementID;
- (void).cxx_destruct;
- (void)displayAdControllerServerRewardFailed:(id)arg1;
- (void)displayAdControllerServerRewardSuccess:(id)arg1;
- (void)displayAdControllerVideoComplete:(id)arg1;
- (void)displayAdControllerStopped:(id)arg1;
- (void)displayAdControllerUserClosed:(id)arg1;
- (void)displayAdController:(id)arg1 clickThruWithURL:(id)arg2;
- (void)displayAdControllerImpression:(id)arg1;
- (void)displayAdController:(id)arg1 didFailWithError:(id)arg2;
- (void)displayAdControllerLoaded:(id)arg1;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration;
@property(readonly, nonatomic, getter=isAdValid) _Bool adValid;
- (_Bool)showAdFromRootViewController:(id)arg1 animated:(_Bool)arg2;
- (_Bool)showAdFromRootViewController:(id)arg1;
- (_Bool)setRewardDataWithUserID:(id)arg1 withCurrency:(id)arg2;
- (void)loadAdWithBidPayload:(id)arg1;
- (void)loadAd;
- (void)doLoadAd:(id)arg1;
- (id)initWithPlacementID:(id)arg1 withUserID:(id)arg2 withCurrency:(id)arg3;
- (id)initWithPlacementID:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
