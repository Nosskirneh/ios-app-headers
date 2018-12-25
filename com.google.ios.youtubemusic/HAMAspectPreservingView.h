//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "HAMPixelBufferRenderingViewFrameSizeDelegate-Protocol.h"

@class NSString;
@protocol HAMPixelBufferRenderingView;

@interface HAMAspectPreservingView : UIView <HAMPixelBufferRenderingViewFrameSizeDelegate>
{
    struct CGSize _pixelBufferSize;
    struct CGSize _renderedSize;
    UIView<HAMPixelBufferRenderingView> *_renderingView;
    struct CGRect _videoRect;
}

@property(retain, nonatomic) UIView<HAMPixelBufferRenderingView> *renderingView; // @synthesize renderingView=_renderingView;
@property(readonly, nonatomic) struct CGRect videoRect; // @synthesize videoRect=_videoRect;
- (void).cxx_destruct;
- (void)updateRenderingViewHiddenState;
- (void)pixelBufferRenderingView:(id)arg1 renderedSizeDidChange:(struct CGSize)arg2;
- (void)pixelBufferRenderingView:(id)arg1 pixelBufferSizeDidChange:(struct CGSize)arg2;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

