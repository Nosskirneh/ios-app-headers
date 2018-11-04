//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class GLUEGradientView, GLUEHeaderBackgroundView, NSLayoutConstraint, SPTPodcastFindLogger, UIButton;

@interface SPTPodcastFindHeaderView : UIView
{
    id <SPTPodcastFindHeaderViewDelegate> _delegate;
    UIView *_backgroundView;
    id <GLUETheme> _theme;
    UIButton *_findHeaderButton;
    UIButton *_microphoneButton;
    GLUEHeaderBackgroundView *_backgroundGradientView;
    GLUEGradientView *_backgroundOverlayView;
    SPTPodcastFindLogger *_logger;
    NSLayoutConstraint *_topMicrophoneConstraint;
    NSLayoutConstraint *_searchBarRightConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *searchBarRightConstraint; // @synthesize searchBarRightConstraint=_searchBarRightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *topMicrophoneConstraint; // @synthesize topMicrophoneConstraint=_topMicrophoneConstraint;
@property(readonly, nonatomic) SPTPodcastFindLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) GLUEGradientView *backgroundOverlayView; // @synthesize backgroundOverlayView=_backgroundOverlayView;
@property(retain, nonatomic) GLUEHeaderBackgroundView *backgroundGradientView; // @synthesize backgroundGradientView=_backgroundGradientView;
@property(retain, nonatomic) UIButton *microphoneButton; // @synthesize microphoneButton=_microphoneButton;
@property(retain, nonatomic) UIButton *findHeaderButton; // @synthesize findHeaderButton=_findHeaderButton;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) __weak id <SPTPodcastFindHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)parentContentOffsetDidChange:(struct CGPoint)arg1;
- (void)didTapMicrophoneButton:(id)arg1;
- (void)didTapSearchButton;
- (void)updateButtonWithTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)addFindHeaderButton;
- (void)addMicrophoneButton;
- (void)setupBackgroundView;
- (void)setupConstraints;
- (void)showMicrophoneButton;
- (id)initWithTheme:(id)arg1 logger:(id)arg2;

@end

