//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SPTFreeTierCollectionFilterBarViewController;

@protocol SPTFreeTierCollectionFilterBarViewControllerDelegate <NSObject>
- (void)freeTierFilterSearchBarContextButtonTapped:(SPTFreeTierCollectionFilterBarViewController *)arg1;
- (void)freeTierFilterSearchBar:(SPTFreeTierCollectionFilterBarViewController *)arg1 textDidChange:(NSString *)arg2;

@optional
- (void)freeTierFilterSearchBarTextWillEndEditing:(SPTFreeTierCollectionFilterBarViewController *)arg1;
- (void)freeTierFilterSearchBarTextWillBeginEditing:(SPTFreeTierCollectionFilterBarViewController *)arg1;
- (void)freeTierFilterSearchBarTextDidEndEditing:(SPTFreeTierCollectionFilterBarViewController *)arg1;
- (void)freeTierFilterSearchBarTextDidBeginEditing:(SPTFreeTierCollectionFilterBarViewController *)arg1;
@end

