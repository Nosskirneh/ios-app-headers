//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIWindow.h>

@interface MSAExternalWindow : UIWindow
{
    _Bool _allowFrameChange;
    _Bool _allowVisibilityChange;
}

@property(nonatomic) _Bool allowVisibilityChange; // @synthesize allowVisibilityChange=_allowVisibilityChange;
@property(nonatomic) _Bool allowFrameChange; // @synthesize allowFrameChange=_allowFrameChange;
- (void)didAddSubview:(id)arg1;
- (void)layoutSubviews;
- (void)setHidden:(_Bool)arg1;
- (_Bool)isHidden;
- (void)setBounds:(struct CGRect)arg1;
- (struct CGRect)bounds;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGRect)frame;
- (id)initWithFrame:(struct CGRect)arg1;

@end

