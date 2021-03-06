//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPaymentFailureModalViewModel-Protocol.h"

@class NSString, SPTChurnLockEventLogger, UIImage;
@protocol SPTChurnLockViewModelDelegate, SPTModalPresentationController;

@interface SPTChurnLockViewModel : NSObject <SPTPaymentFailureModalViewModel>
{
    id <SPTChurnLockViewModelDelegate> _delegate;
    id <SPTModalPresentationController> _presentationController;
    SPTChurnLockEventLogger *_eventLogger;
    UIImage *_backgroundImage;
    NSString *_localizedNavBarTitleString;
    NSString *_localizedTitleString;
    NSString *_localizedSubtitleString;
    NSString *_localizedButtonTitleString;
    NSString *_localizedAlertTitle;
    NSString *_localizedAlertSubtitle;
    NSString *_localizedAlertCancelButton;
    NSString *_localizedAlertOKButton;
}

@property(retain, nonatomic) NSString *localizedAlertOKButton; // @synthesize localizedAlertOKButton=_localizedAlertOKButton;
@property(retain, nonatomic) NSString *localizedAlertCancelButton; // @synthesize localizedAlertCancelButton=_localizedAlertCancelButton;
@property(retain, nonatomic) NSString *localizedAlertSubtitle; // @synthesize localizedAlertSubtitle=_localizedAlertSubtitle;
@property(retain, nonatomic) NSString *localizedAlertTitle; // @synthesize localizedAlertTitle=_localizedAlertTitle;
@property(retain, nonatomic) NSString *localizedButtonTitleString; // @synthesize localizedButtonTitleString=_localizedButtonTitleString;
@property(retain, nonatomic) NSString *localizedSubtitleString; // @synthesize localizedSubtitleString=_localizedSubtitleString;
@property(retain, nonatomic) NSString *localizedTitleString; // @synthesize localizedTitleString=_localizedTitleString;
@property(retain, nonatomic) NSString *localizedNavBarTitleString; // @synthesize localizedNavBarTitleString=_localizedNavBarTitleString;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) SPTChurnLockEventLogger *eventLogger; // @synthesize eventLogger=_eventLogger;
@property(retain, nonatomic) id <SPTModalPresentationController> presentationController; // @synthesize presentationController=_presentationController;
@property(nonatomic) __weak id <SPTChurnLockViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)actionButtonPressed;
- (void)viewDidAppear;
- (void)alertOkButtonPressed;
- (void)alertCancelButtonPressed;
- (id)buildAlertController;
- (void)setupStrings;
- (void)setupBackgroundImage;
- (id)initWithPresentationController:(id)arg1 eventLogger:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

