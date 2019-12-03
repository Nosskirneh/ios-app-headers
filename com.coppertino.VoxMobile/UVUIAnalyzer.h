//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface UVUIAnalyzer : NSObject
{
}

+ (struct CGRect)getCurrentAppFrameInFixedCoordinateSpace;
+ (struct CGPoint)getAppFrameOriginInRelativeCoordinateSpace:(id)arg1;
+ (id)searchViewController:(id)arg1;
+ (_Bool)isLayerInHierarchy:(id)arg1 visibleWindows:(id)arg2;
+ (struct CGRect)getLayerFrameInFixedCoordinateSystem:(id)arg1;
+ (id)getTopmostLayer:(id)arg1;
+ (struct CGPoint)absoluteOriginInFixedCoordinateSystem:(id)arg1;
+ (struct CGRect)absoluteFrameInFixedCoordinateSystem:(id)arg1;
+ (struct CGPoint)convertFromScreenCoordinatesToFixedCoordinatesIfNeeded:(id)arg1 point:(struct CGPoint)arg2;
+ (struct CGRect)convertFromScreenCoordinatesToFixedCoordinatesIfNeeded:(id)arg1 rect:(struct CGRect)arg2;
+ (struct CGPoint)convertToWindowCoordinateSpaceIfNeeded:(struct CGPoint)arg1 window:(id)arg2;
+ (struct CGPoint)convertToFixedCoordinateSpaceIfNeeded:(struct CGPoint)arg1 window:(id)arg2;
+ (id)getIOS8AlertViewItem:(id)arg1;
+ (_Bool)isCalloutButton:(id)arg1;
+ (_Bool)containsIOS7Popover:(id)arg1;
+ (_Bool)isIOSKeyboardWindow:(id)arg1;
+ (_Bool)isIOS11AlertWindow:(id)arg1;
+ (_Bool)isIOS7AlertWindow:(id)arg1;
+ (void)keyWindowResigns:(id)arg1;
+ (id)getAvailableWindows;
+ (double)getAlphaOfColor:(id)arg1;
+ (id)findTopMostViewForPoint:(struct CGPoint)arg1 view:(id)arg2;
+ (_Bool)isViewVisibleInRect:(id)arg1 rect:(struct CGRect)arg2;
+ (id)imageFromView:(id)arg1;
+ (id)getViewTouchRectFromTapRecognizer:(id)arg1;
+ (_Bool)isChildOf:(id)arg1 parent:(id)arg2;
+ (_Bool)isUniqueButtonForClickSelector:(id)arg1 forViewController:(id)arg2;
+ (id)getClickSelectorName:(id)arg1 forViewController:(id)arg2;
+ (id)getFarthestParentOfView:(id)arg1 withType:(Class)arg2;
+ (id)findFirstControlOfTypeByString:(id)arg1 type:(id)arg2;
+ (id)findFirstControlOfType:(id)arg1 type:(Class)arg2;
+ (id)getParentOfTypeByString:(id)arg1 type:(id)arg2;
+ (id)getParentOfType:(id)arg1 type:(Class)arg2;
+ (void)findControlsOfType:(id)arg1 classTypes:(id)arg2 results:(id)arg3;
+ (long long)getControlIndexFromContainer:(id)arg1 fromContainer:(id)arg2 controlClasses:(id)arg3;
+ (id)getControlIndex:(id)arg1 includeContainers:(_Bool)arg2 controlClasses:(id)arg3;
+ (id)getButtonControlIndex:(id)arg1;
+ (void)printVisualTree:(id)arg1 indent:(id)arg2 viewToMark:(id)arg3;
+ (long long)countControlsOfType:(id)arg1 type:(Class)arg2;

@end
