//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SPTEncoreLabelHelpers : NSObject
{
}

+ (id)stringAttributesForLabel:(id)arg1;
+ (id)stringAttributesForDefaultLabel;
+ (struct CGSize)systemLayoutSizeForView:(id)arg1 fittingSize:(struct CGSize)arg2 withHorizontalFittingPriority:(float)arg3 verticalFittingPriority:(float)arg4;
+ (struct CGSize)systemLayoutSizeForView:(id)arg1 fittingSize:(struct CGSize)arg2;
+ (void)updateStyle:(id)arg1 forLabel:(id)arg2 withAccessibilityScale:(double)arg3;
+ (void)applyStyle:(id)arg1 toLabel:(id)arg2 withAccessibilityScale:(double)arg3 useDynamicTypeMonitor:(_Bool)arg4;
+ (void)applyStyle:(id)arg1 toLabel:(id)arg2 withAccessibilityScale:(double)arg3;
+ (void)applyStyle:(id)arg1 toLabel:(id)arg2;
+ (void)registerLabelForAccessibilityAutosizing:(id)arg1 withStyle:(id)arg2;

@end
