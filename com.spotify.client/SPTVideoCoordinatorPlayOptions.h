//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BMPlayOptions-Protocol.h"

@class NSString;

@interface SPTVideoCoordinatorPlayOptions : NSObject <BMPlayOptions>
{
    _Bool _playWhenReady;
    double _initialPosition;
}

@property(readonly, nonatomic) _Bool playWhenReady; // @synthesize playWhenReady=_playWhenReady;
@property(readonly, nonatomic) double initialPosition; // @synthesize initialPosition=_initialPosition;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
