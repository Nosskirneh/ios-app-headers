//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTElementsStoreNotifier-Protocol.h"

@class GPCPromise, YTElementsContext;
@protocol YTElementsState;

@protocol YTElementsStoreProtocol <YTElementsStoreNotifier>
@property(readonly, nonatomic) id <YTElementsState> state;
- (GPCPromise *)performAction:(id)arg1 withContext:(YTElementsContext *)arg2;
- (void)registerActionHandler:(GPCPromise * (^)(id <YTElementsState>, id, YTElementsContext *))arg1;
- (void)registerActionHandler:(GPCPromise * (^)(id <YTElementsState>, id, YTElementsContext *))arg1 forActionClass:(Class)arg2;
@end

