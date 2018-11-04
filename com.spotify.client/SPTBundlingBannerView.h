//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTBannerView.h"

@class NSArray, SPTBundlingBannerViewModel, SPTTheme, UIButton, UILabel, UIView;

@interface SPTBundlingBannerView : SPTBannerView
{
    SPTBundlingBannerViewModel *_viewModel;
    SPTTheme *_theme;
    UIButton *_closeButton;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIView *_buttonView;
    NSArray *_actionButtons;
}

@property(retain, nonatomic) NSArray *actionButtons; // @synthesize actionButtons=_actionButtons;
@property(retain, nonatomic) UIView *buttonView; // @synthesize buttonView=_buttonView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) SPTBundlingBannerViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (double)topInset;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setupActionButtonConstraintsTwoButtons:(id)arg1;
- (void)setupActionButtonConstraintsOneButton:(id)arg1;
- (void)setupConstraints;
- (void)setupActionButtons;
- (void)setupButtonView;
- (void)setupSubtitleLabel;
- (void)setupTitleLabel;
- (void)setupCloseButton;
- (void)setupTheme;
- (void)didMoveToWindow;
- (id)initWithViewModel:(id)arg1;

@end

