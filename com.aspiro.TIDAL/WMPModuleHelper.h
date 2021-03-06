//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WMPModuleHelper : NSObject
{
}

+ (void)setViews:(id)arg1 toAlpha:(double)arg2 animate:(_Bool)arg3 withCompletion:(CDUnknownBlockType)arg4;
+ (void)showViews:(id)arg1 animate:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
+ (void)hideViews:(id)arg1 animate:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
+ (double)calculateHeightConstrainsForCollectionViewController:(id)arg1 withHeightUnits:(double)arg2 canCollapse:(_Bool)arg3;
+ (void)addModule:(id)arg1 toContainerView:(id)arg2 inViewController:(id)arg3 insets:(struct UIEdgeInsets)arg4;
+ (void)addModuleAsChild:(id)arg1 toViewController:(id)arg2 insets:(struct UIEdgeInsets)arg3;
+ (double)widthConstraint:(id)arg1;
+ (void)setWidthConstraint:(id)arg1 value:(double)arg2;
+ (double)heightConstraint:(id)arg1;
+ (void)setHeightConstraintInView:(id)arg1 value:(double)arg2;

@end

