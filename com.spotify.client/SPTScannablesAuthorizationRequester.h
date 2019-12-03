//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTScannablesSlateFactoryDelegate-Protocol.h"

@class NSString, SPTScannablesDependencies, SPTScannablesOnboardingPresenterImplementation, SPTaskCompletionSource;
@protocol OS_dispatch_queue, SPTAlertController, SPTScannablesAuthorizationRequesterDelegate;

@interface SPTScannablesAuthorizationRequester : NSObject <SPTScannablesSlateFactoryDelegate>
{
    id <SPTScannablesAuthorizationRequesterDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_requesterQueue;
    SPTaskCompletionSource *_requestAuthorizationCompletionSource;
    SPTScannablesOnboardingPresenterImplementation *_onboardingPresenter;
    SPTScannablesDependencies *_dependencies;
    id <SPTAlertController> _alertController;
}

@property(retain, nonatomic) id <SPTAlertController> alertController; // @synthesize alertController=_alertController;
@property(retain, nonatomic) SPTScannablesDependencies *dependencies; // @synthesize dependencies=_dependencies;
@property(readonly, nonatomic) __weak SPTScannablesOnboardingPresenterImplementation *onboardingPresenter; // @synthesize onboardingPresenter=_onboardingPresenter;
@property(retain, nonatomic) SPTaskCompletionSource *requestAuthorizationCompletionSource; // @synthesize requestAuthorizationCompletionSource=_requestAuthorizationCompletionSource;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *requesterQueue; // @synthesize requesterQueue=_requesterQueue;
@property(nonatomic) __weak id <SPTScannablesAuthorizationRequesterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)permissionDenied;
- (void)openSettings;
- (id)presentSettingsPromptWithTitle:(id)arg1;
- (void)didDismissSlate:(id)arg1 accepted:(_Bool)arg2;
- (_Bool)isCameraAuthorized;
- (id)requestPhotoLibraryPermissions;
- (void)requestCameraPermissions;
- (id)presentCameraPermissionPrompt;
- (id)requestPhotoLibraryAuthorization;
- (id)requestCameraAuthorization;
- (id)provideCompletionSource;
- (id)initWithOnboardingPresenter:(id)arg1 dependencies:(id)arg2 alertController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

