//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath, SPTYourLibraryPagesViewController, UIViewController;

@protocol SPTYourLibraryPagesViewControllerDatasource <NSObject>
- (UIViewController *)yourLibraryPagesViewController:(SPTYourLibraryPagesViewController *)arg1 viewControllerForPageAtIndexPath:(NSIndexPath *)arg2;
- (unsigned long long)yourLibraryPagesViewController:(SPTYourLibraryPagesViewController *)arg1 numberPagesForSection:(unsigned long long)arg2;
- (unsigned long long)numberSectionsForYourLibraryPagesViewController:(SPTYourLibraryPagesViewController *)arg1;
@end
