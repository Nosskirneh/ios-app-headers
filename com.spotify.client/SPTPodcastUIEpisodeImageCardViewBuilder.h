//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTPodcastUIEpisodeImageCardStyle;

@interface SPTPodcastUIEpisodeImageCardViewBuilder : NSObject
{
    id <SPTPodcastUIEpisodeImageCardStyle> _style;
}

@property(readonly, nonatomic) __weak id <SPTPodcastUIEpisodeImageCardStyle> style; // @synthesize style=_style;
- (void).cxx_destruct;
- (id)buildProgressViewInView:(id)arg1 layout:(id)arg2;
- (id)buildThumbnailViewInView:(id)arg1 layout:(id)arg2;
- (id)buildImageViewInView:(id)arg1 layout:(id)arg2;
- (id)buildLabelStackInView:(id)arg1 belowView:(id)arg2 layout:(id)arg3;
- (id)buildImageGradientInView:(id)arg1 layout:(id)arg2;
- (id)buildThumbnailContainerViewInView:(id)arg1 layout:(id)arg2;
- (id)buildImagePlaceholderTextViewInView:(id)arg1 layout:(id)arg2;
- (id)buildImageContainerInView:(id)arg1 layout:(id)arg2;
- (id)initWithStyle:(id)arg1;

@end

