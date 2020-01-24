//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UIButton, UIImageView, UILabel, UIProgressView, UIXPaddedLabel;

@interface JBrowserNowPlayingView : UIView
{
    float mPrevButtonWidthOrg;
    float mNextButtonWidthOrg;
    float mPlayButtonWidthOrg;
    float mCurPosTrailingOrgX;
    float mPrevButtonTrailingOrgX;
    UIButton *_playButton;
    UIButton *_prevButton;
    UIButton *_nextButton;
    UIImageView *_artworkImageView;
    NSLayoutConstraint *_artworkImageViewWidth;
    NSLayoutConstraint *_artworkImageViewHeight;
    UILabel *_titleLabel;
    UILabel *_artistLabel;
    UIXPaddedLabel *_curPosLabel;
    UIView *_separatorView;
    UIProgressView *_progressView;
    UIButton *_gestureButton;
    NSLayoutConstraint *_titleLabelCenterY;
    NSLayoutConstraint *_prevButtonWidth;
    NSLayoutConstraint *_nextButtonWidth;
    NSLayoutConstraint *_playButtonWidth;
    NSLayoutConstraint *_curPosTrailingConstraintX;
    NSLayoutConstraint *_prevButtonTrailingConstraintX;
}

@property(nonatomic) __weak NSLayoutConstraint *prevButtonTrailingConstraintX; // @synthesize prevButtonTrailingConstraintX=_prevButtonTrailingConstraintX;
@property(nonatomic) __weak NSLayoutConstraint *curPosTrailingConstraintX; // @synthesize curPosTrailingConstraintX=_curPosTrailingConstraintX;
@property(nonatomic) __weak NSLayoutConstraint *playButtonWidth; // @synthesize playButtonWidth=_playButtonWidth;
@property(nonatomic) __weak NSLayoutConstraint *nextButtonWidth; // @synthesize nextButtonWidth=_nextButtonWidth;
@property(nonatomic) __weak NSLayoutConstraint *prevButtonWidth; // @synthesize prevButtonWidth=_prevButtonWidth;
@property(nonatomic) __weak NSLayoutConstraint *titleLabelCenterY; // @synthesize titleLabelCenterY=_titleLabelCenterY;
@property(nonatomic) __weak UIButton *gestureButton; // @synthesize gestureButton=_gestureButton;
@property(nonatomic) __weak UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) __weak UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(nonatomic) __weak UIXPaddedLabel *curPosLabel; // @synthesize curPosLabel=_curPosLabel;
@property(nonatomic) __weak UILabel *artistLabel; // @synthesize artistLabel=_artistLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak NSLayoutConstraint *artworkImageViewHeight; // @synthesize artworkImageViewHeight=_artworkImageViewHeight;
@property(nonatomic) __weak NSLayoutConstraint *artworkImageViewWidth; // @synthesize artworkImageViewWidth=_artworkImageViewWidth;
@property(nonatomic) __weak UIImageView *artworkImageView; // @synthesize artworkImageView=_artworkImageView;
@property(nonatomic) __weak UIButton *nextButton; // @synthesize nextButton=_nextButton;
@property(nonatomic) __weak UIButton *prevButton; // @synthesize prevButton=_prevButton;
@property(nonatomic) __weak UIButton *playButton; // @synthesize playButton=_playButton;
- (void).cxx_destruct;
- (void)applyThemeForAccentColor:(id)arg1 theme:(int)arg2;
- (void)showOrHideButtons;
- (void)resetConstraints;
- (void)saveConstraints;

@end

