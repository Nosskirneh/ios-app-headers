//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AdjustMarketingEventTagger, AnalyticsUpsellEventTagger, AnonymousController, UIViewController, UpsellLauncher, UpsellManager;

@interface SearchResultViewPresenter : NSObject
{
    _Bool _upsellImpressionTagged;
    UIViewController *_viewController;
    AnonymousController *_anonymousController;
    UpsellManager *_upsellManager;
    UpsellLauncher *_upsellLauncher;
    AnalyticsUpsellEventTagger *_upsellEventTagger;
    AdjustMarketingEventTagger *_adjustMarketingEventTagger;
}

@property(nonatomic) _Bool upsellImpressionTagged; // @synthesize upsellImpressionTagged=_upsellImpressionTagged;
@property(readonly, nonatomic) AdjustMarketingEventTagger *adjustMarketingEventTagger; // @synthesize adjustMarketingEventTagger=_adjustMarketingEventTagger;
@property(readonly, nonatomic) AnalyticsUpsellEventTagger *upsellEventTagger; // @synthesize upsellEventTagger=_upsellEventTagger;
@property(readonly, nonatomic) UpsellLauncher *upsellLauncher; // @synthesize upsellLauncher=_upsellLauncher;
@property(readonly, nonatomic) UpsellManager *upsellManager; // @synthesize upsellManager=_upsellManager;
@property(readonly, nonatomic) AnonymousController *anonymousController; // @synthesize anonymousController=_anonymousController;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (void)tagUpsellButtonClick;
- (void)tagUpsellButtonImpressionFromScreen:(long long)arg1;
- (void)userDidSeeHighTierResultsFromScreen:(long long)arg1;
- (void)userDidSelectUpsell;
- (void)userDidSearchNewContent;
- (id)initWithViewController:(id)arg1 anonymousController:(id)arg2 upsellManager:(id)arg3 upsellLauncher:(id)arg4 upsellEventTagger:(id)arg5 adjustMarketingEventTagger:(id)arg6;
- (id)initWithViewController:(id)arg1;

@end
