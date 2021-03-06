//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol HUBViewModel, SPTBrowseViewModelProviderObserver;

@protocol SPTBrowseViewModelProvider <NSObject>
@property(readonly, nonatomic) unsigned long long state;
@property(readonly, nonatomic) id <HUBViewModel> viewModel;
- (void)loadNextPage;
- (void)refresh;
- (void)reload;
- (void)removeObserver:(id <SPTBrowseViewModelProviderObserver>)arg1;
- (void)addObserver:(id <SPTBrowseViewModelProviderObserver>)arg1;
@end

