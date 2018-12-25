//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MDFTextAccessibility : NSObject
{
}

+ (double)minContrastRatioForOptions:(unsigned long long)arg1;
+ (double)luminanceOfColor:(id)arg1;
+ (_Bool)isLargeForContrastRatios:(id)arg1;
+ (_Bool)textColor:(id)arg1 passesOnBackgroundColor:(id)arg2 options:(unsigned long long)arg3;
+ (double)contrastRatioForTextColor:(id)arg1 onBackgroundColor:(id)arg2;
+ (double)minAlphaOfTextColor:(id)arg1 onBackgroundColor:(id)arg2 options:(unsigned long long)arg3;
+ (id)textColorFromChoices:(id)arg1 onBackgroundColor:(id)arg2 options:(unsigned long long)arg3;
+ (id)textColorOnBackgroundColor:(id)arg1 targetTextAlpha:(double)arg2 options:(unsigned long long)arg3;
+ (id)textColorOnBackgroundImage:(id)arg1 inRegion:(struct CGRect)arg2 targetTextAlpha:(double)arg3 font:(id)arg4;
+ (id)textColorOnBackgroundColor:(id)arg1 targetTextAlpha:(double)arg2 font:(id)arg3;

@end

