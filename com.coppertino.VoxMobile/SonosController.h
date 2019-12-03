//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSArray, NSMutableArray, NSNumber, NSString;

@interface SonosController : NSObject <NSCoding>
{
    long long _volumeLevel;
    NSMutableArray *_slaves;
    NSNumber *_instanceID;
    _Bool _coordinator;
    NSString *_ip;
    NSString *_group;
    NSString *_name;
    NSString *_uuid;
}

@property(nonatomic, getter=isCoordinator) _Bool coordinator; // @synthesize coordinator=_coordinator;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *group; // @synthesize group=_group;
@property(retain, nonatomic) NSString *ip; // @synthesize ip=_ip;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)removeAllSlaves;
- (void)removeSlave:(id)arg1;
- (void)addSlave:(id)arg1;
@property(readonly, nonatomic) NSArray *slaves;
- (void)getZoneGroupState:(CDUnknownBlockType)arg1;
- (void)getZoneGroupAttributes:(CDUnknownBlockType)arg1;
- (void)getZoneInfo:(CDUnknownBlockType)arg1;
- (void)getZoneAttributes:(CDUnknownBlockType)arg1;
- (void)listAvailableServices:(CDUnknownBlockType)arg1;
- (void)listAlarms:(CDUnknownBlockType)arg1;
- (void)browseQueue:(CDUnknownBlockType)arg1;
- (void)browseContent:(CDUnknownBlockType)arg1;
- (void)lineIn:(CDUnknownBlockType)arg1;
- (void)setVolume:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)subscribeForZoneGroupTopologyToIP:(id)arg1 port:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)subscribeForAVTransportToIP:(id)arg1 port:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)subscribeForVolumeToIP:(id)arg1 port:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)unsubscribeForZoneGroupTopologyToIP:(id)arg1 port:(unsigned long long)arg2 eventSID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)unsubscribeForAVTransportToIP:(id)arg1 port:(unsigned long long)arg2 eventSID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)unsubscribeForVolumeToIP:(id)arg1 port:(unsigned long long)arg2 eventSID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)getVolume:(CDUnknownBlockType)arg1;
- (void)setMute:(CDUnknownBlockType)arg1;
- (void)getMute:(CDUnknownBlockType)arg1;
- (void)getCurrentConnectionInfo:(CDUnknownBlockType)arg1;
- (void)getCurrentConnectionIDs:(CDUnknownBlockType)arg1;
- (void)getProtocolInfo:(CDUnknownBlockType)arg1;
- (void)changeCoordinatorTo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)previous:(CDUnknownBlockType)arg1;
- (void)next:(CDUnknownBlockType)arg1;
- (void)pause:(CDUnknownBlockType)arg1;
- (void)setURI:(id)arg1 metaData:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)play:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stop:(CDUnknownBlockType)arg1;
- (void)getTransportSettings:(CDUnknownBlockType)arg1;
- (void)getDeviceCapabilities:(CDUnknownBlockType)arg1;
- (void)getPositionInfo:(CDUnknownBlockType)arg1;
- (void)getTransportInfo:(CDUnknownBlockType)arg1;
- (void)getMediaInfo:(CDUnknownBlockType)arg1;
- (void)queue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getDescription:(CDUnknownBlockType)arg1;
- (void)requestEventUnsubscription:(long long)arg1 localIP:(id)arg2 port:(unsigned long long)arg3 eventSID:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)requestEventSubscription:(long long)arg1 localIP:(id)arg2 port:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)request:(long long)arg1 action:(id)arg2 params:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)description;
- (id)initWithIP:(id)arg1;

@end
