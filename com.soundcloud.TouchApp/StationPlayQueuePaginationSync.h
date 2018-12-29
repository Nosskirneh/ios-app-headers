//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "Sync-Protocol.h"

@class ApiCall, NSString;
@protocol ApiCommand;

@interface StationPlayQueuePaginationSync : NSObject <Sync>
{
    NSString *identifier;
    ApiCall *_apiCall;
    id <ApiCommand> _command;
    long long _analyticsContext;
}

@property(readonly, nonatomic) long long analyticsContext; // @synthesize analyticsContext=_analyticsContext;
@property(readonly, nonatomic) id <ApiCommand> command; // @synthesize command=_command;
@property(readonly, nonatomic) ApiCall *apiCall; // @synthesize apiCall=_apiCall;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier;
- (void).cxx_destruct;
- (id)handleApiResponse:(id)arg1;
- (id)syncWithDispatcher:(id)arg1;
- (id)initWithApiCall:(id)arg1 analyticsContext:(long long)arg2 command:(id)arg3;
- (id)initWithStationUrn:(id)arg1 analyticsContext:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
