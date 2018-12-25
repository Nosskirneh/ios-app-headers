//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MDXBaseScreen.h"

#import "MDXScreen-Protocol.h"

@class GCKDevice, NSDate, NSString;

@interface MDXCastScreen : MDXBaseScreen <MDXScreen>
{
    GCKDevice *_device;
}

@property(retain, nonatomic) GCKDevice *device; // @synthesize device=_device;
- (void).cxx_destruct;
- (void)device:(id)arg1;
- (id)screenSessionWithPairingHandler:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)channel;
@property(readonly, nonatomic, getter=isAudioDevice) _Bool audioDevice;
- (id)initWithCastDevice:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *clientName;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *loungeToken;
@property(readonly, nonatomic) NSDate *loungeTokenExpiration;
@property(copy, nonatomic) NSString *name;
@property(readonly, nonatomic) int routeType;
@property(copy, nonatomic) NSString *screenID;
@property(readonly) Class superclass;

@end

