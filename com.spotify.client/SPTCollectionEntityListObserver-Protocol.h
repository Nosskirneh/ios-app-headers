//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError;
@protocol SPTCollectionEntityList;

@protocol SPTCollectionEntityListObserver <NSObject>
- (void)entityListDidReload:(id <SPTCollectionEntityList>)arg1;

@optional
- (void)entityList:(id <SPTCollectionEntityList>)arg1 didFailWithError:(NSError *)arg2;
@end

