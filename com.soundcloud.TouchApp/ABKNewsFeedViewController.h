//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

@class ABKNewsFeedTableViewController;

@interface ABKNewsFeedViewController : UINavigationController
{
    ABKNewsFeedTableViewController *_newsFeed;
}

@property(nonatomic) ABKNewsFeedTableViewController *newsFeed; // @synthesize newsFeed=_newsFeed;
- (void)dismissNewsFeed:(id)arg1;
- (void)addDoneButton;
- (id)init;

@end

