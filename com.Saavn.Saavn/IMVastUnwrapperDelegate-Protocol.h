//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IMVastUnwrapper, NSArray, NSError;

@protocol IMVastUnwrapperDelegate <NSObject>
- (void)vastUnwrapper:(IMVastUnwrapper *)arg1 finishedUnwrappingWithAds:(NSArray *)arg2;
- (void)vastUnwrapper:(IMVastUnwrapper *)arg1 didFailToUnwrapWithError:(NSError *)arg2 andUnwrappedAds:(NSArray *)arg3;
@end
