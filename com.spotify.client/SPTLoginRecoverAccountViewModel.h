//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTSignupDataLoaderDelegate-Protocol.h"

@class NSString, SPTLoginRecoverAccountDataLoader, SPTLoginRecoverAccountViewLogger, SPTLoginTheme;
@protocol SPTLinkDispatcher, SPTLoginRecoverAccountViewModelDelegate, SPTNavigationRouter;

@interface SPTLoginRecoverAccountViewModel : NSObject <SPTSignupDataLoaderDelegate>
{
    id <SPTLoginRecoverAccountViewModelDelegate> _delegate;
    SPTLoginRecoverAccountViewLogger *_logger;
    NSString *_userEmail;
    SPTLoginTheme *_theme;
    id <SPTNavigationRouter> _navigationRouter;
    SPTLoginRecoverAccountDataLoader *_dataLoader;
    id <SPTLinkDispatcher> _linkDispatcher;
}

@property(retain, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(retain, nonatomic) SPTLoginRecoverAccountDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(retain, nonatomic) id <SPTNavigationRouter> navigationRouter; // @synthesize navigationRouter=_navigationRouter;
@property(readonly, nonatomic) SPTLoginTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) NSString *userEmail; // @synthesize userEmail=_userEmail;
@property(readonly, nonatomic) SPTLoginRecoverAccountViewLogger *logger; // @synthesize logger=_logger;
@property(nonatomic) __weak id <SPTLoginRecoverAccountViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dataLoaderFinishLoadingWithSuccess:(id)arg1;
- (void)dataLoader:(id)arg1 didFinishLoadingWithError:(id)arg2;
- (void)presentSupportPage;
- (void)navigateToNextStep;
- (void)sendRecoveryRequestForInput:(id)arg1;
- (_Bool)isValidInput:(id)arg1;
- (id)localizedDescriptionForErrorCode:(long long)arg1;
- (unsigned long long)invalidTextFieldState;
- (unsigned long long)unknownTextFieldState;
- (id)stillNeedHelpLabelText;
- (id)sendButtonLoadingText;
- (id)sendButtonText;
- (id)inputFieldLabelText;
- (id)messageText;
- (id)titleText;
- (id)viewStyle;
- (id)initWithTheme:(id)arg1 navigationRouter:(id)arg2 dataLoader:(id)arg3 logger:(id)arg4 linkDispatcher:(id)arg5 userEmail:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

