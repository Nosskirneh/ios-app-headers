//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTShelfRegistry-Protocol.h"

@class NSMutableDictionary, NSString;

@interface SPTShelfRegistryImplementation : NSObject <SPTShelfRegistry>
{
    NSMutableDictionary *_urlPredicates;
}

@property(readonly, nonatomic) NSMutableDictionary *urlPredicates; // @synthesize urlPredicates=_urlPredicates;
- (void).cxx_destruct;
- (id)provideShelfForURI:(id)arg1 swipeType:(long long)arg2;
- (void)registerShelfForURIPredicate:(CDUnknownBlockType)arg1 swipeType:(long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

