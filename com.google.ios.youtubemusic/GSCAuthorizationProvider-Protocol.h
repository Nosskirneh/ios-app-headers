//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GPCPromise, NSString;

@protocol GSCAuthorizationProvider <NSObject>
- (void)removeFetcherServiceForGaiaId:(NSString *)arg1;
- (GPCPromise *)fetcherServiceForGaiaId:(NSString *)arg1;
@end

