//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GLUEStatefulView.h"

#import "GLUEStyleable.h"

@class GLUEGradientView, NSString, UIActivityIndicatorView, UIButton, UIImage, UIImageView, UILabel, UIView;

@interface SPTHomeUIVideoCardView : GLUEStatefulView <GLUEStyleable>
{
    UIImageView *_callToActionImageView;
    UIButton *_playingButton;
    UIImageView *_videoPlaceholderImageView;
    UIActivityIndicatorView *_spinner;
    UIView *_videoView;
    id <GLUETheme> _theme;
    UILabel *_callToActionLabel;
    UIView *_callToActionView;
    GLUEGradientView *_gradientView;
}

@property(readonly, nonatomic) GLUEGradientView *gradientView; // @synthesize gradientView=_gradientView;
@property(readonly, nonatomic) UIView *callToActionView; // @synthesize callToActionView=_callToActionView;
@property(readonly, nonatomic) UILabel *callToActionLabel; // @synthesize callToActionLabel=_callToActionLabel;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) UIView *videoView; // @synthesize videoView=_videoView;
@property(readonly, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(copy, nonatomic) UIImageView *videoPlaceholderImageView; // @synthesize videoPlaceholderImageView=_videoPlaceholderImageView;
@property(retain, nonatomic) UIButton *playingButton; // @synthesize playingButton=_playingButton;
@property(readonly, nonatomic) UIImageView *callToActionImageView; // @synthesize callToActionImageView=_callToActionImageView;
- (void).cxx_destruct;
- (void)hidePlaceholderImage;
- (id)createSpinner;
- (id)createCallToActionLabel;
- (void)applyStateStyle:(id)arg1;
- (void)glue_applyStyle:(id)arg1;
@property(copy, nonatomic) UIImage *placeholderImage;
@property(copy, nonatomic) NSString *callToActionText; // @dynamic callToActionText;
- (id)initWithFrame:(struct CGRect)arg1 videoView:(id)arg2 theme:(id)arg3 layout:(id)arg4 interfaceFactory:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
