//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary, SaavnTC, UIButton, UIImageView, UILabel;

@interface MiniPlayer : UIView
{
    NSDictionary *titleAttributes;
    NSDictionary *metaAttributes;
    NSDictionary *descriptionAttributes;
    UIImageView *image;
    UILabel *label;
    UIView *bevel;
    UIView *imgBevel;
    UIButton *tap;
    UIButton *playPause;
    SaavnTC *tabBarController;
    _Bool _isPlayerShowing;
    _Bool _isTransitioning;
}

+ (double)height;
@property(nonatomic) _Bool isTransitioning; // @synthesize isTransitioning=_isTransitioning;
@property(nonatomic) _Bool isPlayerShowing; // @synthesize isPlayerShowing=_isPlayerShowing;
- (void).cxx_destruct;
- (void)clearNowPlaying;
- (void)setNowPlaying;
- (void)setPlayPauseIcon;
- (void)playPauseTap;
- (void)playerWasHidden;
- (void)showPlayer;
- (void)updateUIMode;
- (void)setLabelStyles;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

