//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTAdVideoBaseContentView.h"

@class GLUEGradientView, SPTLayoutConstraintBuilder;

@interface SPTAdVideoVerticalContentView : SPTAdVideoBaseContentView
{
    _Bool _showsVideoControls;
    GLUEGradientView *_gradientView;
    SPTLayoutConstraintBuilder *_layout;
}

@property(retain, nonatomic) SPTLayoutConstraintBuilder *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) GLUEGradientView *gradientView; // @synthesize gradientView=_gradientView;
- (void)setShowsVideoControls:(_Bool)arg1;
- (_Bool)showsVideoControls;
- (void).cxx_destruct;
- (id)createGradientView;
- (void)setShowsVideoControls:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateConstraints;
- (id)initWithVideoSurface:(id)arg1 theme:(id)arg2 skippable:(_Bool)arg3;

@end
