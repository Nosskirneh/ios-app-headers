//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIAccessibilityElement.h>

@class NSArray;

@interface NIViewAccessibilityElement : UIAccessibilityElement
{
    _Bool _isContainerDataValid;
    NSArray *_pointsInContainer;
    struct CGRect _frameInContainer;
}

@property(nonatomic) _Bool isContainerDataValid; // @synthesize isContainerDataValid=_isContainerDataValid;
@property(readonly, nonatomic) NSArray *pointsInContainer; // @synthesize pointsInContainer=_pointsInContainer;
@property(readonly, nonatomic) struct CGRect frameInContainer; // @synthesize frameInContainer=_frameInContainer;
- (void).cxx_destruct;
- (struct CGPoint)accessibilityActivationPoint;
- (id)accessibilityPath;
- (struct CGRect)accessibilityFrame;
- (void)setAccessibilityContainer:(id)arg1;
- (id)initWithAccessibilityContainer:(id)arg1;
- (id)initWithAccessibilityContainer:(id)arg1 frameInContainer:(struct CGRect)arg2;
- (id)initWithAccessibilityContainer:(id)arg1 frameInContainer:(struct CGRect)arg2 pointsInContainer:(id)arg3;

@end

