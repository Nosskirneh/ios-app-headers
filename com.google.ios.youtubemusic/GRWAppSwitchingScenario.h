//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GRWApp, GRWAppSwitchingCooldownManager, GRWAppSwitchingImpressionCounter, GRWIntentDescriptor, GRWLinkOpenerOptions, GRWPreferences, GRWProductsManager, NSArray, NSString;

@interface GRWAppSwitchingScenario : NSObject
{
    GRWAppSwitchingCooldownManager *_cooldownManager;
    GRWProductsManager *_productsManager;
    GRWPreferences *_preferences;
    GRWIntentDescriptor *_intentDescriptor;
    GRWLinkOpenerOptions *_intentDescriptorOptions;
    GRWAppSwitchingImpressionCounter *_impressionCounter;
}

@property(retain, nonatomic) GRWAppSwitchingImpressionCounter *impressionCounter; // @synthesize impressionCounter=_impressionCounter;
@property(retain, nonatomic) GRWLinkOpenerOptions *intentDescriptorOptions; // @synthesize intentDescriptorOptions=_intentDescriptorOptions;
@property(readonly, nonatomic) GRWIntentDescriptor *intentDescriptor; // @synthesize intentDescriptor=_intentDescriptor;
@property(retain, nonatomic) GRWPreferences *preferences; // @synthesize preferences=_preferences;
@property(retain, nonatomic) GRWProductsManager *productsManager; // @synthesize productsManager=_productsManager;
@property(retain, nonatomic) GRWAppSwitchingCooldownManager *cooldownManager; // @synthesize cooldownManager=_cooldownManager;
- (void).cxx_destruct;
- (id)defaultAppToPromptForIntentType:(int)arg1;
@property(readonly, nonatomic) NSArray *googleAppsToPrompt;
@property(readonly, nonatomic) GRWApp *defaultAppToPrompt;
@property(readonly, nonatomic) int intentType;
@property(readonly, nonatomic, getter=isAuthUserEnabledForAnyApp) _Bool authUserEnabledForAnyApp;
@property(readonly, nonatomic) GRWApp *appToOpenIfAppSwitchingHeldBack;
@property(readonly, nonatomic) GRWApp *appToOpen;
@property(readonly, nonatomic) _Bool shouldAskUserWhichAppToUseEveryTime;
@property(readonly, nonatomic) _Bool shouldPrompt;
@property(readonly, nonatomic) NSString *promptTitle;
- (id)allPromptedApps;
- (id)initWithIntentDescriptor:(id)arg1 productsManager:(id)arg2 preferences:(id)arg3 cooldownManager:(id)arg4 impressionCounter:(id)arg5;

@end

