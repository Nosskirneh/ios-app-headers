//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HUBComponentView.h"

@class GLUELabel, NSMutableArray, UIView;
@protocol GLUETheme;

@interface SPTFreeTierUIServiceAfterOnboardingWelcomeHeaderComponentView : HUBComponentView
{
    id <GLUETheme> _theme;
    UIView *_textContainer;
    GLUELabel *_title;
    GLUELabel *_subtitle;
    NSMutableArray *_layoutConstraints;
}

+ (id)subtitleStyle:(id)arg1;
+ (id)titleStyle:(id)arg1;
+ (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2 theme:(id)arg3;
@property(retain, nonatomic) NSMutableArray *layoutConstraints; // @synthesize layoutConstraints=_layoutConstraints;
@property(retain, nonatomic) GLUELabel *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) GLUELabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UIView *textContainer; // @synthesize textContainer=_textContainer;
@property(retain, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (void)configureWithModel:(id)arg1;
- (id)createSubtitle;
- (id)createTitle;
- (void)setupSubtitle:(_Bool)arg1;
- (void)setupTitle:(_Bool)arg1;
- (void)setupTextContainer;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id)arg2;

@end

