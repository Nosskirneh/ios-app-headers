//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTVoiceDeeplinkURIResolver-Protocol.h"

@class NSString;
@protocol SPTEntityService, SPTShowEntityService;

@interface SPTVoiceDeeplinkURIResolverImplementation : NSObject <SPTVoiceDeeplinkURIResolver>
{
    id <SPTEntityService> _entityService;
    id <SPTShowEntityService> _showEntityService;
}

@property(readonly, nonatomic) id <SPTShowEntityService> showEntityService; // @synthesize showEntityService=_showEntityService;
@property(readonly, nonatomic) id <SPTEntityService> entityService; // @synthesize entityService=_entityService;
- (void).cxx_destruct;
- (void)resolveDeeplinkWithCommand:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithEntityService:(id)arg1 showEntityService:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

