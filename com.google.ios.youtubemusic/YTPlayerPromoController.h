//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTResponder-Protocol.h"
#import "YTSystemNotificationsObserver-Protocol.h"

@class GIMMe, NSDate, NSString, YTBackgroundabilityPolicy, YTPlayerResponse;
@protocol YTPlayerPromoControllerProvider, YTPlayerViewControllerConfig, YTResponder;

@interface YTPlayerPromoController : NSObject <YTSystemNotificationsObserver, YTResponder>
{
    YTPlayerResponse *_playerResponse;
    id <YTPlayerViewControllerConfig> _config;
    id <YTPlayerPromoControllerProvider> _provider;
    YTBackgroundabilityPolicy *_backgroundabilityPolicy;
    NSDate *_backgroundabilityUpsellExpiry;
    _Bool _backgroundabilityUpsellShown;
    _Bool _showBackgroundOnboardingHint;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (_Bool)isAppInForeground;
- (void)showBackgroundOnboardingHint;
- (void)showBackgroundabilityUpsell;
- (void)appDidBecomeActive:(id)arg1;
- (void)appDidEnterBackground:(id)arg1;
- (void)playbackControllerDidPause;
- (void)resetWithPlayerResponse:(id)arg1;
- (id)initWithParentResponder:(id)arg1 provider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

