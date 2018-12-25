//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVPlayer, AVPlayerLayer, GVRTransitionViewLayout, QTMButton, UILabel;
@protocol GVRTransitionViewDelegate;

@interface GVRTransitionView : UIView
{
    id <GVRTransitionViewDelegate> _delegate;
    QTMButton *_backButton;
    UILabel *_instructionalLabel;
    UILabel *_switchViewerLabel;
    QTMButton *_switchViewerButton;
    UIView *_dividerLineView;
    UIView *_movieView;
    UIView *_footerView;
    AVPlayer *_moviePlayer;
    AVPlayerLayer *_moviePlayerLayer;
    GVRTransitionViewLayout *_layout;
}

@property(retain, nonatomic) GVRTransitionViewLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) AVPlayerLayer *moviePlayerLayer; // @synthesize moviePlayerLayer=_moviePlayerLayer;
@property(retain, nonatomic) AVPlayer *moviePlayer; // @synthesize moviePlayer=_moviePlayer;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UIView *movieView; // @synthesize movieView=_movieView;
@property(retain, nonatomic) UIView *dividerLineView; // @synthesize dividerLineView=_dividerLineView;
@property(retain, nonatomic) QTMButton *switchViewerButton; // @synthesize switchViewerButton=_switchViewerButton;
@property(retain, nonatomic) UILabel *switchViewerLabel; // @synthesize switchViewerLabel=_switchViewerLabel;
@property(retain, nonatomic) UILabel *instructionalLabel; // @synthesize instructionalLabel=_instructionalLabel;
@property(retain, nonatomic) QTMButton *backButton; // @synthesize backButton=_backButton;
@property(nonatomic) __weak id <GVRTransitionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)moviePlaybackComplete:(id)arg1;
- (void)didTapSwitchViewerButton;
- (void)didTapBackButton;
- (void)setViewerModelName:(id)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
- (void)dealloc;
- (void)loadView;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;

@end

