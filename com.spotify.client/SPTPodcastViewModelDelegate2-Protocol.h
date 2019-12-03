//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSIndexPath, SPTPodcastFilterContextViewController, SPTPodcastViewModel2, UIView;

@protocol SPTPodcastViewModelDelegate2 <NSObject>
- (void)viewModel:(SPTPodcastViewModel2 *)arg1 scrollToLatestPlayedEpisodeAtIndexPath:(NSIndexPath *)arg2;
- (void)podcastViewModelDidUpdatePlaybackRestrictions:(SPTPodcastViewModel2 *)arg1;
- (void)viewModel:(SPTPodcastViewModel2 *)arg1 didUpdateFilteredState:(_Bool)arg2;
- (void)viewModelPodcastDidUpdatePlayingEpisode:(SPTPodcastViewModel2 *)arg1 atIndexPath:(NSIndexPath *)arg2;
- (void)viewModel:(SPTPodcastViewModel2 *)arg1 requestsShowContextMenuPresentationFromSenderView:(UIView *)arg2;
- (void)viewModelFinishedLoadingWithoutPlayerStateChange:(SPTPodcastViewModel2 *)arg1;
- (void)viewModel:(SPTPodcastViewModel2 *)arg1 willPresentFilterContextViewController:(SPTPodcastFilterContextViewController *)arg2 fromSender:(id)arg3;
- (void)viewModel:(SPTPodcastViewModel2 *)arg1 podcastDidFinishLoadingWithError:(NSError *)arg2;
@end
