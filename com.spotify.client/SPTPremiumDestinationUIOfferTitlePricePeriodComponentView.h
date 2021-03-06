//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HUBComponentView.h"

@class GLUELabel, SPTPremiumDestinationUIGLUETheme, SPTPremiumDestinationUIOfferTitlePricePeriodStyle, UILayoutGuide;

@interface SPTPremiumDestinationUIOfferTitlePricePeriodComponentView : HUBComponentView
{
    SPTPremiumDestinationUIGLUETheme *_theme;
    SPTPremiumDestinationUIOfferTitlePricePeriodStyle *_style;
    UILayoutGuide *_layoutGuide;
    GLUELabel *_titleLabel;
    GLUELabel *_subtitleLabel;
    GLUELabel *_accessoryLabel;
}

+ (struct CGSize)labelSizeForContainerViewSize:(struct CGSize)arg1 labelStyle:(id)arg2 text:(id)arg3;
+ (struct CGSize)sizeForContainerViewSize:(struct CGSize)arg1 model:(id)arg2 theme:(id)arg3;
@property(retain, nonatomic) GLUELabel *accessoryLabel; // @synthesize accessoryLabel=_accessoryLabel;
@property(retain, nonatomic) GLUELabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILayoutGuide *layoutGuide; // @synthesize layoutGuide=_layoutGuide;
@property(retain, nonatomic) SPTPremiumDestinationUIOfferTitlePricePeriodStyle *style; // @synthesize style=_style;
@property(retain, nonatomic) SPTPremiumDestinationUIGLUETheme *theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (void)configureWithModel:(id)arg1;
- (void)setupConstraints;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id)arg2;

@end

