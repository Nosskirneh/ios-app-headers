//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface VOXSourcesStateObserver : NSObject
{
    _Bool _isObserving;
    unsigned long long _syncState;
}

+ (id)shared;
@property(nonatomic) unsigned long long syncState; // @synthesize syncState=_syncState;
- (void)itunesDidEndUpdate;
- (void)itunesDidBeginUpdate;
- (void)localFilesDidEndUpdate;
- (void)localFilesDidBeginUpdate;
- (void)soundCloudDidEndUpdate;
- (void)soundCloudDidBeginUpdate;
- (void)spotifyDidEndSync;
- (void)spotifyDidBegingSync;
- (void)loopDidEndSync;
- (void)loopDidBegingSync;
- (void)stop;
- (void)startObservation;

@end

