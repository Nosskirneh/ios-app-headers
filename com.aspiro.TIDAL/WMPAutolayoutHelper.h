//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WMPAutolayoutHelper : NSObject
{
}

+ (void)centerView:(id)arg1;
+ (void)removeWidthConstraintsFromView:(id)arg1;
+ (void)removeHeightConstraintsFromView:(id)arg1;
+ (void)setMinimumWidth:(unsigned long long)arg1 forView:(id)arg2;
+ (void)setExactWidth:(unsigned long long)arg1 forView:(id)arg2;
+ (void)setExactWidth:(unsigned long long)arg1 forViews:(id)arg2;
+ (void)setExactHeight:(unsigned long long)arg1 forView:(id)arg2;
+ (void)setExactHeight:(unsigned long long)arg1 forViews:(id)arg2;
+ (void)setMinimumHeight:(unsigned long long)arg1 forView:(id)arg2;
+ (void)setMinimumHeight:(unsigned long long)arg1 forViews:(id)arg2;
+ (void)removeSizeConstraintFromView:(id)arg1;
+ (void)removeSizeConstraintsFromViews:(id)arg1;
+ (void)removeConstraintsFromView:(id)arg1;
+ (void)removeConstraintsFromViews:(id)arg1;
+ (void)removeConstraintsFromView:(id)arg1 toView:(id)arg2;
+ (void)removeConstraintsFromView:(id)arg1 toViews:(id)arg2;
+ (void)addEqualMarginsOfSize:(unsigned long long)arg1 toView:(id)arg2 inSuperview:(id)arg3;
+ (void)addEqualMarginsOfSize:(unsigned long long)arg1 toViews:(id)arg2 inSuperview:(id)arg3;
+ (void)addRowWithViews:(id)arg1 withMinimumSpacing:(unsigned long long)arg2 inSuperview:(id)arg3;
+ (void)addRowWithViews:(id)arg1 withSpacing:(unsigned long long)arg2 inSuperview:(id)arg3;
+ (void)addColumnWithViews:(id)arg1 withMinimumSpacing:(unsigned long long)arg2 attachesToBottom:(_Bool)arg3 inSuperview:(id)arg4;
+ (void)addColumnWithViews:(id)arg1 withSpacing:(unsigned long long)arg2 attachesToBottom:(_Bool)arg3 inSuperview:(id)arg4;

@end

