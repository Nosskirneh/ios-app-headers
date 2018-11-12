//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol EXP_HUBViewModel, SPTSearch2ContextDelegate;

@protocol SPTSearch2Context <NSObject>
@property(readonly, nonatomic) unsigned long long state;
@property(readonly, nonatomic) id <EXP_HUBViewModel> viewModel;
@property(readonly, copy, nonatomic) NSString *query;
@property(nonatomic) __weak id <SPTSearch2ContextDelegate> delegate;
- (void)loadNextPage;
- (void)reload;
@end

