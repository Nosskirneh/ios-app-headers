//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL, UIViewController;
@protocol SPTPageCreationContext, SPTPodcastEpisodeFeaturedContentTrackListViewController, SPTPodcastEpisodeFeaturedContentViewController;

@protocol SPTPodcastEpisodeFeaturedContentViewProvider <NSObject>
- (UIViewController<SPTPodcastEpisodeFeaturedContentTrackListViewController> *)featuredContentTrackListForEpisodeURL:(NSURL *)arg1 withContext:(id <SPTPageCreationContext>)arg2;
- (UIViewController<SPTPodcastEpisodeFeaturedContentViewController> *)featuredContentForEpisodeURL:(NSURL *)arg1 withContext:(id <SPTPageCreationContext>)arg2;
@end

