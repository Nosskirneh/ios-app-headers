//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBAdChooseYourOwnAdViewControllerDelegate-Protocol.h"
#import "FBAdPlayableViewControllerDelegate-Protocol.h"
#import "FBRewardedVideoAdEndCardInternalDelegate-Protocol.h"
#import "FBRewardedVideoAdVideoInternalDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class FBAdChooseYourOwnAdDataModel, FBAdChooseYourOwnAdViewController, FBAdExtraHint, FBAdPlacementDefinition, FBAdPlayableViewController, FBRewardedVideoAdDataModel, FBRewardedVideoAdEndCardInternal, FBRewardedVideoAdVideoInternal, FBRewardedVideoRewardData, NSString, UINavigationController;
@protocol FBRewardedVideoAdInternalDelegate;

@interface FBRewardedVideoAdInternal : NSObject <FBAdChooseYourOwnAdViewControllerDelegate, UINavigationControllerDelegate, FBRewardedVideoAdVideoInternalDelegate, FBRewardedVideoAdEndCardInternalDelegate, FBAdPlayableViewControllerDelegate>
{
    NSString *_placementID;
    FBRewardedVideoAdDataModel *_rewardedVideoDataModel;
    FBRewardedVideoRewardData *_rewardData;
    id <FBRewardedVideoAdInternalDelegate> _delegate;
    UINavigationController *_navigationController;
    FBAdChooseYourOwnAdViewController *_chooseYourOwnAdViewController;
    FBRewardedVideoAdVideoInternal *_videoController;
    FBRewardedVideoAdEndCardInternal *_endCardController;
    FBAdPlayableViewController *_playableController;
    long long _minViewabilityPercentage;
    FBAdPlacementDefinition *_placementDefinition;
    NSString *_dataModelType;
    FBAdChooseYourOwnAdDataModel *_chooseYourOwnAdDataModel;
    FBAdExtraHint *_extraHint;
}

+ (void)initialize;
@property(retain, nonatomic) FBAdExtraHint *extraHint; // @synthesize extraHint=_extraHint;
@property(retain, nonatomic) FBAdChooseYourOwnAdDataModel *chooseYourOwnAdDataModel; // @synthesize chooseYourOwnAdDataModel=_chooseYourOwnAdDataModel;
@property(copy, nonatomic) NSString *dataModelType; // @synthesize dataModelType=_dataModelType;
@property(retain, nonatomic) FBAdPlacementDefinition *placementDefinition; // @synthesize placementDefinition=_placementDefinition;
@property(nonatomic) long long minViewabilityPercentage; // @synthesize minViewabilityPercentage=_minViewabilityPercentage;
@property(retain, nonatomic) FBAdPlayableViewController *playableController; // @synthesize playableController=_playableController;
@property(retain, nonatomic) FBRewardedVideoAdEndCardInternal *endCardController; // @synthesize endCardController=_endCardController;
@property(retain, nonatomic) FBRewardedVideoAdVideoInternal *videoController; // @synthesize videoController=_videoController;
@property(retain, nonatomic) FBAdChooseYourOwnAdViewController *chooseYourOwnAdViewController; // @synthesize chooseYourOwnAdViewController=_chooseYourOwnAdViewController;
@property(retain, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(nonatomic) __weak id <FBRewardedVideoAdInternalDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) FBRewardedVideoRewardData *rewardData; // @synthesize rewardData=_rewardData;
@property(retain, nonatomic) FBRewardedVideoAdDataModel *rewardedVideoDataModel; // @synthesize rewardedVideoDataModel=_rewardedVideoDataModel;
@property(readonly, copy, nonatomic) NSString *placementID; // @synthesize placementID=_placementID;
- (void).cxx_destruct;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)chooseYourOwnAdViewController:(id)arg1 offTargetTouch:(id)arg2 forModel:(id)arg3;
- (void)chooseYourOwnAdViewController:(id)arg1 wantsToFirePreviewImpressionForDataModel:(id)arg2 cardIndex:(long long)arg3;
- (void)chooseYourOwnAdViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)chooseYourOwnAdViewController:(id)arg1 didSelectAd:(id)arg2 touchData:(id)arg3;
- (void)chooseYourOwnAdViewControllerDidLoad:(id)arg1;
- (void)rewardedVideoAdEndCardDidTerminate:(id)arg1;
- (void)rewardedVideoAdEndCardWillClose:(id)arg1;
- (void)rewardedVideoAdEndCardDidClick:(id)arg1;
- (void)playableViewControllerDidTerminate:(id)arg1;
- (void)playableViewControllerWillClose:(id)arg1;
- (void)playableViewControllerComplete:(id)arg1;
- (void)playableViewControllerDidClick:(id)arg1;
- (void)playableViewControllerWillLogImpression:(id)arg1;
- (void)playableViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)playableViewControllerDidLoad:(id)arg1;
- (void)rewardedVideoAdVideoWillClose:(id)arg1;
- (void)rewardedVideoAdVideoWantsToLogImpression:(id)arg1;
- (void)rewardedVideoAdVideoSkipped:(id)arg1;
- (void)rewardedVideoAdVideoComplete:(id)arg1;
- (void)rewardedVideoAdVideo:(id)arg1 didFailWithError:(id)arg2;
- (void)rewardedVideoAdVideoDidLoad:(id)arg1;
- (id)currentEndCardController;
- (id)currentVideoController;
- (void)dismissControllerWithAdSuccess:(_Bool)arg1;
- (void)loadEndCard;
- (void)checkServerSideReward;
- (_Bool)startAdFromRootViewController:(id)arg1 animated:(_Bool)arg2;
- (_Bool)startAdFromRootViewController:(id)arg1;
@property(readonly, nonatomic, getter=isAdValid) _Bool adValid;
- (_Bool)isChooseYourOwnAd;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration;
- (void)setupViewControllerForDataModel:(id)arg1;
- (id)initWithPlacementID:(id)arg1 adData:(id)arg2 dataModelType:(id)arg3 placementDefinition:(id)arg4 minViewability:(int)arg5 rootViewController:(id)arg6 rewardData:(id)arg7 extraHint:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

