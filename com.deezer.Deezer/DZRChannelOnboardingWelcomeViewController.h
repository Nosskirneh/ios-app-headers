//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class DZRChannelOnboardingGoButton, NSLayoutConstraint, UIImageView, UILabel, UIView;
@protocol DZRChannelOnboardingWelcomeViewControllerDelegate;

@interface DZRChannelOnboardingWelcomeViewController : UIViewController
{
    _Bool _isInLandscapeMode;
    UIView *_bottomView;
    UIImageView *_imageView;
    UILabel *_textLabel;
    id <DZRChannelOnboardingWelcomeViewControllerDelegate> _delegate;
    DZRChannelOnboardingGoButton *_goButton;
    UILabel *_titleLabel;
    NSLayoutConstraint *_titleLabelHeightConstraint;
    NSLayoutConstraint *_titleLabelLeftConstraint;
    NSLayoutConstraint *_titleLabelTrailingConstraint;
    NSLayoutConstraint *_titleLabelTopConstraint;
    NSLayoutConstraint *_titleLabelBottomConstraint;
    NSLayoutConstraint *_textLabelTopConstraint;
    NSLayoutConstraint *_goButtonBottomConstraint;
    NSLayoutConstraint *_imageViewHeightConstraint;
    NSLayoutConstraint *_goButtonHeightConstraint;
    NSLayoutConstraint *_textLabelLeftConstraint;
    NSLayoutConstraint *_textLabelTrailingConstraint;
    NSLayoutConstraint *_imageViewBottomConstraint;
    NSLayoutConstraint *_goButtonTopConstraint;
    NSLayoutConstraint *_goButtonLeadingConstraint;
    NSLayoutConstraint *_goButtonTrailingConstraint;
}

@property(nonatomic) __weak NSLayoutConstraint *goButtonTrailingConstraint; // @synthesize goButtonTrailingConstraint=_goButtonTrailingConstraint;
@property(nonatomic) __weak NSLayoutConstraint *goButtonLeadingConstraint; // @synthesize goButtonLeadingConstraint=_goButtonLeadingConstraint;
@property(nonatomic) __weak NSLayoutConstraint *goButtonTopConstraint; // @synthesize goButtonTopConstraint=_goButtonTopConstraint;
@property(nonatomic) __weak NSLayoutConstraint *imageViewBottomConstraint; // @synthesize imageViewBottomConstraint=_imageViewBottomConstraint;
@property(nonatomic) __weak NSLayoutConstraint *textLabelTrailingConstraint; // @synthesize textLabelTrailingConstraint=_textLabelTrailingConstraint;
@property(nonatomic) __weak NSLayoutConstraint *textLabelLeftConstraint; // @synthesize textLabelLeftConstraint=_textLabelLeftConstraint;
@property(nonatomic) __weak NSLayoutConstraint *goButtonHeightConstraint; // @synthesize goButtonHeightConstraint=_goButtonHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *imageViewHeightConstraint; // @synthesize imageViewHeightConstraint=_imageViewHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *goButtonBottomConstraint; // @synthesize goButtonBottomConstraint=_goButtonBottomConstraint;
@property(nonatomic) __weak NSLayoutConstraint *textLabelTopConstraint; // @synthesize textLabelTopConstraint=_textLabelTopConstraint;
@property(nonatomic) __weak NSLayoutConstraint *titleLabelBottomConstraint; // @synthesize titleLabelBottomConstraint=_titleLabelBottomConstraint;
@property(nonatomic) __weak NSLayoutConstraint *titleLabelTopConstraint; // @synthesize titleLabelTopConstraint=_titleLabelTopConstraint;
@property(nonatomic) __weak NSLayoutConstraint *titleLabelTrailingConstraint; // @synthesize titleLabelTrailingConstraint=_titleLabelTrailingConstraint;
@property(nonatomic) __weak NSLayoutConstraint *titleLabelLeftConstraint; // @synthesize titleLabelLeftConstraint=_titleLabelLeftConstraint;
@property(nonatomic) __weak NSLayoutConstraint *titleLabelHeightConstraint; // @synthesize titleLabelHeightConstraint=_titleLabelHeightConstraint;
@property(nonatomic) _Bool isInLandscapeMode; // @synthesize isInLandscapeMode=_isInLandscapeMode;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak DZRChannelOnboardingGoButton *goButton; // @synthesize goButton=_goButton;
@property(nonatomic) __weak id <DZRChannelOnboardingWelcomeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) __weak UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak UIView *bottomView; // @synthesize bottomView=_bottomView;
- (void).cxx_destruct;
- (void)goButtonTouched:(id)arg1;
- (id)backButton;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)setupConstraintsWithSize:(struct CGSize)arg1;
- (void)setupGoButton;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithDelegate:(id)arg1;

@end
