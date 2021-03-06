//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "Sync-Protocol.h"

@class ApiCall, NSString;
@protocol ApiCommand;

@interface ReadRemoteSync : NSObject <Sync>
{
    NSString *identifier;
    ApiCall *_apiCall;
    id <ApiCommand> _command;
}

@property(readonly, nonatomic) id <ApiCommand> command; // @synthesize command=_command;
@property(readonly, nonatomic) ApiCall *apiCall; // @synthesize apiCall=_apiCall;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToSync:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)syncWithDispatcher:(id)arg1;
- (id)initWithApiCall:(id)arg1 command:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

