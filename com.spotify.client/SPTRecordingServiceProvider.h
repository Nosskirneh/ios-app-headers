//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTServiceProvider-Protocol.h"

@class NSMutableSet, NSSet, NSString;
@protocol SPTServiceProvider;

@interface SPTRecordingServiceProvider : NSObject <SPTServiceProvider>
{
    id <SPTServiceProvider> _parentServiceProvider;
    NSMutableSet *_providedServices;
}

@property(retain, nonatomic) NSMutableSet *providedServices; // @synthesize providedServices=_providedServices;
@property(retain, nonatomic) id <SPTServiceProvider> parentServiceProvider; // @synthesize parentServiceProvider=_parentServiceProvider;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSSet *recordedDependencies;
- (id)provideOptionalServiceForIdentifier:(id)arg1;
- (id)provideServiceForIdentifier:(id)arg1;
- (id)initWithParentServiceProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

