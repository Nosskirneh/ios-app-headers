//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AnonymousControllable-Protocol.h"
#import "StartupAuthDelegate-Protocol.h"

@class AppDelegate, AppLauncherNotificationFactory, AuthHooks, AuthLauncher, AuthLauncherFactory, NSString, PlaybackService, StartupAuthViewControllerFactory, _TtC8Features8Deeplink;
@protocol _TtP12SCCollection32AnonymousTrackingAlertPresenting_;

@interface AnonymousController : NSObject <AnonymousControllable, StartupAuthDelegate>
{
    AppDelegate *_appDelegate;
    AuthHooks *_authHooks;
    PlaybackService *_playbackService;
    StartupAuthViewControllerFactory *_startupAuthViewControllerFactory;
    AuthLauncherFactory *_authLauncherFactory;
    AppLauncherNotificationFactory *_appLauncherNotificationFactory;
    _TtC8Features8Deeplink *_deeplink;
    AuthLauncher *_authLauncher;
    id <_TtP12SCCollection32AnonymousTrackingAlertPresenting_> _anonymousTrackingAlertPresenter;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) id <_TtP12SCCollection32AnonymousTrackingAlertPresenting_> anonymousTrackingAlertPresenter; // @synthesize anonymousTrackingAlertPresenter=_anonymousTrackingAlertPresenter;
@property(retain, nonatomic) AuthLauncher *authLauncher; // @synthesize authLauncher=_authLauncher;
@property(retain, nonatomic) _TtC8Features8Deeplink *deeplink; // @synthesize deeplink=_deeplink;
@property(readonly, nonatomic) AppLauncherNotificationFactory *appLauncherNotificationFactory; // @synthesize appLauncherNotificationFactory=_appLauncherNotificationFactory;
@property(readonly, nonatomic) AuthLauncherFactory *authLauncherFactory; // @synthesize authLauncherFactory=_authLauncherFactory;
@property(readonly, nonatomic) StartupAuthViewControllerFactory *startupAuthViewControllerFactory; // @synthesize startupAuthViewControllerFactory=_startupAuthViewControllerFactory;
@property(readonly, nonatomic) PlaybackService *playbackService; // @synthesize playbackService=_playbackService;
@property(readonly, nonatomic) AuthHooks *authHooks; // @synthesize authHooks=_authHooks;
@property(nonatomic) __weak AppDelegate *appDelegate; // @synthesize appDelegate=_appDelegate;
- (void).cxx_destruct;
- (void)authDidComplete;
- (void)launchAuthenticationWithScreen:(unsigned long long)arg1 fromViewController:(id)arg2;
- (id)rootViewController;
- (void)userDidSelectContinue:(id)arg1;
- (void)userDidSelectSignUp:(id)arg1;
- (void)userDidSelectSignIn:(id)arg1;
- (_Bool)isAnonymous;
- (void)performAuthenticatedActionOrAuthenticate:(CDUnknownBlockType)arg1;
- (void)performAuthenticatedActionOrAuthenticate:(id)arg1 action:(CDUnknownBlockType)arg2;
- (id)initWithAuthHooks:(id)arg1 playbackService:(id)arg2 startupAuthViewControllerFactory:(id)arg3 authLauncherFactory:(id)arg4 appLauncherNotificationFactory:(id)arg5 appDelegate:(id)arg6 anonymousTrackingAlertPresenter:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

