//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AppShortcutFactory, AuthHooks, AuthUserNotificationFactory, RACScopedDisposable, UIApplication;

@interface AppShortcutRegistrar : NSObject
{
    AuthUserNotificationFactory *_authUserNotificationFactory;
    AuthHooks *_authHooks;
    UIApplication *_application;
    RACScopedDisposable *_disposable;
    AppShortcutFactory *_appShortcutFactory;
}

@property(readonly, nonatomic) AppShortcutFactory *appShortcutFactory; // @synthesize appShortcutFactory=_appShortcutFactory;
@property(retain, nonatomic) RACScopedDisposable *disposable; // @synthesize disposable=_disposable;
@property(readonly, nonatomic) UIApplication *application; // @synthesize application=_application;
@property(readonly, nonatomic) AuthHooks *authHooks; // @synthesize authHooks=_authHooks;
@property(readonly, nonatomic) AuthUserNotificationFactory *authUserNotificationFactory; // @synthesize authUserNotificationFactory=_authUserNotificationFactory;
- (void).cxx_destruct;
- (void)registerActionsForIsLoggedIn:(_Bool)arg1;
- (id)subscribeUserDidLogout;
- (id)subscribeUserDidLogin;
- (void)observeAuth;
- (void)registerInitialActions;
- (_Bool)appShortcutsSupported;
- (void)registerAndObserve;
- (id)initWithAuthUserNotificationFactory:(id)arg1 authHooks:(id)arg2 appShortcutFactory:(id)arg3 application:(id)arg4;
- (id)init;

@end

