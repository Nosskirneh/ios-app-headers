//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPlaylistExtenderModelEvent-Protocol.h"

@class NSString;

@interface SPTPlaylistExtenderModelEventOffline : NSObject <SPTPlaylistExtenderModelEvent>
{
    _Bool _offline;
}

@property(readonly, nonatomic) _Bool offline; // @synthesize offline=_offline;
- (void)processWithState:(id)arg1 loop:(id)arg2;
- (id)initWithOffline:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

