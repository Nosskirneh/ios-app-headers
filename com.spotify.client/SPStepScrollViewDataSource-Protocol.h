//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPPageView, SPStepScrollView;

@protocol SPStepScrollViewDataSource <NSObject>
- (SPPageView *)stepScrollView:(SPStepScrollView *)arg1 pageViewAtRelativeIndex:(long long)arg2;
- (long long)stepScrollView:(SPStepScrollView *)arg1 numberOfStepsInDirection:(int)arg2;
@end

