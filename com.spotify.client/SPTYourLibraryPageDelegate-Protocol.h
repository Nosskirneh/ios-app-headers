//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIScrollView;
@protocol SPTYourLibraryPage;

@protocol SPTYourLibraryPageDelegate <NSObject>
- (void)page:(id <SPTYourLibraryPage>)arg1 disablePagesScroll:(_Bool)arg2;
- (void)pageDidStopScrolling:(id <SPTYourLibraryPage>)arg1;
- (void)page:(id <SPTYourLibraryPage>)arg1 didScroll:(UIScrollView *)arg2;
- (void)page:(id <SPTYourLibraryPage>)arg1 collapseTabControl:(_Bool)arg2;
- (_Bool)pageShouldScrollToTop:(id <SPTYourLibraryPage>)arg1;
- (void)didFinishLoadingPage:(id <SPTYourLibraryPage>)arg1;
@end

