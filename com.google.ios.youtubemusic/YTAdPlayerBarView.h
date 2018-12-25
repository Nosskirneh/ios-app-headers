//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class YTFullWidthSlider;

@interface YTAdPlayerBarView : UIView
{
    YTFullWidthSlider *_downloadingPlayerBar;
    YTFullWidthSlider *_playingPlayerBar;
    double _totalSeconds;
    double _mediaTime;
    double _downloadedSeconds;
}

+ (id)fullAdPlayerBarView;
- (void).cxx_destruct;
- (double)preferredHeight;
- (void)updateScrubberAndTime;
- (void)setMediaTime:(double)arg1;
- (void)setDownloadedTime:(double)arg1;
- (void)setTotalTime:(double)arg1;
- (void)layoutSubviews;
- (id)init;

@end

