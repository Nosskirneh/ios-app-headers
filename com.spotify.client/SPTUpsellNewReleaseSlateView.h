//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class GLUEButton, GLUELabel, SPTLayoutConstraintBuilder, SPTUpsellGLUETheme, SPTUpsellOverlayViewModel, UIImageView;

@interface SPTUpsellNewReleaseSlateView : UIView
{
    GLUELabel *_contentHeaderLabel;
    GLUELabel *_albumTitleLabel;
    GLUELabel *_artistNameLabel;
    GLUEButton *_actionButton;
    SPTUpsellGLUETheme *_theme;
    SPTUpsellOverlayViewModel *_viewModel;
    UIView *_backgroundFadeView;
    UIImageView *_albumImageView;
    SPTLayoutConstraintBuilder *_layout;
}

@property(retain, nonatomic) SPTLayoutConstraintBuilder *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) UIImageView *albumImageView; // @synthesize albumImageView=_albumImageView;
@property(retain, nonatomic) UIView *backgroundFadeView; // @synthesize backgroundFadeView=_backgroundFadeView;
@property(retain, nonatomic) SPTUpsellOverlayViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) SPTUpsellGLUETheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) GLUEButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) GLUELabel *artistNameLabel; // @synthesize artistNameLabel=_artistNameLabel;
@property(retain, nonatomic) GLUELabel *albumTitleLabel; // @synthesize albumTitleLabel=_albumTitleLabel;
@property(retain, nonatomic) GLUELabel *contentHeaderLabel; // @synthesize contentHeaderLabel=_contentHeaderLabel;
- (void).cxx_destruct;
- (void)setAlbumImage:(id)arg1;
- (void)glue_applyStyle:(id)arg1;
- (void)applyConstraints;
- (void)setupActionButton;
- (void)setupArtistNameLabel;
- (void)setupAlbumTitleLabel;
- (void)setupContentHeaderLabel;
- (void)setupAlbumImageView;
- (void)setupBackgroundView;
- (void)setupSubviews;
- (id)initWithViewModel:(id)arg1 theme:(id)arg2;

@end
