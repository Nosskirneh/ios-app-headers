//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "SPTImageLoaderDelegate-Protocol.h"

@class GLUEImageView, NSString, NSURL;
@protocol SPTImageLoader;

@interface SPTPodcastEpisodeCoverArtTableViewCell : UITableViewCell <SPTImageLoaderDelegate>
{
    id <SPTImageLoader> _imageLoader;
    NSURL *_lastCoverArtImageURL;
    GLUEImageView *_coverArtImageView;
}

@property(retain, nonatomic) GLUEImageView *coverArtImageView; // @synthesize coverArtImageView=_coverArtImageView;
@property(retain, nonatomic) NSURL *lastCoverArtImageURL; // @synthesize lastCoverArtImageURL=_lastCoverArtImageURL;
@property(readonly, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
- (void).cxx_destruct;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
@property(retain, nonatomic) NSURL *coverArtImageURL;
- (id)initWithImageLoader:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

