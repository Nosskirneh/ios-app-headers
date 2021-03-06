//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "VOXEQScaleDataSource-Protocol.h"
#import "VOXPEQViewDataSource-Protocol.h"

@class NSArray, NSString, VOXPEQDotView;
@protocol VOXPEQGraphControllerDelegate;

@interface VOXPEQGraphViewController : UIViewController <VOXEQScaleDataSource, VOXPEQViewDataSource>
{
    struct CGPoint _tapBeganPoint;
    double _timeTapBegan;
    _Bool _isInQmode;
    _Bool _qMode;
    NSArray *_filters;
    VOXPEQDotView *_selectedDot;
    id <VOXPEQGraphControllerDelegate> _delegate;
}

@property(nonatomic) id <VOXPEQGraphControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool qMode; // @synthesize qMode=_qMode;
@property(retain, nonatomic) VOXPEQDotView *selectedDot; // @synthesize selectedDot=_selectedDot;
@property(retain, nonatomic) NSArray *filters; // @synthesize filters=_filters;
- (void).cxx_destruct;
- (id)closestDotToPoint:(struct CGPoint)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)clearDotSelection;
- (id)setFilterAtIndex:(unsigned long long)arg1 type:(unsigned long long)arg2 freq:(float)arg3 gain:(float)arg4 Q:(float)arg5 bandWidth:(float)arg6;
- (id)setFilterWithIndex:(long long)arg1 freq:(float)arg2 gain:(float)arg3 additionalParam:(float)arg4;
- (id)setFilterWithIndex:(long long)arg1 freq:(float)arg2 gain:(float)arg3;
- (_Bool)pinchTag:(long long)arg1 withRatio:(float)arg2 center:(struct CGPoint)arg3;
- (_Bool)dotWithTag:(long long)arg1 movedToPoint:(struct CGPoint *)arg2;
- (float)yForView:(id)arg1 fromDB:(float)arg2;
- (float)xForView:(id)arg1 fromFrequency:(float)arg2;
- (id)selectedFilter;
- (_Bool)isEditinQMode;
- (id)filterArray;
- (float)response:(float)arg1;
- (float)maxGain;
- (float)resultingGain;
- (float)resultingGain2;
- (float)coordFromDB:(float)arg1;
- (float)dbFromCoordY:(float)arg1;
- (float)frequencyFromCoordX:(float)arg1;
- (float)coordXFromFrequency:(float)arg1;
- (id)keyFromFilterType:(unsigned long long)arg1;
- (unsigned long long)filterTypeForKey:(id)arg1;
- (void)viewDidLayoutSubviews;
@property(readonly, nonatomic) _Bool isFlat;
- (void)didReceiveMemoryWarning;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

