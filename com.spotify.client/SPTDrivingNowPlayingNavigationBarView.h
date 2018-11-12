//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface SPTDrivingNowPlayingNavigationBarView : UIView
{
    UILabel *_titleLabel;
    UIButton *_leftButton;
    UIButton *_rightButton;
}

@property(readonly, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(readonly, nonatomic) UIButton *leftButton; // @synthesize leftButton=_leftButton;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)setupConstraints;
- (void)setupRightButton;
- (void)setupLeftButton;
- (void)setupTitleLabel;
- (void)setTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

