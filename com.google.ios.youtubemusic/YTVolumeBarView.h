//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, YTVolumeBarLineView;
@protocol YTVolumeBarViewDelegate;

@interface YTVolumeBarView : UIView
{
    long long _style;
    YTVolumeBarLineView *_volumeBarLineView;
    UIImageView *_volumeOffImageView;
    UIImageView *_volumeUpImageView;
    float _outputVolume;
    _Bool _volumeInitializedByMDX;
    UIView *_backgroundView;
    id <YTVolumeBarViewDelegate> _delegate;
}

@property(nonatomic) __weak id <YTVolumeBarViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void).cxx_destruct;
- (_Bool)isConnectedToMDX;
- (void)hideAfterDelay;
- (void)volumeChanged:(id)arg1;
- (void)setVolume:(float)arg1;
- (void)updateTrackColors;
@property(readonly, nonatomic) _Bool isVisible;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

