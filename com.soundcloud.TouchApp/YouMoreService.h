//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ShareLauncherDelegate-Protocol.h"

@class AnalyticsUpsellEventTagger, DevelopmentMenuLauncher, HelpCenterLauncher, JoinUsLauncher, LegacyUserProfileLauncher, LogoutHandler, NSString, RestoreLauncher, SCPlanManager, TellAFriendShareLauncher, UIApplication, UIView, UpsellLauncher, YouRepository, _TtC10SoundCloud18CreatorAppLauncher, _TtC10SoundCloud20SettingsMenuLauncher, _TtC10SoundCloud30DebugMenuViewControllerFactory, _TtC12SCCollection26LegalViewControllerFactory, _TtC3Ads35ForceAdTestingViewControllerFactory;

@interface YouMoreService : NSObject <ShareLauncherDelegate>
{
    LogoutHandler *_logoutHandler;
    UpsellLauncher *_upsellLauncher;
    TellAFriendShareLauncher *_shareLauncher;
    YouRepository *_youRepository;
    AnalyticsUpsellEventTagger *_analyticsUpsellTagger;
    HelpCenterLauncher *_helpCenterLauncher;
    JoinUsLauncher *_joinUsLauncher;
    DevelopmentMenuLauncher *_developmentMenuLauncher;
    RestoreLauncher *_restoreLauncher;
    UIApplication *_application;
    _TtC10SoundCloud30DebugMenuViewControllerFactory *_debugMenuViewControllerFactory;
    LegacyUserProfileLauncher *_profileLauncher;
    _TtC10SoundCloud18CreatorAppLauncher *_creatorAppLauncher;
    _TtC10SoundCloud20SettingsMenuLauncher *_settingsLauncher;
    _TtC12SCCollection26LegalViewControllerFactory *_legalViewControllerFactory;
    _TtC3Ads35ForceAdTestingViewControllerFactory *_forceAdTestingViewControllerFactory;
    SCPlanManager *_planManager;
    UIView *_shareSourceView;
}

@property(nonatomic) __weak UIView *shareSourceView; // @synthesize shareSourceView=_shareSourceView;
@property(readonly, nonatomic) SCPlanManager *planManager; // @synthesize planManager=_planManager;
@property(readonly, nonatomic) _TtC3Ads35ForceAdTestingViewControllerFactory *forceAdTestingViewControllerFactory; // @synthesize forceAdTestingViewControllerFactory=_forceAdTestingViewControllerFactory;
@property(readonly, nonatomic) _TtC12SCCollection26LegalViewControllerFactory *legalViewControllerFactory; // @synthesize legalViewControllerFactory=_legalViewControllerFactory;
@property(readonly, nonatomic) _TtC10SoundCloud20SettingsMenuLauncher *settingsLauncher; // @synthesize settingsLauncher=_settingsLauncher;
@property(readonly, nonatomic) _TtC10SoundCloud18CreatorAppLauncher *creatorAppLauncher; // @synthesize creatorAppLauncher=_creatorAppLauncher;
@property(retain, nonatomic) LegacyUserProfileLauncher *profileLauncher; // @synthesize profileLauncher=_profileLauncher;
@property(readonly, nonatomic) _TtC10SoundCloud30DebugMenuViewControllerFactory *debugMenuViewControllerFactory; // @synthesize debugMenuViewControllerFactory=_debugMenuViewControllerFactory;
@property(readonly, nonatomic) UIApplication *application; // @synthesize application=_application;
@property(readonly, nonatomic) RestoreLauncher *restoreLauncher; // @synthesize restoreLauncher=_restoreLauncher;
@property(readonly, nonatomic) DevelopmentMenuLauncher *developmentMenuLauncher; // @synthesize developmentMenuLauncher=_developmentMenuLauncher;
@property(readonly, nonatomic) JoinUsLauncher *joinUsLauncher; // @synthesize joinUsLauncher=_joinUsLauncher;
@property(readonly, nonatomic) HelpCenterLauncher *helpCenterLauncher; // @synthesize helpCenterLauncher=_helpCenterLauncher;
@property(readonly, nonatomic) AnalyticsUpsellEventTagger *analyticsUpsellTagger; // @synthesize analyticsUpsellTagger=_analyticsUpsellTagger;
@property(readonly, nonatomic) YouRepository *youRepository; // @synthesize youRepository=_youRepository;
@property(readonly, nonatomic) TellAFriendShareLauncher *shareLauncher; // @synthesize shareLauncher=_shareLauncher;
@property(readonly, nonatomic) UpsellLauncher *upsellLauncher; // @synthesize upsellLauncher=_upsellLauncher;
@property(readonly, nonatomic) LogoutHandler *logoutHandler; // @synthesize logoutHandler=_logoutHandler;
- (void).cxx_destruct;
- (id)shareLauncherSourceView:(id)arg1;
- (id)termsLocalizationInfoForPlan:(id)arg1;
- (void)tagUpsellClickEventWithScreen:(long long)arg1;
- (void)showPublicProfileForYouFromController:(id)arg1;
- (void)shareAppFromViewController:(id)arg1 cell:(id)arg2;
- (void)performActionWithItem:(id)arg1 fromViewController:(id)arg2 withCell:(id)arg3;
- (id)initWithLogoutHandler:(id)arg1 upsellLauncher:(id)arg2 shareLauncher:(id)arg3 youRepository:(id)arg4 analyticsUpsellTagger:(id)arg5 helpCenterLauncher:(id)arg6 joinUsLauncher:(id)arg7 developmentMenuLauncher:(id)arg8 restoreLauncher:(id)arg9 application:(id)arg10 debugMenuViewControllerFactory:(id)arg11 creatorAppLauncher:(id)arg12 settingsMenuLauncher:(id)arg13 legalViewControllerFactory:(id)arg14 planManager:(id)arg15 forceAdTestingViewControllerFactory:(id)arg16;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

