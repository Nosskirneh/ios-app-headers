//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ANGPlaylist;

@interface PlaylistSyncOperation : NSObject
{
    unsigned long long _priority;
    ANGPlaylist *_playlist;
    unsigned long long _type;
}

@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) ANGPlaylist *playlist; // @synthesize playlist=_playlist;
@property(readonly, nonatomic) unsigned long long priority; // @synthesize priority=_priority;
- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (unsigned long long)computePriority;
- (id)initWithPlaylist:(id)arg1 type:(unsigned long long)arg2;

@end

