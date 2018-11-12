//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface DZROfflineMixHeaderView : UIView
{
    CDUnknownBlockType _callback;
    UILabel *_shuffleLabel;
    UIView *_separator;
    UIImageView *_shuffleImageView;
}

+ (double)viewHeight;
@property(nonatomic) __weak UIImageView *shuffleImageView; // @synthesize shuffleImageView=_shuffleImageView;
@property(nonatomic) __weak UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) UILabel *shuffleLabel; // @synthesize shuffleLabel=_shuffleLabel;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
- (void).cxx_destruct;
- (id)shuffleImage;
- (id)animatedEqualizerImage;
- (id)equalizerImage;
- (void)buttonRelesed:(id)arg1;
- (void)buttonTouched:(id)arg1;
- (void)buttonPressed:(id)arg1;
- (void)listeningContextChangedWith:(id)arg1;
- (void)playerDidPausePlaying:(id)arg1;
- (void)playerDidStartPlaying:(id)arg1;
- (_Bool)playerContextIsOfflineShuffle;
- (void)dealloc;
- (void)awakeFromNib;

@end
