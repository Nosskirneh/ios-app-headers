//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class GLUEAccessoryIconView, SPTLayoutConstraintBuilder, UIButton, UIColor, UILabel;

@interface SPTFeedSeeMoreView : UIView
{
    UILabel *_trackCountLabel;
    UILabel *_titleLabel;
    UIButton *_actionButton;
    UIColor *_trackCountBackgroundColor;
    id <GLUETheme> _theme;
    SPTLayoutConstraintBuilder *_layout;
    UIView *_trackCountContainerView;
    GLUEAccessoryIconView *_accessoryIconView;
}

@property(retain, nonatomic) GLUEAccessoryIconView *accessoryIconView; // @synthesize accessoryIconView=_accessoryIconView;
@property(retain, nonatomic) UIView *trackCountContainerView; // @synthesize trackCountContainerView=_trackCountContainerView;
@property(retain, nonatomic) SPTLayoutConstraintBuilder *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(retain, nonatomic) UIColor *trackCountBackgroundColor; // @synthesize trackCountBackgroundColor=_trackCountBackgroundColor;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *trackCountLabel; // @synthesize trackCountLabel=_trackCountLabel;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)addViewConstraints;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

