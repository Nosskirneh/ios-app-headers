//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTNowPlayingScrollProvider;

@protocol SPTNowPlayingScrollDataSource <NSObject>
- (void)unregisterProvider:(id <SPTNowPlayingScrollProvider>)arg1;
- (void)registerProvider:(id <SPTNowPlayingScrollProvider>)arg1;
@end

