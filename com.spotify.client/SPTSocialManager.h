//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SocialManagerObserver-Protocol.h"

@class NSMapTable, NSMutableSet, NSSet, NSString;
@protocol SPTAsyncScheduler;

@interface SPTSocialManager : NSObject <SocialManagerObserver>
{
    _Bool _initialRequest;
    int _socialDataState;
    long long _socialState;
    long long _facebookState;
    NSSet *_fbMissingPermissions;
    NSSet *_fbMissingPermissionsForIntro;
    NSSet *_fbGrantedPermissions;
    NSSet *_requiredPermissions;
    NSMapTable *_observers;
    id <SPTAsyncScheduler> _scheduler;
    struct FacebookService *_facebookService;
    struct SocialManager *_socialManager;
    struct SocialManagerObserver *_social_manager_observer;
    NSMutableSet *_jobPool;
}

@property(nonatomic) _Bool initialRequest; // @synthesize initialRequest=_initialRequest;
@property(retain, nonatomic) NSMutableSet *jobPool; // @synthesize jobPool=_jobPool;
@property(nonatomic) struct SocialManagerObserver *social_manager_observer; // @synthesize social_manager_observer=_social_manager_observer;
@property(nonatomic) struct SocialManager *socialManager; // @synthesize socialManager=_socialManager;
@property(nonatomic) struct FacebookService *facebookService; // @synthesize facebookService=_facebookService;
@property(nonatomic) __weak id <SPTAsyncScheduler> scheduler; // @synthesize scheduler=_scheduler;
@property(retain, nonatomic) NSMapTable *observers; // @synthesize observers=_observers;
@property(copy, nonatomic) NSSet *requiredPermissions; // @synthesize requiredPermissions=_requiredPermissions;
@property(copy, nonatomic) NSSet *fbGrantedPermissions; // @synthesize fbGrantedPermissions=_fbGrantedPermissions;
@property(copy, nonatomic) NSSet *fbMissingPermissionsForIntro; // @synthesize fbMissingPermissionsForIntro=_fbMissingPermissionsForIntro;
@property(copy, nonatomic) NSSet *fbMissingPermissions; // @synthesize fbMissingPermissions=_fbMissingPermissions;
@property(nonatomic) long long facebookState; // @synthesize facebookState=_facebookState;
@property(nonatomic) long long socialState; // @synthesize socialState=_socialState;
@property(nonatomic) int socialDataState; // @synthesize socialDataState=_socialDataState;
- (void).cxx_destruct;
- (void)socialManagerObserver:(struct SocialManagerObserver *)arg1 socialUserDataDidChange:(const struct shared_ptr<spotify::social::SocialUserData> *)arg2;
- (void)socialManagerObserver:(struct SocialManagerObserver *)arg1 didReceiveError:(int)arg2 description:(id)arg3;
- (void)socialManagerObserver:(struct SocialManagerObserver *)arg1 didReceiveSocialEvent:(int)arg2;
- (void)isAuthenticationDoneURL:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)authenticatedPermissionURLWithScope:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)permissionDialogDone:(_Bool)arg1 accessToken:(id)arg2;
- (void)facebookAssurePermissions:(id)arg1 onComplete:(CDUnknownBlockType)arg2 willPresent:(CDUnknownBlockType)arg3;
- (void)facebookLookupPermissionsAnd:(CDUnknownBlockType)arg1;
- (void)finishLoginWithAccessToken:(id)arg1;
- (void)finishLoginWithAccessToken:(id)arg1 allowsTransferringFBUID:(_Bool)arg2;
- (void)magicallyGrantPermissions:(id)arg1;
- (void)enumerateObserversWithBlock:(CDUnknownBlockType)arg1;
- (void)removeObserver:(id)arg1 onQueue:(id)arg2;
- (void)addObserver:(id)arg1 onQueue:(id)arg2;
- (void)dealloc;
- (void)invalidate;
- (id)initWithSocialManager:(struct SocialManager *)arg1 facebookService:(struct FacebookService *)arg2 scheduler:(id)arg3;
- (void)linkFacebookAccountWithHandler:(CDUnknownBlockType)arg1 allowsTransferringFBUID:(_Bool)arg2;
- (id)facebookInterface;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

