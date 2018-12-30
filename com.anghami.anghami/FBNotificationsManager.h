//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBNAssetsController, FBNCardViewController;

@interface FBNotificationsManager : NSObject
{
    FBNAssetsController *_assetsController;
    FBNCardViewController *_currentCardViewController;
}

+ (id)sharedManager;
@property(nonatomic) __weak FBNCardViewController *currentCardViewController; // @synthesize currentCardViewController=_currentCardViewController;
@property(readonly, nonatomic) FBNAssetsController *assetsController; // @synthesize assetsController=_assetsController;
- (void).cxx_destruct;
- (id)_localNotificationFromPayload:(id)arg1;
- (_Bool)canPresentPushCardFromLocalNotification:(id)arg1;
- (void)presentPushCardForLocalNotification:(id)arg1 fromViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)createLocalNotificationFromRemoteNotificationPayload:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)canPresentPushCardFromRemoteNotificationPayload:(id)arg1;
- (void)presentPushCardForRemoteNotificationPayload:(id)arg1 fromViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)preparePushCardContentForRemoteNotificationPayload:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_defaultConfigurationAssetsController;
- (id)init;

@end

