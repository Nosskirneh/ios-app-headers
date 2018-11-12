//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABKPersistentData;

@interface ABKServerResponseHandler : NSObject
{
    ABKPersistentData *_persistentUserData;
}

@property(retain) ABKPersistentData *persistentUserData; // @synthesize persistentUserData=_persistentUserData;
- (void).cxx_destruct;
- (void)processResponseFromInFlightDataRequest:(id)arg1;
- (void)showTemplatedMessageFromResponse:(id)arg1 withTriggerAction:(id)arg2;
- (void)updateGeofences:(id)arg1;
- (void)updateServerConfig:(id)arg1;
- (id)getJSONDictionaryWithData:(id)arg1;
- (_Bool)responseStatusCodeIsValid:(id)arg1;
- (_Bool)processResponse:(id)arg1 withData:(id)arg2 withInFlightRequest:(id)arg3;
- (id)initWithPersistentUserData:(id)arg1;

@end
