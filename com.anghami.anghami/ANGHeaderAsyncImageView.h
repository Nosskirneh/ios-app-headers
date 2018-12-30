//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ANGAsyncImageView.h"

#import "ANGAsyncImageViewDelegate-Protocol.h"

@class CAGradientLayer, NSString;

@interface ANGHeaderAsyncImageView : ANGAsyncImageView <ANGAsyncImageViewDelegate>
{
    CAGradientLayer *_gradient;
    double _topOffset;
}

@property(nonatomic) double topOffset; // @synthesize topOffset=_topOffset;
- (void).cxx_destruct;
- (void)setHidden:(_Bool)arg1;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)addlayerWithColors:(id)arg1 locations:(id)arg2 opacity:(double)arg3;
- (struct CGRect)gradientFrame;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

