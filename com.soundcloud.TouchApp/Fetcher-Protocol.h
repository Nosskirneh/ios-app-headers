//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class RACSignal;

@protocol Fetcher
- (void)fetchMappedObjectsWithCallback:(void (^)(NSArray *))arg1;
- (RACSignal *)fetchCount;
- (RACSignal *)fetchFirst;
- (RACSignal *)fetchAll;
@end

