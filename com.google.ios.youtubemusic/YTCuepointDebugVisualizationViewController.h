//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "MLCuepointObserver-Protocol.h"

@class NSString, YTCuepointDebugVisualizationView, YTIntervalTree;

@interface YTCuepointDebugVisualizationViewController : UIViewController <MLCuepointObserver>
{
    YTIntervalTree *_adIntervalTree;
    double _lastReportedProductionTime;
}

- (void).cxx_destruct;
- (_Bool)isAdIntervalWithCuepoint:(id)arg1;
- (void)updateAdState;
- (void)cuepointCollector:(id)arg1 hasCuepoints:(id)arg2;
- (void)setCurrentMediaTime:(CDStruct_d60ef703)arg1;
- (void)reset;
@property(readonly, nonatomic) YTCuepointDebugVisualizationView *cuepointVisualizationView;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

