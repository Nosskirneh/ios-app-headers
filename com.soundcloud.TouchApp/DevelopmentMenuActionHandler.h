//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, _TtC10SoundCloud29DevelopmentMenuViewController;

@interface DevelopmentMenuActionHandler : NSObject <UITableViewDelegate>
{
    _TtC10SoundCloud29DevelopmentMenuViewController *_viewController;
    NSArray *_actions;
}

@property(readonly, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(readonly, nonatomic) __weak _TtC10SoundCloud29DevelopmentMenuViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (void)changeLoggingLevel;
- (void)alertWithMessage:(id)arg1 primaryAction:(id)arg2 confirmBlock:(CDUnknownBlockType)arg3;
- (void)showIsAppStoreReceiptSandbox;
- (void)showApiMobileEnvironmentViewController;
- (void)alertWithTitle:(id)arg1 message:(id)arg2 primaryAction:(id)arg3 confirmBlock:(CDUnknownBlockType)arg4;
- (void)switchShowTouchInsets;
- (void)launchDebugInfoWindow;
- (void)crash;
- (void)launchPlayerWithLikes;
- (void)removeDeviceIdentifier;
- (void)showLocalizationOptions;
- (void)toggleAnalyticsTool;
- (void)showUserDefaultsViewController;
- (void)showOnboardingViewController;
- (void)showABExperimentsViewController;
- (void)showFeatureFlagController;
- (void)showPushNotificationViewController;
- (id)developmentMenuActions;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

