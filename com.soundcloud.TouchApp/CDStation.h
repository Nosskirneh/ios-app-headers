//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_CDStation.h"

#import "EntityWithUrn-Protocol.h"

@class NSString, Urn;

@interface CDStation : _CDStation <EntityWithUrn>
{
}

@property(retain, nonatomic) Urn *urn;
@property(readonly, nonatomic) _Bool hasExpired;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
