//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView;

@interface FBAdQualityViewabilityMeasurement : NSObject
{
    UIView *_targetView;
}

+ (id)measurementWithTargetView:(id)arg1;
@property(retain, nonatomic) UIView *targetView; // @synthesize targetView=_targetView;
- (void).cxx_destruct;
- (double)unionAreaOfRects:(id)arg1;
- (id)intersectingRectsInView:(id)arg1 targetRect:(struct CGRect)arg2;
- (id)overlappingRectsInView:(id)arg1 targetRect:(struct CGRect)arg2;
- (float)viewableRatio;
- (id)init;
- (id)initWithTargetView:(id)arg1;

@end

