//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MLAVPlayerViewProtocol-Protocol.h"

@class AVPlayerLayer, NSString;
@protocol MLAVPlayerViewDelegate;

@interface MLAVPlayerLayerView : UIView <MLAVPlayerViewProtocol>
{
    id <MLAVPlayerViewDelegate> _delegate;
    AVPlayerLayer *_playerLayer;
}

+ (Class)layerClass;
@property(readonly, nonatomic) AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
@property(nonatomic) __weak id <MLAVPlayerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handlePanEnded;
- (void)handlePanChangedWithTranslation:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (_Bool)handlePanBegan;
- (_Bool)respondsToPan;
- (void)playerItemDidChange;
- (void)prepareForReuse;
- (void)setPlayer:(id)arg1;
- (void)setVideo:(id)arg1 playerConfig:(id)arg2;
@property(readonly, nonatomic) struct CGRect videoRect;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

