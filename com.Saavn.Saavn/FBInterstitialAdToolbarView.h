//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBAdChoicesButton, FBAdCloseButton, FBAdImage, FBAdInfoButton, NSString, UIColor, UIImageView, UILabel;
@protocol FBInterstitialAdToolbarViewDelegate;

@interface FBInterstitialAdToolbarView : UIView
{
    _Bool _showAdInfoButton;
    UIColor *_textColor;
    UIColor *_subtitleTextColor;
    UIColor *_activeColor;
    UIColor *_inactiveColor;
    FBAdImage *_icon;
    NSString *_title;
    NSString *_subtitle;
    FBAdChoicesButton *_adChoicesButton;
    id <FBInterstitialAdToolbarViewDelegate> _delegate;
    long long _closeButtonStyle;
    FBAdCloseButton *_closeButton;
    UILabel *_titleLabel;
    UILabel *_sponsoredLabel;
    UIImageView *_iconImageView;
    FBAdInfoButton *_adInfoButton;
    CDStruct_1b6d18a9 _currentTime;
    CDStruct_1b6d18a9 _forcedViewTime;
    CDStruct_1b6d18a9 _forcedViewRemainingTime;
}

@property(readonly, nonatomic) CDStruct_1b6d18a9 forcedViewRemainingTime; // @synthesize forcedViewRemainingTime=_forcedViewRemainingTime;
@property(retain, nonatomic) FBAdInfoButton *adInfoButton; // @synthesize adInfoButton=_adInfoButton;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UILabel *sponsoredLabel; // @synthesize sponsoredLabel=_sponsoredLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) FBAdCloseButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) long long closeButtonStyle; // @synthesize closeButtonStyle=_closeButtonStyle;
@property(nonatomic) __weak id <FBInterstitialAdToolbarViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool showAdInfoButton; // @synthesize showAdInfoButton=_showAdInfoButton;
@property(retain, nonatomic) FBAdChoicesButton *adChoicesButton; // @synthesize adChoicesButton=_adChoicesButton;
@property(nonatomic) CDStruct_1b6d18a9 forcedViewTime; // @synthesize forcedViewTime=_forcedViewTime;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) FBAdImage *icon; // @synthesize icon=_icon;
@property(nonatomic) CDStruct_1b6d18a9 currentTime; // @synthesize currentTime=_currentTime;
@property(copy, nonatomic) UIColor *inactiveColor; // @synthesize inactiveColor=_inactiveColor;
@property(copy, nonatomic) UIColor *activeColor; // @synthesize activeColor=_activeColor;
@property(copy, nonatomic) UIColor *subtitleTextColor; // @synthesize subtitleTextColor=_subtitleTextColor;
@property(copy, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
- (void).cxx_destruct;
- (void)configureToolbarColorsForType:(long long)arg1;
- (void)closeButtonTapped:(id)arg1;
- (void)infoButtonTapped:(id)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) _Bool closeButtonDisabled;
- (void)disableForcedView;
- (id)init;

@end
