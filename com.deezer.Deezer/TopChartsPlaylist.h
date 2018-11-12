//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TopChartsInfos-Protocol.h"

@class DeezerPlaylist, NSString;
@protocol DeezerBrowsable;

@interface TopChartsPlaylist : NSObject <TopChartsInfos>
{
    DeezerPlaylist *_playlist;
    long long _position;
    unsigned long long _variation;
}

@property(nonatomic) unsigned long long variation; // @synthesize variation=_variation;
@property(nonatomic) long long position; // @synthesize position=_position;
@property(retain, nonatomic) DeezerPlaylist *playlist; // @synthesize playlist=_playlist;
- (void).cxx_destruct;
- (id)uniqueID;
@property(readonly, nonatomic) NSObject<DeezerBrowsable> *item;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
