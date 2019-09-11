//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError;
@protocol SPTRecentlyPlayedList;

@protocol SPTRecentlyPlayedListObserver <NSObject>
- (void)recentlyPlayedListDidReload:(id <SPTRecentlyPlayedList>)arg1;

@optional
- (void)recentlyPlayedList:(id <SPTRecentlyPlayedList>)arg1 didFailWithError:(NSError *)arg2;
@end

