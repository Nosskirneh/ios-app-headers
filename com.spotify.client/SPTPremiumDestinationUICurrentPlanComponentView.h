//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HUBComponentView.h"

@class GLUELabel, SPTPremiumDestinationUICurrentPlanStyle;
@protocol GLUETheme;

@interface SPTPremiumDestinationUICurrentPlanComponentView : HUBComponentView
{
    id <GLUETheme> _theme;
    SPTPremiumDestinationUICurrentPlanStyle *_style;
    GLUELabel *_titleLabel;
    GLUELabel *_subtitleLabel;
}

+ (struct CGSize)sizeForContainerViewSize:(struct CGSize)arg1 model:(id)arg2 theme:(id)arg3;
@property(retain, nonatomic) GLUELabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) SPTPremiumDestinationUICurrentPlanStyle *style; // @synthesize style=_style;
@property(retain, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (void)configureWithModel:(id)arg1;
- (void)configureSubtitleWithModel:(id)arg1 labelStyle:(id)arg2;
- (void)configureTitleWithModel:(id)arg1 labelStyle:(id)arg2;
- (void)setupConstraints;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id)arg2;

@end

