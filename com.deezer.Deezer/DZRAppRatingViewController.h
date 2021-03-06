//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CommonController.h"

@class DZRAppStoreManager, UIButton, UIImageView, UILabel, UIView, UIVisualEffectView;

@interface DZRAppRatingViewController : CommonController
{
    UILabel *_titleLabel;
    UILabel *_happyTitleLabel;
    UILabel *_happyDescriptionLabel;
    UIButton *_likeButton;
    UIButton *_confusedButton;
    UIButton *_dislikeButton;
    UIView *_happyView;
    UIButton *_laterButton;
    UIButton *_rateNowButton;
    UIVisualEffectView *_blurView;
    UIImageView *_backgroundImageView;
    DZRAppStoreManager *_appStoreManager;
}

@property(retain, nonatomic) DZRAppStoreManager *appStoreManager; // @synthesize appStoreManager=_appStoreManager;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) UIVisualEffectView *blurView; // @synthesize blurView=_blurView;
@property(nonatomic) __weak UIButton *rateNowButton; // @synthesize rateNowButton=_rateNowButton;
@property(nonatomic) __weak UIButton *laterButton; // @synthesize laterButton=_laterButton;
@property(nonatomic) __weak UIView *happyView; // @synthesize happyView=_happyView;
@property(nonatomic) __weak UIButton *dislikeButton; // @synthesize dislikeButton=_dislikeButton;
@property(nonatomic) __weak UIButton *confusedButton; // @synthesize confusedButton=_confusedButton;
@property(nonatomic) __weak UIButton *likeButton; // @synthesize likeButton=_likeButton;
@property(nonatomic) __weak UILabel *happyDescriptionLabel; // @synthesize happyDescriptionLabel=_happyDescriptionLabel;
@property(nonatomic) __weak UILabel *happyTitleLabel; // @synthesize happyTitleLabel=_happyTitleLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)postponeAppRatingPressed:(id)arg1;
- (void)appRatingPressed:(id)arg1;
- (void)revealHappyView:(id)arg1;
- (void)setupButtons;
- (void)viewDidLoad;

@end

