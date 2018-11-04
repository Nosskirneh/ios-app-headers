//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTAuthenticationHandlerLogger, SPTLoginDialogController, SPTLoginErrorDecorator, SPTLoginPerformanceLogging;

@interface SPTAuthenticationHandler : NSObject
{
    id <SPTMetaViewController> _metaViewController;
    id <SPTLoginStateController> _loginStateController;
    id <SPTSessionServicesLoader> _sessionServicesLoader;
    SPTLoginDialogController *_alertController;
    SPTAuthenticationHandlerLogger *_logger;
    SPTLoginErrorDecorator *_errorDecorator;
    SPTLoginPerformanceLogging *_performanceLogging;
}

@property(readonly, nonatomic) SPTLoginPerformanceLogging *performanceLogging; // @synthesize performanceLogging=_performanceLogging;
@property(readonly, nonatomic) SPTLoginErrorDecorator *errorDecorator; // @synthesize errorDecorator=_errorDecorator;
@property(readonly, nonatomic) SPTAuthenticationHandlerLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) SPTLoginDialogController *alertController; // @synthesize alertController=_alertController;
@property(readonly, nonatomic) id <SPTSessionServicesLoader> sessionServicesLoader; // @synthesize sessionServicesLoader=_sessionServicesLoader;
@property(readonly, nonatomic) id <SPTLoginStateController> loginStateController; // @synthesize loginStateController=_loginStateController;
@property(readonly, nonatomic) id <SPTMetaViewController> metaViewController; // @synthesize metaViewController=_metaViewController;
- (void).cxx_destruct;
- (void)handleAuthenticationError:(id)arg1;
- (void)presentMainScreen:(CDUnknownBlockType)arg1;
- (void)loadServicesAndPresentMainScreenWithCompletion:(CDUnknownBlockType)arg1;
- (void)authenticateAndLoginWithURI:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)authenticateWithCredentials:(id)arg1 userDidSignUp:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)authenticateAndLoginWithCredentials:(id)arg1 fromScreen:(unsigned long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)initWithMetaViewController:(id)arg1 loginStateController:(id)arg2 sessionServicesLoader:(id)arg3 alertController:(id)arg4 logger:(id)arg5 errorDecorator:(id)arg6 performanceLogging:(id)arg7;

@end

