//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ANGTouchViewController.h"

@class ANGUnderlinedButton, UIButton, UILabel;

@interface ANGFacebookReloginViewController : ANGTouchViewController
{
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    ANGUnderlinedButton *_skipButton;
    UIButton *_continueButton;
}

+ (void)resetSkipButton;
+ (void)present;
@property(nonatomic) __weak UIButton *continueButton; // @synthesize continueButton=_continueButton;
@property(nonatomic) __weak ANGUnderlinedButton *skipButton; // @synthesize skipButton=_skipButton;
@property(nonatomic) __weak UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (long long)getSkipCount;
- (void)incrementSkipCount;
- (void)skiButtonClicked:(id)arg1;
- (void)continueClicked:(id)arg1;
- (void)initSkipButton;
- (void)initFacebookButton;
- (void)initTitlesLabel;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end

