//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SDLRPCStruct.h"

@class NSString, SDLNavigationCapability, SDLPhoneCapability, SDLRemoteControlCapabilities, SDLVideoStreamingCapability;

@interface SDLSystemCapability : SDLRPCStruct
{
}

@property(retain, nonatomic) SDLRemoteControlCapabilities *remoteControlCapability;
@property(retain, nonatomic) SDLVideoStreamingCapability *videoStreamingCapability;
@property(retain, nonatomic) SDLPhoneCapability *phoneCapability;
@property(retain, nonatomic) SDLNavigationCapability *navigationCapability;
@property(retain, nonatomic) NSString *systemCapabilityType;
- (id)initWithRemoteControlCapability:(id)arg1;
- (id)initWithVideoStreamingCapability:(id)arg1;
- (id)initWithNavigationCapability:(id)arg1;
- (id)initWithPhoneCapability:(id)arg1;

@end

