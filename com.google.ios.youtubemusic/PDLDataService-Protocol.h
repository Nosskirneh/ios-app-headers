//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GPCPromise, NSObject, NSString, PDLClientConfigInternal;
@protocol OS_dispatch_queue;

@protocol PDLDataService <NSObject>
- (GPCPromise *)loadTopNCacheIfNecessaryWithClientConfig:(PDLClientConfigInternal *)arg1;
- (GPCPromise *)loadTopNCacheWithIsBackgroundOperation:(_Bool)arg1 clientConfig:(PDLClientConfigInternal *)arg2;
- (void)bootstrapStarlightCacheWithClientConfig:(PDLClientConfigInternal *)arg1;
- (GPCPromise *)autocompletePeopleByQuery:(NSString *)arg1 client:(NSString *)arg2 withQueue:(NSObject<OS_dispatch_queue> *)arg3 clientConfig:(PDLClientConfigInternal *)arg4;
@end
