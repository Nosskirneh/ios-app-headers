//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, NSURL, SFSafariViewController;

@protocol SFSafariViewControllerDelegate <NSObject>

@optional
- (void)safariViewController:(SFSafariViewController *)arg1 initialLoadDidRedirectToURL:(NSURL *)arg2;
- (void)safariViewController:(SFSafariViewController *)arg1 didCompleteInitialLoad:(_Bool)arg2;
- (void)safariViewControllerDidFinish:(SFSafariViewController *)arg1;
- (NSArray *)safariViewController:(SFSafariViewController *)arg1 excludedActivityTypesForURL:(NSURL *)arg2 title:(NSString *)arg3;
- (NSArray *)safariViewController:(SFSafariViewController *)arg1 activityItemsForURL:(NSURL *)arg2 title:(NSString *)arg3;
@end

