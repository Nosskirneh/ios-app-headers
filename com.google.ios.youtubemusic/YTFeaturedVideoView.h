//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "YTAnnotationsViewProtocol-Protocol.h"

@class NSString, UIButton, UIGestureRecognizer, YTImageView, YTLabel;
@protocol YTFeaturedVideoViewDelegate;

@interface YTFeaturedVideoView : UIView <YTAnnotationsViewProtocol>
{
    UIView *_container;
    UIView *_backgroundView;
    YTImageView *_thumbnailImageView;
    UIView *_labelContainer;
    YTLabel *_headingLabel;
    YTLabel *_titleLabel;
    UIButton *_closeButton;
    _Bool _raised;
    UIGestureRecognizer *_tapGestureRecognizer;
    id <YTFeaturedVideoViewDelegate> _delegate;
}

@property(nonatomic) __weak id <YTFeaturedVideoViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didTapFeaturedVideo:(id)arg1;
- (void)fadeInAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)fadeOutAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)hideAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)showAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)userDidInitiateClose;
- (struct CGSize)preferredThumbnailSize;
- (void)setThumbnail:(id)arg1;
- (void)setTitle:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

