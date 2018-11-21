//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SPTLoginMagicLinkSentConfirmationViewLogger, SPTLoginTheme;
@protocol SPTAlertController, SPTLinkDispatcher;

@interface SPTLoginMagicLinkSentConfirmationViewModel : NSObject
{
    SPTLoginMagicLinkSentConfirmationViewLogger *_logger;
    SPTLoginTheme *_theme;
    NSString *_emailOrUsername;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTAlertController> _alertController;
}

@property(retain, nonatomic) id <SPTAlertController> alertController; // @synthesize alertController=_alertController;
@property(retain, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(readonly, nonatomic) NSString *emailOrUsername; // @synthesize emailOrUsername=_emailOrUsername;
@property(readonly, nonatomic) SPTLoginTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) SPTLoginMagicLinkSentConfirmationViewLogger *logger; // @synthesize logger=_logger;
- (void).cxx_destruct;
- (id)emailAppsURLStrings;
- (id)installedEmailApps;
- (void)navigateToAppWithURI:(id)arg1;
- (void)userDidTapOpenEmailButton;
- (_Bool)shouldShowOpenEmailButton;
- (id)viewStyle;
- (id)emailSentImage;
- (id)emailButtonText;
- (id)lowerLabelText;
- (id)upperLabelText;
- (id)titleLabelText;
- (id)initWithTheme:(id)arg1 emailOrUsername:(id)arg2 logger:(id)arg3 linkDispatcher:(id)arg4 alertController:(id)arg5;

@end

