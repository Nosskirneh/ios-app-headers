//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "EXP_SPTHubRemoteContentOperationURLResolver-Protocol.h"

@class NSString, NSURL;
@protocol SPTOnDemandSet;

@interface SPTFreeTierArtistHubRemoteURLResolver : NSObject <EXP_SPTHubRemoteContentOperationURLResolver>
{
    NSURL *_viewURI;
    id <SPTOnDemandSet> _onDemandSet;
}

@property(readonly, nonatomic) id <SPTOnDemandSet> onDemandSet; // @synthesize onDemandSet=_onDemandSet;
@property(readonly, copy, nonatomic) NSURL *viewURI; // @synthesize viewURI=_viewURI;
- (void).cxx_destruct;
- (id)resolveContentURL;
- (id)initWithViewURI:(id)arg1 onDemandSet:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

