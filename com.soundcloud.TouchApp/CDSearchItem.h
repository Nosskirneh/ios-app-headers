//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_CDSearchItem.h"

#import "PlayableContainer-Protocol.h"

@class NSString;
@protocol EntityWithUrn;

@interface CDSearchItem : _CDSearchItem <PlayableContainer>
{
}

@property(retain, nonatomic) id <EntityWithUrn> searchItem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
