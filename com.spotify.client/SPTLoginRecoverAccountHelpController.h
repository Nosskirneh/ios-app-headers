//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTLoginRecoverAccountHelpPopupLogger, SPTLoginTheme, SPTPopupManager;

@interface SPTLoginRecoverAccountHelpController : NSObject
{
    SPTLoginTheme *_theme;
    SPTPopupManager *_popupManager;
    id <SPTNavigationRouter> _navigationRouter;
    SPTLoginRecoverAccountHelpPopupLogger *_logger;
    unsigned long long _retryCount;
}

@property(nonatomic) unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property(retain, nonatomic) SPTLoginRecoverAccountHelpPopupLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) id <SPTNavigationRouter> navigationRouter; // @synthesize navigationRouter=_navigationRouter;
@property(retain, nonatomic) SPTPopupManager *popupManager; // @synthesize popupManager=_popupManager;
@property(retain, nonatomic) SPTLoginTheme *theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (void)presentGetHelpPopupWithEmailIfNeeded:(id)arg1;
- (void)presentForgotPasswordViewWithEmail:(id)arg1;
- (void)presentGetHelpPopupWithEmail:(id)arg1;
- (id)initWithTheme:(id)arg1 popupManager:(id)arg2 navigationRouter:(id)arg3 logger:(id)arg4;

@end

