//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTContextAwareURITypeManager-Protocol.h"
#import "SPTFeatureFlagSignalObserver-Protocol.h"

@class NSString;
@protocol SPTEntityService, SPTFeatureFlagSignal;

@interface SPTTrackContextAwareURITypeManager : NSObject <SPTFeatureFlagSignalObserver, SPTContextAwareURITypeManager>
{
    _Bool _freeTierEnabled;
    id <SPTEntityService> _entityService;
    id <SPTFeatureFlagSignal> _freeTierEnabledSignal;
}

@property(nonatomic, getter=isFreeTierEnabled) _Bool freeTierEnabled; // @synthesize freeTierEnabled=_freeTierEnabled;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> freeTierEnabledSignal; // @synthesize freeTierEnabledSignal=_freeTierEnabledSignal;
@property(retain, nonatomic) id <SPTEntityService> entityService; // @synthesize entityService=_entityService;
- (void).cxx_destruct;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)resolveDefaultContextForURI:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (_Bool)typeManagerRecognizesURI:(id)arg1;
- (id)initWithEntityService:(id)arg1 freeTierEnabledSignal:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

