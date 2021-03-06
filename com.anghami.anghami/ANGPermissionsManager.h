//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIAlertViewDelegate-Protocol.h"

@class NSString, NSTimer;
@protocol PushRequestProtocol;

@interface ANGPermissionsManager : NSObject <UIAlertViewDelegate>
{
    NSTimer *_notificationTimeout;
    _Bool _cancelTimer;
    _Bool _isWaitingToRequestMusicPermission;
    id <PushRequestProtocol> _pushRequestdelegate;
}

+ (void)showPhotoLibraryDeniedAlert;
+ (id)sharedInstance;
@property(nonatomic) __weak id <PushRequestProtocol> pushRequestdelegate; // @synthesize pushRequestdelegate=_pushRequestdelegate;
- (void).cxx_destruct;
- (void)requestSiriAccess;
- (void)completeContacts:(CDUnknownBlockType)arg1;
@property(readonly) _Bool contactsAccessAllowed;
- (void)contactsAccessAndSyncCompletion:(CDUnknownBlockType)arg1 analyticsParams:(id)arg2;
- (void)contactsAccessAndSyncCompletion:(CDUnknownBlockType)arg1;
- (void)photoLibraryAccessCompletion:(CDUnknownBlockType)arg1;
- (void)showAddedToMusicLibraryAlert;
- (void)postUserMusicRequestPermissionsIfNotAvailable:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestMusicPermissionWithCompletion:(CDUnknownBlockType)arg1;
- (void)customRequestMusicPermissionWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly) long long musicLibraryPermissionStatus;
- (void)timerFire;
- (void)cancelTimer;
- (void)customRequestPushNotification;
- (void)doneWaitingForPushResponse:(id)arg1;
- (_Bool)askForPushPermissions;
@property(readonly) _Bool locationPermissionsEnabled;
@property(readonly) _Bool backgroundRefreshStatusEnabled;
@property(readonly) long long pushNotifStatus;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

