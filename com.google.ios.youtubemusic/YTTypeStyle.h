//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface YTTypeStyle : NSObject
{
}

+ (_Bool)isUpperCaseForTypeKind:(long long)arg1;
+ (double)lineHeightForTypeKind:(long long)arg1;
+ (double)kerningForTypeKind:(long long)arg1;
+ (id)colorForTypeVariant:(long long)arg1;
+ (long long)variantForTypeKind:(long long)arg1;
+ (id)boldItalicFontForTypeKind:(long long)arg1;
+ (id)italicFontForTypeKind:(long long)arg1;
+ (id)boldFontForTypeKind:(long long)arg1;
+ (id)fontForTypeKind:(long long)arg1;
+ (id)defaultTypeStyle;
+ (_Bool)useBoldSubscribeButton;
+ (void)setUseBoldSubscribeButton:(_Bool)arg1;
+ (_Bool)useUpdatedTypeStyles;
+ (void)setUseUpdatedTypeStyles:(_Bool)arg1;
+ (void)setDynamicFontSizingEnabled:(_Bool)arg1;
+ (void)setTypeStyleOverride:(id)arg1;
+ (id)fontForPhoneVerificationTypeKind:(long long)arg1;

@end

