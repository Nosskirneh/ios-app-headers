//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFormatListPlatformPlaylistRegistration-Protocol.h"

@class NSString;

@interface SPTFormatListPlatformPlaylistRegistrationImplementation : NSObject <SPTFormatListPlatformPlaylistRegistration>
{
    CDUnknownBlockType _handler;
    CDUnknownBlockType _predicate;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType predicate; // @synthesize predicate=_predicate;
@property(readonly, copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
- (void).cxx_destruct;
- (id)initWithHandler:(CDUnknownBlockType)arg1 predicate:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

