//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol HUBViewModel, SPTFreeTierFindViewModelProvider;

@protocol SPTFreeTierFindViewModelProviderObserver <NSObject>
- (void)viewModelProvider:(id <SPTFreeTierFindViewModelProvider>)arg1 didUpdateFromViewModel:(id <HUBViewModel>)arg2 toViewModel:(id <HUBViewModel>)arg3;
@end

