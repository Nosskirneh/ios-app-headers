//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSLayoutConstraint, UIImageView, UILabel;

@interface WMPFeaturedTitleModule : UIViewController
{
    UILabel *_iconLabel;
    UILabel *_detailLabel;
    long long _titleType;
    NSLayoutConstraint *_leftLabelMarginConstraint;
    NSLayoutConstraint *_rightLabelMarginConstraint;
    UIImageView *_backgroundImageView;
}

+ (id)getInstance;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) NSLayoutConstraint *rightLabelMarginConstraint; // @synthesize rightLabelMarginConstraint=_rightLabelMarginConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leftLabelMarginConstraint; // @synthesize leftLabelMarginConstraint=_leftLabelMarginConstraint;
@property(nonatomic) long long titleType; // @synthesize titleType=_titleType;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *iconLabel; // @synthesize iconLabel=_iconLabel;
- (void).cxx_destruct;
- (void)obtainResourseUUIDForPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)configureMarginConstraints;
- (void)loadBackgroundImage;
- (void)viewDidLoad;

@end

