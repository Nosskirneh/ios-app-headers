//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"
#import "SPTPodcastUIButtonsDelegate-Protocol.h"

@class GLUEAccessoryIconButton, NSIndexPath, NSURL, SPTContextMenuAccessoryButton, UITableViewCell, UIViewController;
@protocol SPTPageController, SPTPodcastEpisodeCellActionHandlerDelegate, SPTPodcastUIButtonWithIndex;

@protocol SPTPodcastEpisodeCellActionTarget <NSObject, SPTPodcastUIButtonsDelegate>
- (void)didSelectHeaderForCell:(UITableViewCell *)arg1 atIndexPath:(NSIndexPath *)arg2;
- (void)didSelectDescriptionForCell:(UITableViewCell *)arg1 atIndexPath:(NSIndexPath *)arg2;
- (void)playButtonTapped:(GLUEAccessoryIconButton<SPTPodcastUIButtonWithIndex> *)arg1;
- (void)cellContextMenuTapped:(SPTContextMenuAccessoryButton *)arg1;
- (void)offlineAccessoryButtonTapped:(GLUEAccessoryIconButton<SPTPodcastUIButtonWithIndex> *)arg1;

@optional
@property(nonatomic) __weak id <SPTPodcastEpisodeCellActionHandlerDelegate> delegate;
- (void)configureForViewController:(UIViewController<SPTPageController> *)arg1;
- (UIViewController<SPTPageController> *)episodeViewControllerWithURI:(NSURL *)arg1;
- (void)navigateToEpisodeViewControllerWithURI:(NSURL *)arg1;
- (void)removeButtonTapped:(GLUEAccessoryIconButton<SPTPodcastUIButtonWithIndex> *)arg1;
- (void)didSelectCell:(UITableViewCell *)arg1 atIndexPath:(NSIndexPath *)arg2;
@end

