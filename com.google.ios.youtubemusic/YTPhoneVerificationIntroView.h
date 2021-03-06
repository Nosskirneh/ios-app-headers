//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UIScrollView, YTFormattedStringLabel, YTQTMButton;

@interface YTPhoneVerificationIntroView : UIView
{
    YTFormattedStringLabel *_instructionLabel;
    YTFormattedStringLabel *_descriptionLabel;
    UIImageView *_introImageView;
    UIScrollView *_scrollView;
    UIButton *_closeButton;
    YTQTMButton *_getStartedButton;
    YTQTMButton *_learnMoreButton;
}

@property(retain, nonatomic) YTQTMButton *learnMoreButton; // @synthesize learnMoreButton=_learnMoreButton;
@property(retain, nonatomic) YTQTMButton *getStartedButton; // @synthesize getStartedButton=_getStartedButton;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
- (void).cxx_destruct;
- (void)setupSubviewsWithRenderer:(id)arg1;
- (void)layoutSubviews;
- (id)initWithRenderer:(id)arg1;

@end

