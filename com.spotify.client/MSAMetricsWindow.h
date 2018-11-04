//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIWindow.h"

@class CADisplayLink, NSMutableArray, UIButton, UILabel, UIScrollView;

@interface MSAMetricsWindow : UIWindow
{
    UILabel *inactiveLabel;
    UILabel *fpsLabel;
    UILabel *cpuLabel;
    CADisplayLink *displayLink;
    double lastUpdateTime;
    UIScrollView *scrollView;
    NSMutableArray *cpuUsingThreads;
    UIButton *incCpuBtn;
    UIButton *decCpuBtn;
}

- (void).cxx_destruct;
- (void)cancelAllThreads;
- (void)threadFunc;
- (void)updateCpuBtns;
- (void)decreaseCpuBtnTapped:(id)arg1;
- (void)increaseCpuBtnTapped:(id)arg1;
- (void)metricsBtnTapped:(id)arg1;
- (int)buildFromOrderedSet:(id)arg1 withStartingYPos:(int)arg2 withName:(id)arg3;
- (void)buildFromList:(id)arg1;
- (void)displayLinkUpdate:(id)arg1;
- (void)setHidden:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

