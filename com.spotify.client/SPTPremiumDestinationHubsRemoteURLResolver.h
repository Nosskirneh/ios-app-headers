//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTHubRemoteContentOperationURLResolver-Protocol.h"

@class NSString;
@protocol SPTPremiumDestinationExperiments;

@interface SPTPremiumDestinationHubsRemoteURLResolver : NSObject <SPTHubRemoteContentOperationURLResolver>
{
    id <SPTPremiumDestinationExperiments> _experiments;
}

@property(retain, nonatomic) id <SPTPremiumDestinationExperiments> experiments; // @synthesize experiments=_experiments;
- (void).cxx_destruct;
- (id)resolveContentURL;
- (id)initWithExperiments:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

