//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVAsset, CALayer, NSMutableArray, SCWaveformCache, SCWaveformLayerDelegate, UIActivityIndicatorView, UIColor, UIImageView;

@interface SCWaveformView : UIView
{
    SCWaveformCache *_cache;
    NSMutableArray *_waveforms;
    SCWaveformLayerDelegate *_waveformLayersDelegate;
    CALayer *_waveformSuperlayer;
    int _firstVisibleIdx;
    _Bool _graphDirty;
    _Bool _isCreatingWaveform;
    UIImageView *_waveformImageView;
    UIColor *_normalColor;
    UIColor *_progressColor;
    double _precision;
    double _lineWidthRatio;
    double _channelsPadding;
    unsigned long long _channelStartIndex;
    double _widthToScrollViewWidth;
    UIActivityIndicatorView *_activityIndicator;
    CDStruct_1b6d18a9 _progressTime;
    CDStruct_e83c9415 _timeRange;
}

+ (id)recolorizeImage:(id)arg1 withColor:(id)arg2;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property double widthToScrollViewWidth; // @synthesize widthToScrollViewWidth=_widthToScrollViewWidth;
@property(nonatomic) unsigned long long channelStartIndex; // @synthesize channelStartIndex=_channelStartIndex;
@property(nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
@property(nonatomic) double channelsPadding; // @synthesize channelsPadding=_channelsPadding;
@property(nonatomic) double lineWidthRatio; // @synthesize lineWidthRatio=_lineWidthRatio;
@property(nonatomic) double precision; // @synthesize precision=_precision;
@property(nonatomic) CDStruct_1b6d18a9 progressTime; // @synthesize progressTime=_progressTime;
@property(retain, nonatomic) UIColor *progressColor; // @synthesize progressColor=_progressColor;
@property(retain, nonatomic) UIColor *normalColor; // @synthesize normalColor=_normalColor;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long channelEndIndex;
@property(readonly, nonatomic) CDStruct_1b6d18a9 actualAssetDuration;
@property(readonly, nonatomic) struct CGSize waveformSize;
@property(retain, nonatomic) AVAsset *asset;
- (void)_makeDirty;
- (void)_updateLayersColor:(_Bool)arg1 lineWidth:(_Bool)arg2;
- (id)generateWaveformImageWithSize:(struct CGSize)arg1;
- (void)finishCreatingWaveformWithSize:(struct CGSize)arg1;
- (void)layoutSubviews;
- (unsigned long long)_prepareLayers:(double)arg1;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

