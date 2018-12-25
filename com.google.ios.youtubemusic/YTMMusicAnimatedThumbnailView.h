//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "YTThumbnailMapping-Protocol.h"

@class NSString, YTIMusicAnimatedThumbnailRenderer, YTImageView, YTMMusicThumbnailView;

@interface YTMMusicAnimatedThumbnailView : UIView <YTThumbnailMapping>
{
    YTIMusicAnimatedThumbnailRenderer *_renderer;
    _Bool _animatedThumbnailVisible;
    _Bool _enableAnimation;
    YTImageView *_animatedThumbnailView;
    YTMMusicThumbnailView *_backupThumbnailView;
}

@property(retain, nonatomic) YTMMusicThumbnailView *backupThumbnailView; // @synthesize backupThumbnailView=_backupThumbnailView;
@property(retain, nonatomic) YTImageView *animatedThumbnailView; // @synthesize animatedThumbnailView=_animatedThumbnailView;
@property(nonatomic) _Bool enableAnimation; // @synthesize enableAnimation=_enableAnimation;
@property(nonatomic) _Bool animatedThumbnailVisible; // @synthesize animatedThumbnailVisible=_animatedThumbnailVisible;
@property(retain, nonatomic) YTIMusicAnimatedThumbnailRenderer *renderer; // @synthesize renderer=_renderer;
- (void).cxx_destruct;
- (id)thumbnailMappings;
- (void)layoutSubviews;
- (id)initWithPlaceholder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

