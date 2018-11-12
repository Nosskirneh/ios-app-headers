//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSLayoutConstraint, SPTActionButton, SPTTheme, UIImageView, UILabel, UIView;
@protocol SPTPaymentFailureModalViewModel;

@interface SPTPaymentFailureModalViewController : UIViewController
{
    id <SPTPaymentFailureModalViewModel> _viewModel;
    UIView *_backgroundView;
    UIView *_containerView;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    SPTActionButton *_actionButton;
    SPTTheme *_theme;
    NSLayoutConstraint *_containerTopMargin;
}

@property(retain, nonatomic) NSLayoutConstraint *containerTopMargin; // @synthesize containerTopMargin=_containerTopMargin;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) SPTActionButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) id <SPTPaymentFailureModalViewModel> viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)animateOut:(CDUnknownBlockType)arg1;
- (void)animateIn;
- (void)setupConstraints;
- (void)setupActionButton;
- (id)createLabelWithText:(id)arg1 font:(id)arg2;
- (void)setupAndAddSubtitleLabel;
- (void)setupAndAddTitleLabel;
- (void)setupImageView;
- (void)setupContainerView;
- (void)setupBackgroundView;
- (void)setupTheme;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1;

@end

