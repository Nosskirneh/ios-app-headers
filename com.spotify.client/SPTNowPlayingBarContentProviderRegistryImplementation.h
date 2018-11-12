//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTNowPlayingBarContentProviderRegistry-Protocol.h"

@class NSMutableArray, NSString;

@interface SPTNowPlayingBarContentProviderRegistryImplementation : NSObject <SPTNowPlayingBarContentProviderRegistry>
{
    NSMutableArray *_providers;
}

@property(retain, nonatomic) NSMutableArray *providers; // @synthesize providers=_providers;
- (void).cxx_destruct;
- (id)firstLeftAccessoryProviderForPlayerTrack:(id)arg1;
- (id)firstContentProviderForPlayerTrack:(id)arg1;
- (void)unregisterNowPlayingBarContentProvider:(id)arg1;
- (void)registerNowPlayingBarContentProvider:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

