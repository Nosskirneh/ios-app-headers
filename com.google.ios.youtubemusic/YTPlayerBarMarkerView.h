//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIColor;

@interface YTPlayerBarMarkerView : UIView
{
    UIColor *_markerColor;
    NSArray *_markers;
    double _totalTime;
    double _markerHeight;
    double _liveAiringProductionStartTime;
}

@property(nonatomic) double liveAiringProductionStartTime; // @synthesize liveAiringProductionStartTime=_liveAiringProductionStartTime;
@property(nonatomic) double markerHeight; // @synthesize markerHeight=_markerHeight;
@property(nonatomic) double totalTime; // @synthesize totalTime=_totalTime;
@property(copy, nonatomic) NSArray *markers; // @synthesize markers=_markers;
@property(readonly, nonatomic) UIColor *markerColor; // @synthesize markerColor=_markerColor;
- (void).cxx_destruct;
- (struct CGRect)rectForMarker:(id)arg1 containerRect:(struct CGRect)arg2;
- (double)markerWidthForAdMarker:(id)arg1 totalWidth:(double)arg2;
- (_Bool)isAdMarkerForLive:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 color:(id)arg2;

@end

