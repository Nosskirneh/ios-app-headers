//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray;

@protocol SPTAssistedCurationCardsSortMechanism <NSObject>
- (void)sortWithNewCards:(NSArray *)arg1 withEnumeratorBlock:(NSEnumerator * (^)(void))arg2 insertCardAtIndexBlock:(void (^)(id <SPTAssistedCurationCardViewModel>, unsigned long long))arg3 completionBlock:(void (^)(_Bool, long long))arg4;
@end

