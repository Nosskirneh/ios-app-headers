//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GLUEStyleable-Protocol.h"

@class GLUELabel, NSLayoutConstraint, NSString, SPTLyricsV2LoadingView, SPTLyricsV2NowPlayingCardViewStyle;

@interface SPTLyricsV2NowPlayingCardView : UIView <GLUEStyleable>
{
    GLUELabel *_titleLabel;
    UIView *_lyricsView;
    unsigned long long _state;
    NSLayoutConstraint *_lyricsViewTopConstraint;
    NSLayoutConstraint *_lyricsViewBottomConstraint;
    NSLayoutConstraint *_titleLabelTopConstraint;
    NSLayoutConstraint *_titleLabelLeadingConstraint;
    NSLayoutConstraint *_titleLabelTrailingConstraint;
    SPTLyricsV2NowPlayingCardViewStyle *_style;
    SPTLyricsV2LoadingView *_loadingView;
}

@property(retain, nonatomic) SPTLyricsV2LoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) SPTLyricsV2NowPlayingCardViewStyle *style; // @synthesize style=_style;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelTrailingConstraint; // @synthesize titleLabelTrailingConstraint=_titleLabelTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelLeadingConstraint; // @synthesize titleLabelLeadingConstraint=_titleLabelLeadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelTopConstraint; // @synthesize titleLabelTopConstraint=_titleLabelTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *lyricsViewBottomConstraint; // @synthesize lyricsViewBottomConstraint=_lyricsViewBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *lyricsViewTopConstraint; // @synthesize lyricsViewTopConstraint=_lyricsViewTopConstraint;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) UIView *lyricsView; // @synthesize lyricsView=_lyricsView;
@property(readonly, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)switchToEmptyView;
- (void)switchToLyricsView;
- (void)switchToLoadingView;
- (void)updateState;
- (void)glue_applyStyle:(id)arg1;
- (void)setupConstraints;
- (id)initWithFrame:(struct CGRect)arg1 lyricsView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

