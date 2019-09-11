//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GLUEGradientView, NSLayoutConstraint, SPTLyricsV2TextView;

@interface SPTLyricsV2LyricsView : UIView
{
    SPTLyricsV2TextView *_textView;
    GLUEGradientView *_gradientView;
    NSLayoutConstraint *_bottomConstraint;
    NSLayoutConstraint *_gradientViewHeightConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *gradientViewHeightConstraint; // @synthesize gradientViewHeightConstraint=_gradientViewHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(retain, nonatomic) GLUEGradientView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) SPTLyricsV2TextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (void)glue_applyStyle:(id)arg1;
- (void)setBottomMargin:(double)arg1;
- (void)setupConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

