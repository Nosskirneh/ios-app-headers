//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface ADJInternalState : NSObject
{
    _Bool _enabled;
    _Bool _offline;
    _Bool _background;
    _Bool _delayStart;
    _Bool _updatePackages;
    _Bool _firstLaunch;
    _Bool _sessionResponseProcessed;
}

@property(nonatomic) _Bool sessionResponseProcessed; // @synthesize sessionResponseProcessed=_sessionResponseProcessed;
@property(nonatomic) _Bool firstLaunch; // @synthesize firstLaunch=_firstLaunch;
@property(nonatomic) _Bool updatePackages; // @synthesize updatePackages=_updatePackages;
@property(nonatomic) _Bool delayStart; // @synthesize delayStart=_delayStart;
@property(nonatomic) _Bool background; // @synthesize background=_background;
@property(nonatomic) _Bool offline; // @synthesize offline=_offline;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (_Bool)hasSessionResponseNotBeenProcessed;
- (_Bool)isFirstLaunch;
- (_Bool)itHasToUpdatePackages;
- (_Bool)isNotInDelayedStart;
- (_Bool)isInDelayedStart;
- (_Bool)isInForeground;
- (_Bool)isInBackground;
- (_Bool)isOnline;
- (_Bool)isOffline;
- (_Bool)isDisabled;
- (_Bool)isEnabled;
- (id)init;

@end

