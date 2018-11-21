//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTLoginDialogController, SPTLoginErrorDecorator, SPTLoginNetworkControllerUtility;
@protocol SPTMetaViewController, SPTSessionServicesLoader;

@interface SPTLoginUIDispatchController : NSObject
{
    SPTLoginNetworkControllerUtility *_networkControllerUtility;
    id <SPTSessionServicesLoader> _sessionServicesLoader;
    id <SPTMetaViewController> _metaViewController;
    SPTLoginDialogController *_alertController;
    SPTLoginErrorDecorator *_errorDecorator;
}

@property(retain, nonatomic) SPTLoginErrorDecorator *errorDecorator; // @synthesize errorDecorator=_errorDecorator;
@property(retain, nonatomic) SPTLoginDialogController *alertController; // @synthesize alertController=_alertController;
@property(retain, nonatomic) id <SPTMetaViewController> metaViewController; // @synthesize metaViewController=_metaViewController;
@property(retain, nonatomic) id <SPTSessionServicesLoader> sessionServicesLoader; // @synthesize sessionServicesLoader=_sessionServicesLoader;
@property(retain, nonatomic) SPTLoginNetworkControllerUtility *networkControllerUtility; // @synthesize networkControllerUtility=_networkControllerUtility;
- (void).cxx_destruct;
- (void)showAlertForLoginError:(id)arg1 withTitle:(id)arg2;
- (void)loginFailedWithError:(id)arg1;
- (void)loginSucceeded;
- (id)initWithMetaViewController:(id)arg1 sessionServicesLoader:(id)arg2 alertController:(id)arg3 networkControllerUtility:(id)arg4 errorDecorator:(id)arg5;

@end

