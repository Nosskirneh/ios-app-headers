//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSDictionary, NSMutableDictionary, SaavnPlayButton, SaavnVC_n, UIButton, UIColor, UIImageView;

@interface FauxNav : UIView
{
    UIView *fill;
    UIView *shadow;
    UIView *bevel;
    UIButton *title;
    UIImageView *icon;
    double statusBarH;
    double navBarH;
    SaavnVC_n *parentVC;
    NSDictionary *titleAttributes;
    NSDictionary *metaAttributes;
    NSMutableDictionary *metaTapAttributes;
    double navTitleMultilineAdjust;
    _Bool showShadow;
    _Bool showsPinnedItems;
    _Bool usingCustomTitle;
    UIColor *customTintColor;
    UIView *leftButtonView;
    UIView *rightButtonView;
    UIView *extrasWrap;
    UIView *imageViewWrap;
    _Bool extrasPinned;
    _Bool extrasAnimating;
    struct CGPoint imageViewPinnedPos;
    struct CGPoint playBtnPinnedPos;
    double currentPct;
    NSArray *_leftBarButtonItems;
    NSArray *_rightBarButtonItems;
    UIImageView *_imageView;
    SaavnPlayButton *_playBtn;
}

@property(retain, nonatomic) SaavnPlayButton *playBtn; // @synthesize playBtn=_playBtn;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *rightBarButtonItems; // @synthesize rightBarButtonItems=_rightBarButtonItems;
@property(retain, nonatomic) NSArray *leftBarButtonItems; // @synthesize leftBarButtonItems=_leftBarButtonItems;
- (id)getOptionsButton;
- (id)getCloseButton;
- (id)getBackButtonWithLabel:(id)arg1;
- (id)getBackButton;
- (id)getTitleButton;
- (double)alignedButtonWidth;
- (void)fadeFillAndBevel:(double)arg1;
- (void)fadeTitle:(double)arg1;
- (void)setTintColor:(id)arg1 asCustom:(_Bool)arg2;
- (id)checkForIconReplacement:(id)arg1 withMeta:(id)arg2;
- (void)setTitle:(id)arg1 andMeta:(id)arg2 withMetaOnTop:(_Bool)arg3;
- (void)setTitle:(id)arg1 andMeta:(id)arg2;
- (void)setTitle:(id)arg1;
- (void)iPadRefreshLayout;
- (void)updateUIMode;
- (void)refreshButtons;
- (void)setLabelStyles;
- (void)useCircleArt;
- (void)bringExtrasToFront;
- (void)initUI;
- (id)initInView:(id)arg1 forMedia:(_Bool)arg2;
- (id)initInView:(id)arg1;

@end
