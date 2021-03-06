//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTCommandHandler-Protocol.h"
#import "YTOfflineServiceProtocol-Protocol.h"
#import "YTUserChangedObserver-Protocol.h"

@class GIMMe, NSArray, NSHashTable, NSString, YTGuideService, YTIActiveAccountHeaderRenderer, YTIGuideResponse, YTIMobileTopbarRenderer, YTIPivotBarRenderer;

@interface YTGuideServiceCoordinator : NSObject <YTCommandHandler, YTOfflineServiceProtocol, YTUserChangedObserver>
{
    NSHashTable *_observers;
    NSHashTable *_tabCommandObservers;
    YTIGuideResponse *_response;
    NSArray *_cachedOfflineItems;
    _Bool _accountButtonNotificationDotVisible;
    long long _lastUnseenItemCount;
    _Bool _activityTabEnabled;
    _Bool _reactrEnabled;
    GIMMe *_gimme;
    NSArray *_minimalBrowseIdFilter;
    YTIActiveAccountHeaderRenderer *_activeAccountHeaderRenderer;
    long long _notificationUnseenContentCount;
    long long _sharedUnseenContentCount;
    YTIPivotBarRenderer *_pivotBarRenderer;
    YTIMobileTopbarRenderer *_topbarRenderer;
    YTGuideService *_guideService;
}

@property(nonatomic) __weak YTGuideService *guideService; // @synthesize guideService=_guideService;
@property(retain, nonatomic) YTIMobileTopbarRenderer *topbarRenderer; // @synthesize topbarRenderer=_topbarRenderer;
@property(retain, nonatomic) YTIPivotBarRenderer *pivotBarRenderer; // @synthesize pivotBarRenderer=_pivotBarRenderer;
@property(readonly, nonatomic, getter=isReactrEnabled) _Bool reactrEnabled; // @synthesize reactrEnabled=_reactrEnabled;
@property(nonatomic) long long sharedUnseenContentCount; // @synthesize sharedUnseenContentCount=_sharedUnseenContentCount;
@property(nonatomic) long long notificationUnseenContentCount; // @synthesize notificationUnseenContentCount=_notificationUnseenContentCount;
@property(readonly, nonatomic) YTIActiveAccountHeaderRenderer *activeAccountHeaderRenderer; // @synthesize activeAccountHeaderRenderer=_activeAccountHeaderRenderer;
@property(nonatomic, getter=isActivityTabEnabled) _Bool activityTabEnabled; // @synthesize activityTabEnabled=_activityTabEnabled;
@property(copy, nonatomic) NSArray *minimalBrowseIdFilter; // @synthesize minimalBrowseIdFilter=_minimalBrowseIdFilter;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (long long)unseenItemCountFromTopBar:(id)arg1;
- (void)notifyAccountButtonPresentationStyleChanged;
- (void)notifyObserversTopbarDidChange;
- (void)notifyObserversToRefreshPivotBar;
- (id)minimalPivotBar;
- (id)offlinePivotBar;
- (id)offlineTopbar;
- (void)handleResponse:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)showAccountButtonNotificationHint:(id)arg1;
- (void)userDidChange;
- (void)saveOfflineResponse;
- (void)requestOfflineResponseWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)removeUnseenItemCount;
- (void)receivedInnerTubeCommand:(id)arg1;
- (void)executeWithCommand:(id)arg1 entry:(id)arg2 fromView:(id)arg3 sender:(id)arg4;
- (void)setAccountButtonPresentationStyle:(_Bool)arg1;
- (void)addTabCommandObserver:(id)arg1;
- (void)removeGuideServiceCoordinatorObserver:(id)arg1;
- (void)addGuideServiceCoordinatorObserver:(id)arg1;
- (void)fetchPivotBarWithCompletion:(CDUnknownBlockType)arg1 isOffline:(_Bool)arg2 triggeredByNotification:(_Bool)arg3;
- (id)response;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

