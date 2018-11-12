//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SPTCollectionFilterSearchBar;

@protocol SPTCollectionFilterSearchBarDelegate <NSObject>
- (void)filterSearchBarContextButtonTapped:(SPTCollectionFilterSearchBar *)arg1;
- (void)filterSearchBar:(SPTCollectionFilterSearchBar *)arg1 textDidChange:(NSString *)arg2;

@optional
- (void)filterSearchBarTextWillEndEditing:(SPTCollectionFilterSearchBar *)arg1;
- (void)filterSearchBarTextWillBeginEditing:(SPTCollectionFilterSearchBar *)arg1;
- (void)filterSearchBarTextDidEndEditing:(SPTCollectionFilterSearchBar *)arg1;
- (void)filterSearchBarTextDidBeginEditing:(SPTCollectionFilterSearchBar *)arg1;
@end

