//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTHomeMixEvent.h"

@interface SPTHomeMixEventOfflineStatusChanged : SPTHomeMixEvent
{
    _Bool _offline;
}

@property(readonly, nonatomic, getter=isOffline) _Bool offline; // @synthesize offline=_offline;
- (id)initWithOfflineStatus:(_Bool)arg1;

@end
