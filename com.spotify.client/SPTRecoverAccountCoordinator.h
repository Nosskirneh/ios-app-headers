//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTLoginSpinnerButtonTestManager, SPTRecoverAccountConfiguration, SPTRecoverAccountSlatePresenter, SPTRecoverAccountTestManager;

@interface SPTRecoverAccountCoordinator : NSObject
{
    SPTRecoverAccountSlatePresenter *_slatePresenter;
    SPTRecoverAccountConfiguration *_configuration;
    SPTRecoverAccountTestManager *_testManager;
    SPTLoginSpinnerButtonTestManager *_spinnerButtonTestManager;
}

@property(readonly, nonatomic) SPTLoginSpinnerButtonTestManager *spinnerButtonTestManager; // @synthesize spinnerButtonTestManager=_spinnerButtonTestManager;
@property(readonly, nonatomic) SPTRecoverAccountTestManager *testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) SPTRecoverAccountConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) SPTRecoverAccountSlatePresenter *slatePresenter; // @synthesize slatePresenter=_slatePresenter;
- (void).cxx_destruct;
- (id)provideCollectEmailViewController;
- (id)provideResetPasswordViewController;
- (void)presentResetPasswordSlate;
- (void)presentCollectEmailSlate;
- (id)initWithConfiguration:(id)arg1 slatePresenter:(id)arg2 testManager:(id)arg3 spinnerButtonTestManager:(id)arg4;

@end

