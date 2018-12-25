//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "YTPageStyling-Protocol.h"
#import "YTReusableView-Protocol.h"

@class NSString, UIImageView, YTImageView;

@interface YTSquareThumbnailView : UIView <YTReusableView, YTPageStyling>
{
    UIImageView *_overlayView;
    UIView *_imageBorderUnderlay;
    UIImageView *_checkImage;
    long long _pageStyle;
    _Bool _selected;
    YTImageView *_thumbnailView;
    double _preferredMaxLayoutWidth;
}

@property(nonatomic) double preferredMaxLayoutWidth; // @synthesize preferredMaxLayoutWidth=_preferredMaxLayoutWidth;
@property(retain, nonatomic) YTImageView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
- (void).cxx_destruct;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (void)prepareForReuse;
- (struct CGSize)intrinsicContentSize;
- (void)didToggleSelection:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

