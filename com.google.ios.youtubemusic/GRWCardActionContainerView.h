//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface GRWCardActionContainerView : UIView
{
    long long _preferredAxis;
    long long _preferredAlignment;
    long long _currentAxis;
    double _fittingWidth;
    NSArray *_actions;
}

@property(retain, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(nonatomic) double fittingWidth; // @synthesize fittingWidth=_fittingWidth;
@property(nonatomic) long long currentAxis; // @synthesize currentAxis=_currentAxis;
@property(nonatomic) long long preferredAlignment; // @synthesize preferredAlignment=_preferredAlignment;
@property(nonatomic) long long preferredAxis; // @synthesize preferredAxis=_preferredAxis;
- (void).cxx_destruct;
- (double)marginForActionsAlongAxis:(long long)arg1 edge:(unsigned long long)arg2;
- (double)actionSpacerForActionsAlongAxis:(long long)arg1;
- (struct CGSize)actionButtonSizeForTitle:(id)arg1 style:(unsigned long long)arg2;
- (CDStruct_42a63532)actionLayoutSizes;
- (long long)axisForButtonsFittingWidth:(double)arg1;
- (long long)alignmentForAxis:(long long)arg1;
- (void)layOutButtonsVerticallyInRect:(struct CGRect)arg1;
- (void)layOutButtonsHorizontallyInRect:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)fitToWidth:(double)arg1;
@property(readonly, nonatomic) double currentMinimumWidth;
- (id)initWithActions:(id)arg1 preferredAlignment:(long long)arg2 preferredAxis:(long long)arg3;

@end

