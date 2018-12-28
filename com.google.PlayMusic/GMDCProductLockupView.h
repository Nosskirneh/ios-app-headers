//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GMDCProductLockupFonts, NSString, UIColor, UILabel;

@interface GMDCProductLockupView : UIView
{
    _Bool _greyLogo;
    _Bool _mdc_adjustsFontForContentSizeCategory;
    NSString *_fullProductName;
    NSString *_logoPlaceholder;
    UIColor *_logoTextColor;
    double _fontSize;
    UILabel *_textLabel;
    NSString *_parsedFullProductName;
    NSString *_productTextFontName;
    GMDCProductLockupFonts *_productLockupFonts;
}

@property(nonatomic, setter=mdc_setAdjustsFontForContentSizeCategory:) _Bool mdc_adjustsFontForContentSizeCategory; // @synthesize mdc_adjustsFontForContentSizeCategory=_mdc_adjustsFontForContentSizeCategory;
@property(retain, nonatomic) GMDCProductLockupFonts *productLockupFonts; // @synthesize productLockupFonts=_productLockupFonts;
@property(retain, nonatomic) NSString *productTextFontName; // @synthesize productTextFontName=_productTextFontName;
@property(retain, nonatomic) NSString *parsedFullProductName; // @synthesize parsedFullProductName=_parsedFullProductName;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(retain, nonatomic) UIColor *logoTextColor; // @synthesize logoTextColor=_logoTextColor;
@property(nonatomic) _Bool greyLogo; // @synthesize greyLogo=_greyLogo;
@property(copy, nonatomic) NSString *logoPlaceholder; // @synthesize logoPlaceholder=_logoPlaceholder;
@property(copy, nonatomic) NSString *fullProductName; // @synthesize fullProductName=_fullProductName;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setBounds:(struct CGRect)arg1;
- (void)updateTextRelatedValues;
- (void)colorTheGoogleLogoCharacters:(id)arg1 googleLogoRange:(struct _NSRange)arg2;
- (id)productLockupAttributedStringForSize:(double)arg1;
- (id)parseFullProductName;
- (id)scaledFontForFont:(id)arg1;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (id)contentSizeCategory;
@property(nonatomic) long long horizontalAlignment;
@property(nonatomic) double minFontSizeScaleFactor;
- (void)dealloc;
- (void)commonGMDCProductLockupViewInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

