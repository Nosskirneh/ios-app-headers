//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "LoaderDelegate-Protocol.h"

@class NSString, UILabel, UITextField, UIView;

@interface ChangeEmailViewController : UIViewController <LoaderDelegate>
{
    NSString *_email;
    long long _signInMode;
    UIView *_emailHolder;
    UITextField *_emailTextField;
    UILabel *_topBorderLabel;
    UILabel *_bottomBorderLabel;
}

@property(nonatomic) __weak UILabel *bottomBorderLabel; // @synthesize bottomBorderLabel=_bottomBorderLabel;
@property(nonatomic) __weak UILabel *topBorderLabel; // @synthesize topBorderLabel=_topBorderLabel;
@property(retain, nonatomic) UITextField *emailTextField; // @synthesize emailTextField=_emailTextField;
@property(retain, nonatomic) UIView *emailHolder; // @synthesize emailHolder=_emailHolder;
- (void).cxx_destruct;
- (void)loadingFailed:(id)arg1 withError:(id)arg2;
- (void)loadingFinished:(id)arg1;
- (void)submitEmail:(id)arg1;
- (void)savePressed;
- (void)createChangeEmailButton;
- (void)setupSignals;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
