//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "YTReusableView-Protocol.h"
#import "YTThumbnailMapping-Protocol.h"

@class NSMutableArray, NSString, YTFormattedStringLabel, YTIMusicPassFeatureInfoRenderer, YTImageView;
@protocol YTFormattedStringLabelDelegate;

@interface YTMusicPassFeatureInfoView : UIView <YTThumbnailMapping, YTReusableView>
{
    YTFormattedStringLabel *_headerLabel;
    YTFormattedStringLabel *_descriptionLabel;
    NSMutableArray *_extendedDescriptionLabels;
    NSMutableArray *_unusedDescriptionLabels;
    YTImageView *_imageView;
    YTIMusicPassFeatureInfoRenderer *_renderer;
    id <YTFormattedStringLabelDelegate> _formattedStringLabelDelegate;
}

+ (double)preferredHeightForRenderer:(id)arg1 width:(double)arg2;
@property(nonatomic) __weak id <YTFormattedStringLabelDelegate> formattedStringLabelDelegate; // @synthesize formattedStringLabelDelegate=_formattedStringLabelDelegate;
@property(retain, nonatomic) YTIMusicPassFeatureInfoRenderer *renderer; // @synthesize renderer=_renderer;
- (void).cxx_destruct;
- (void)clearExtendedDescriptionLabels;
- (id)labelForExtendedDescription:(id)arg1;
- (id)createOrReuseDescriptionLabel;
- (void)prepareForReuse;
- (id)thumbnailMappings;
- (void)layoutSubviews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

