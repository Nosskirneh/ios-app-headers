//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ViewUtils : NSObject
{
}

+ (id)bottomShadowMaskLayerForView:(id)arg1;
+ (id)cutoutShadowMaskLayerForView:(id)arg1;
+ (struct UIEdgeInsets)edgeInsetsWithElevation:(double)arg1;
+ (void)setShadowApplyShadowMask:(_Bool)arg1 onView:(id)arg2;
+ (void)setShadowElevation:(double)arg1 onView:(id)arg2;
+ (double)columnWidthForFullWidth:(double)arg1 numberOfColumns:(unsigned long long)arg2 interItemSpacing:(double)arg3 leftPadding:(double)arg4 rightPadding:(double)arg5;
+ (double)columnWidthForFullWidth:(double)arg1 numberOfColumns:(unsigned long long)arg2 interItemSpacing:(double)arg3;
+ (struct CGSize)screenSize;

@end
